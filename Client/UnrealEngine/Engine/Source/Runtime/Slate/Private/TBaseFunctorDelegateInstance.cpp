// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 759

// CreateCopy @ 1426b5140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1426b51c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1426b5210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1426b9730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  `FSlateApplication::FSlateApplication'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 1426b9a60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  `FSlateApplication::FSlateApplication'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1426bca70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1426be3e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1426bfaf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1426c13d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1426c2950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1426e2a30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FSlateApplication::FSlateApplication'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1427220a0

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142722150

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001427221b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1427221d0

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142722290

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_STabDrawerButton__QEAAXAEBUFArguments_4_V__TSharedRef_VSDockTab___00__W4ESidebarLocation___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142722310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_STabDrawerButton__QEAAXAEBUFArguments_4_V__TSharedRef_VSDockTab___00__W4ESidebarLocation___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142722360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_STabDrawerButton__QEAAXAEBUFArguments_4_V__TSharedRef_VSDockTab___00__W4ESidebarLocation___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142722400

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427224a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142722500

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14272f0a0

EVisibility __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 14272f100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `STabDrawerButton::Construct'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14272f110

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  bool bVar1;
  
  bVar1 = `FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 142731a70

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 142731ac0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `STabDrawerButton::Construct'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142731ae0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14273aa50

ulong64 __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14273aa60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14273aa70

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1427408a0

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1427408b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1427408c0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142745670

UObject * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142745680

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142745690

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142747430

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142747440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142747450

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14274d5b0

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14274d5c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14274d5d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14278e5d0

FName __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TFunction<EVisibility___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14278e5e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`STabDrawerButton::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14278e5f0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FTabManager::RequestSavePersistentLayout'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1427f4d80

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x3f60,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f4df0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x3f60,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1427f4e30

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x3f60,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f4ec0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f4f60

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1427f4fd0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::`37'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f5090

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x3f50,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f5100

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x3f50,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1427f5140

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x3f50,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f51d0

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__AEBV__TSharedRef_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::`23'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f5250

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__AEBV__TSharedRef_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::`23'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1427f52a0

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__AEBV__TSharedRef_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::`23'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f5340

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x1c8,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_UE::Slate::Private::ApplySectionOverridesToBlock_::__l14::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f53b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x1c8,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_UE::Slate::Private::ApplySectionOverridesToBlock_::__l14::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1427f53f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x1c8,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,_UE::Slate::Private::ApplySectionOverridesToBlock_::__l14::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f5480

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f5500

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1427f5550

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f55f0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__V__TFunction___A6AHXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f56a0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__V__TFunction___A6AHXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001427f5704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1427f5720

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__V__TFunction___A6AHXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427f57e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427f5890

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001427f58f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1427f5910

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142802b60

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::Execute(void *this,FMargin *__return_storage_ptr__)

{
  bool bVar1;
  FText *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)((longlong)this + 0x20) == '\0') {
    this_00 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x28));
    bVar1 = FText::IsEmpty(this_00);
    if (!bVar1) {
      uVar2 = *(undefined4 *)((longlong)this + 0x3660);
      uVar3 = *(undefined4 *)((longlong)this + 0x3664);
      uVar4 = *(undefined4 *)((longlong)this + 0x3668);
      uVar5 = *(undefined4 *)((longlong)this + 0x366c);
      goto LAB_142802b97;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_142802b97:
  __return_storage_ptr__->Left = (float)uVar2;
  __return_storage_ptr__->Top = (float)uVar3;
  __return_storage_ptr__->Right = (float)uVar4;
  __return_storage_ptr__->Bottom = (float)uVar5;
  return __return_storage_ptr__;
}

// Execute @ 142802bc0

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::Execute(void *this,FMargin *__return_storage_ptr__)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  uVar3 = *(undefined8 *)((longlong)this + 0x30);
  __return_storage_ptr__->Left = (float)(int)uVar2;
  __return_storage_ptr__->Top = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->Right = (float)(int)uVar3;
  __return_storage_ptr__->Bottom = (float)(int)((ulonglong)uVar3 >> 0x20);
  pSVar1 = *(SWidget **)((longlong)this + 0x18);
  if ((pSVar1[2].Tag.Number & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
  }
  bVar4 = FText::IsEmpty((FText *)(pSVar1 + 1));
  if (bVar4) {
    __return_storage_ptr__->Bottom = *(float *)((longlong)this + 0x2c);
  }
  return __return_storage_ptr__;
}

// Execute @ 142802c30

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::Execute(void *this,FMargin *__return_storage_ptr__)

{
  bool bVar1;
  FText *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x20));
  bVar1 = FText::IsEmpty(this_00);
  if (bVar1) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((longlong)this + 0x3650);
    uVar3 = *(undefined4 *)((longlong)this + 0x3654);
    uVar4 = *(undefined4 *)((longlong)this + 0x3658);
    uVar5 = *(undefined4 *)((longlong)this + 0x365c);
  }
  __return_storage_ptr__->Left = (float)uVar2;
  __return_storage_ptr__->Top = (float)uVar3;
  __return_storage_ptr__->Right = (float)uVar4;
  __return_storage_ptr__->Bottom = (float)uVar5;
  return __return_storage_ptr__;
}

// Execute @ 142802c90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::Execute(void *this,FMenuEntryResizeParams *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1)

{
  `SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142802cc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::Execute(void *this,FMenuEntryResizeParams *__return_storage_ptr__)

{
  `UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142802cf0

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x270),&local_28);
  if (*(int *)(lVar1 + 0x280) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x278);
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 142802d50

int __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142802d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return iVar2;
}

// Execute @ 142802da0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142802ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// ExecuteIfSafe @ 1428057c0

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FText *this_00;
  
  if (*(char *)((longlong)this + 0x20) == '\0') {
    this_00 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x28));
    FText::IsEmpty(this_00);
  }
  return true;
}

// ExecuteIfSafe @ 1428057f0

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  SWidget *pSVar1;
  
  pSVar1 = *(SWidget **)((longlong)this + 0x18);
  if ((pSVar1[2].Tag.Number & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
  }
  FText::IsEmpty((FText *)(pSVar1 + 1));
  return true;
}

// ExecuteIfSafe @ 142805830

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FText *this_00;
  
  this_00 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x20));
  FText::IsEmpty(this_00);
  return true;
}

// ExecuteIfSafe @ 142805860

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 local_d8 [8];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [24];
  FWrappingParams local_78;
  
  `SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(FMenuEntryResizeParams *)local_d8,param_1);
  FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  return true;
}

// ExecuteIfSafe @ 142805900

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  undefined1 local_d8 [8];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [24];
  FWrappingParams local_78;
  
  `UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(FMenuEntryResizeParams *)local_d8);
  FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  return true;
}

// ExecuteIfSafe @ 1428059a0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x270),&local_28);
  if (*(int *)(lVar1 + 0x280) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x278);
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return true;
}

// ExecuteIfSafe @ 142805a00

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 142805a50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14280db10

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db20

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db30

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db40

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db50

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db60

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db70

ulong64 __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14280db80

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142811ac0

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811ad0

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811ae0

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811af0

void * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811b00

void * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811b10

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811b20

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142811b30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142815f60

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815f70

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815f80

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815f90

UObject * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815fa0

UObject * __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815fb0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815fc0

UObject * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142815fd0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142818960

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142818970

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142818980

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142818990

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1428189a0

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1428189b0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1428189c0

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1428189d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14281e830

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e840

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e850

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e860

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e870

bool __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e880

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14281e890

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14281e8a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142837bc0

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837bd0

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837be0

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837bf0

FName __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837c00

FName __thiscall
TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837c10

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837c20

FName __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<int___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142837c30

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TFunction<bool___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142868bc0

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142868c40

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142868c90

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142868d30

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142868db0

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142868e00

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142868ea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142868f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142868f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142869000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142869080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1428690c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142869160

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1428691e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142869220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1428692c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142869340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142869380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142869420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1428694a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1428694e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142869580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142869600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142869640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1428696e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142869760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1428697a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14286f810

FString * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FString *__return_storage_ptr__)

{
  FReflectionMetaData::GetWidgetDebugInfo
            (__return_storage_ptr__,*(SWidget **)((longlong)this + 0x18));
  return __return_storage_ptr__;
}

// Execute @ 14286f840

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::Execute(void *this,double param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x1a0))();
  if (cVar1 == '\0') {
    bVar2 = FSlateEditableTextLayout::HasActiveContextMenu
                      (*(FSlateEditableTextLayout **)(*(longlong *)((longlong)this + 0x18) + 0x230))
    ;
    if (!bVar2) {
      return Stop;
    }
  }
  return Continue;
}

// Execute @ 14286f890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdateForegroundColor((SButton *)param_1);
  return;
}

// Execute @ 14286f8a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return;
}

// Execute @ 14286f8b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return;
}

// Execute @ 14286f8c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return;
}

// Execute @ 14286f8d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  SButton::UpdateBorderImage((SButton *)param_1);
  SButton::UpdateForegroundColor((SButton *)param_1);
  return;
}

// Execute @ 14286f900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdateBorderImage((SButton *)param_1);
  return;
}

// Execute @ 14286f910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::Execute(void *this,SWidget *param_1)

{
  SButton::UpdateBorderImage((SButton *)param_1);
  SButton::UpdateForegroundColor((SButton *)param_1);
  return;
}

// ExecuteIfSafe @ 142870780

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FString local_18;
  
  FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)((longlong)this + 0x18));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1428707b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x1a0))();
  if (cVar1 == '\0') {
    FSlateEditableTextLayout::HasActiveContextMenu
              (*(FSlateEditableTextLayout **)(*(longlong *)((longlong)this + 0x18) + 0x230));
  }
  return true;
}

// ExecuteIfSafe @ 1428707f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdateForegroundColor((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 142870810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 142870830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 142870850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 142870870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdatePadding((SButton *)param_1);
  SButton::UpdateBorderImage((SButton *)param_1);
  SButton::UpdateForegroundColor((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 1428708a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdateBorderImage((SButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 1428708c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SButton::UpdateBorderImage((SButton *)param_1);
  SButton::UpdateForegroundColor((SButton *)param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142875380

ulong64 __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142875390

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1428753f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142875400

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142878150

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142878160

void * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142878170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142878180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142878190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428781a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428781b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428781c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428781d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14287d380

UObject * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d390

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d3f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14287d400

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14287f310

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f320

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14287f390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142882570

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142882580

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142882590

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1428825f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14289e2e0

FName __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SEditableText::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e2f0

FName __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e300

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e310

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e320

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e330

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e340

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e350

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14289e360

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142911d40

void __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_C__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142911df0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_C__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142911e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142911e70

void __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_C__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142911f30

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_E__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142911fe0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_E__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912060

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_E__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912120

void __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_F__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429121d0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_F__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912250

void __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_F__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912310

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_G__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429123c0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_G__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912440

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_G__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912500

void __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_H__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429125b0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_H__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912630

void __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_H__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429126f0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_I__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429127a0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_I__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912820

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_I__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429128e0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_M__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142912990

void __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_M__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001429129f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912a10

void __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_M__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912ad0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_N__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142912b80

void __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_N__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912c00

void __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_N__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912cc0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__J__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142912d70

void __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__J__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912df0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__J__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142912eb0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__K__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142912f60

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__K__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142912fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142912fe0

void __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__K__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429130a0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFMargin__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913150

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFMargin__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001429131b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429131d0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFMargin__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913290

void __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateFontInfo__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913340

void __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateFontInfo__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001429133a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429133c0

void __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateFontInfo__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913480

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913530

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429135b0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_C___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913670

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913720

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429137a0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_E___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913860

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913910

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142913990

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_F___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913a50

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913b00

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142913b80

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_G___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913c40

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913cf0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142913d70

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_H___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142913e30

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142913ee0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142913f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142913f60

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_I___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914020

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429140d0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914150

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_M___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914210

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429142c0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914340

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface_N___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914400

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429144b0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914530

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__J___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429145f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429146a0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914720

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TSharedPtr_U__INumericTypeInterface__K___00__XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429147e0

void __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4EKeyboardType__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142914890

void __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4EKeyboardType__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x0001429148f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914910

void __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4EKeyboardType__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar4)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429149d0

void __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4Type_ETextJustify__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142914a80

void __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4Type_ETextJustify__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x000142914ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914b00

void __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4Type_ETextJustify__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar4)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914bc0

void __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ACXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ACXZUFDefaultDelegateUserPolicy__V__TFunction___A6ACXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142914c70

void __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ACXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ACXZUFDefaultDelegateUserPolicy__V__TFunction___A6ACXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914cf0

void __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6ACXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6ACXZUFDefaultDelegateUserPolicy__V__TFunction___A6ACXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914db0

void __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AEXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AEXZUFDefaultDelegateUserPolicy__V__TFunction___A6AEXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142914e60

void __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AEXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AEXZUFDefaultDelegateUserPolicy__V__TFunction___A6AEXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142914ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142914ee0

void __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AEXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AEXZUFDefaultDelegateUserPolicy__V__TFunction___A6AEXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142914fa0

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AFXZUFDefaultDelegateUserPolicy__V__TFunction___A6AFXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915050

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AFXZUFDefaultDelegateUserPolicy__V__TFunction___A6AFXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001429150b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429150d0

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AFXZUFDefaultDelegateUserPolicy__V__TFunction___A6AFXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915190

void __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AGXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AGXZUFDefaultDelegateUserPolicy__V__TFunction___A6AGXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915240

void __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AGXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AGXZUFDefaultDelegateUserPolicy__V__TFunction___A6AGXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001429152a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429152c0

void __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AGXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AGXZUFDefaultDelegateUserPolicy__V__TFunction___A6AGXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915380

void __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AIXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AIXZUFDefaultDelegateUserPolicy__V__TFunction___A6AIXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915430

void __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AIXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AIXZUFDefaultDelegateUserPolicy__V__TFunction___A6AIXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142915494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429154b0

void __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AIXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AIXZUFDefaultDelegateUserPolicy__V__TFunction___A6AIXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915570

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915620

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142915684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1429156a0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915760

void __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ANXZUFDefaultDelegateUserPolicy__V__TFunction___A6ANXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915810

void __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ANXZUFDefaultDelegateUserPolicy__V__TFunction___A6ANXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142915874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142915890

void __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6ANXZUFDefaultDelegateUserPolicy__V__TFunction___A6ANXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429159d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142915a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915ab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142915b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915c10

void __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_JXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_JXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915cc0

void __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_JXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_JXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142915d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142915d40

void __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_JXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_JXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142915e00

void __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_KXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_KXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142915eb0

void __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_KXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_KXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142915f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142915f30

void __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_KXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_KXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142928ad0

TOptional<signed_char> __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<signed_char> in_DX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_DX;
}

// Execute @ 142928b30

TOptional<unsigned_char> __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<unsigned_char> in_DX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_DX;
}

// Execute @ 142928b90

TOptional<short> __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<short> in_EDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_EDX;
}

// Execute @ 142928bf0

TOptional<unsigned_short> __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<unsigned_short> in_EDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_EDX;
}

// Execute @ 142928c50

TOptional<int> __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<int> in_RDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_RDX;
}

// Execute @ 142928cb0

TOptional<unsigned_int> __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<unsigned_int> in_RDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_RDX;
}

// Execute @ 142928d10

TOptional<float> __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  TOptional<float> in_RDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return in_RDX;
}

// Execute @ 142928d70

TOptional<double> * __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
          *this,TOptional<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928dd0

TOptional<__int64> * __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
          *this,TOptional<__int64> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928e30

TOptional<unsigned___int64> * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
          *this,TOptional<unsigned___int64> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928e90

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
          *this,FMargin *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928ef0

FSlateFontInfo * __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
          *this,FSlateFontInfo *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928f50

TSharedPtr<INumericTypeInterface<signed_char>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<signed_char>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142928fb0

TSharedPtr<INumericTypeInterface<unsigned_char>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<unsigned_char>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929010

TSharedPtr<INumericTypeInterface<short>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<short>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929070

TSharedPtr<INumericTypeInterface<unsigned_short>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<unsigned_short>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 1429290d0

TSharedPtr<INumericTypeInterface<int>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<int>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929130

TSharedPtr<INumericTypeInterface<unsigned_int>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<unsigned_int>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929190

TSharedPtr<INumericTypeInterface<float>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<float>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 1429291f0

TSharedPtr<INumericTypeInterface<double>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<double>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929250

TSharedPtr<INumericTypeInterface<__int64>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<__int64>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 1429292b0

TSharedPtr<INumericTypeInterface<unsigned___int64>,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
          *this,TSharedPtr<INumericTypeInterface<unsigned___int64>,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 142929310

EKeyboardType __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::Execute(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  EKeyboardType EVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292934f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return EVar1;
}

// Execute @ 142929360

Type __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::Execute(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  Type TVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292939f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return TVar1;
}

// Execute @ 1429293b0

schar __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  schar sVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001429293ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return sVar2;
}

// Execute @ 142929400

uchar __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  uchar uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292943f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return uVar2;
}

// Execute @ 142929450

short __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292948f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return sVar2;
}

// Execute @ 1429294a0

ushort __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001429294df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return uVar2;
}

// Execute @ 1429294f0

uint __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292952f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return uVar2;
}

// Execute @ 142929540

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292957f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*UNRECOVERED_JUMPTABLE)(uVar2);
  return fVar4;
}

// Execute @ 142929590

double __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  double dVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001429295cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar4 = (double)(*UNRECOVERED_JUMPTABLE)(uVar2);
  return dVar4;
}

// Execute @ 1429295e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::Execute(void *this,SWidget *param_1)

{
  SExpandableButton::UpdateVisibility((SExpandableButton *)param_1);
  return;
}

// Execute @ 1429295f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::Execute(void *this,SWidget *param_1)

{
  SScaleBox::RefreshSafeZoneScale((SScaleBox *)param_1);
  return;
}

// Execute @ 142929600

long64 __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long64 lVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292963f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return lVar3;
}

// Execute @ 142929650

ulong64 __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong64 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014292968f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return uVar3;
}

// ExecuteIfSafe @ 14292e9a0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292e9f0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ea40

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ea90

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292eae0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292eb30

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292eb80

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_res8,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ebd0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ec20

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ec70

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ecc0

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  return true;
}

// ExecuteIfSafe @ 14292ed10

bool __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_68 [56];
  TReferenceControllerBase<1> *local_30;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_68,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return true;
}

// ExecuteIfSafe @ 14292ed70

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292edd0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292ee30

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292ee90

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292eef0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292ef50

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292efb0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292f010

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292f070

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292f0d0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

// ExecuteIfSafe @ 14292f130

bool __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::ExecuteIfSafe(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return true;
}

// ExecuteIfSafe @ 14292f180

bool __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::ExecuteIfSafe(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return true;
}

// ExecuteIfSafe @ 14292f1d0

bool __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f220

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f270

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f2c0

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f310

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f360

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f3b0

bool __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SExpandableButton::UpdateVisibility((SExpandableButton *)param_1);
  return true;
}

// ExecuteIfSafe @ 14292f420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  SScaleBox::RefreshSafeZoneScale((SScaleBox *)param_1);
  return true;
}

// ExecuteIfSafe @ 14292f440

bool __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// ExecuteIfSafe @ 14292f490

bool __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14293c480

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c490

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c4f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c500

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c510

ulong64 __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c520

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c530

ulong64 __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c540

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c550

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c560

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c570

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c580

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c590

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c5f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c600

ulong64 __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c610

ulong64 __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c620

ulong64 __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c630

ulong64 __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c640

ulong64 __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c650

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c660

ulong64 __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c670

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c680

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c690

ulong64 __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14293c6a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142943380

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943390

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433a0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433b0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433c0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433d0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433e0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429433f0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943400

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943410

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943420

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943430

void * __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943440

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943450

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943460

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943470

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943480

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943490

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434a0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434b0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434c0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434e0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429434f0

void * __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943500

void * __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943510

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943520

void * __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943530

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943540

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943550

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943560

void * __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142943590

void * __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429435a0

void * __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14294a500

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a510

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a520

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a530

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a540

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a550

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a560

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a570

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a580

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a590

UObject * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5a0

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5b0

UObject * __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5c0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5d0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5e0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a5f0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a600

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a610

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a620

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a630

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a640

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a650

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a660

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a670

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a680

UObject * __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a690

UObject * __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6a0

UObject * __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6b0

UObject * __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6c0

UObject * __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6d0

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6e0

UObject * __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a6f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a700

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a710

UObject * __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14294a720

UObject * __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14294ee90

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eea0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eeb0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eec0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eed0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eee0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eef0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef00

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef10

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef20

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef30

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef40

bool __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef50

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef60

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef70

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef80

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294ef90

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294efa0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294efb0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294efc0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294efd0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294efe0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294eff0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f000

bool __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f010

bool __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f020

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f030

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f040

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f050

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f060

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f070

bool __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f0a0

bool __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14294f0b0

bool __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142955520

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955530

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955540

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955550

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955560

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955570

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955580

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955590

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555a0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555b0

bool __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555c0

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555d0

bool __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555e0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429555f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955600

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955610

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955620

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955630

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955640

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955650

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955660

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955670

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955680

bool __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142955690

bool __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429556a0

bool __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429556b0

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429556c0

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429556d0

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429556e0

bool __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1429556f0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955700

bool __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955710

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142955720

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142955730

bool __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142955740

bool __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1429ac6a0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac6b0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac6c0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac6d0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac6e0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac6f0

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac700

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac710

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac720

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac730

FName __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac740

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac750

FName __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac760

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac770

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac780

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac790

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7a0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7b0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7c0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7d0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7e0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac7f0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac800

FName __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac810

FName __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac820

FName __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac830

FName __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac840

FName __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac850

FName __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac860

FName __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac870

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac880

FName __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac890

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac8a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac8b0

FName __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1429ac8c0

FName __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1429debc0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFSlateTextLayout___00__PEAVSWidget__AEBUFTextBlockStyle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429dec40

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFSlateTextLayout___00__PEAVSWidget__AEBUFTextBlockStyle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1429dec80

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFSlateTextLayout___00__PEAVSWidget__AEBUFTextBlockStyle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429ded20

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429deda0

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1429dedf0

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429dee90

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429def10

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1429def60

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429df000

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429df080

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1429df0d0

void __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429df170

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429df1f0

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1429df240

void __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429df2e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
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
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FNotificationInfo::ShowCopyToClipboadHyperlink_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429df350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x78,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FNotificationInfo::ShowCopyToClipboadHyperlink_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1429df390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
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
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FNotificationInfo::ShowCopyToClipboadHyperlink_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429df420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429df4a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1429df4f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1429e4fb0

TSharedRef<FSlateTextLayout,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::Execute(void *this,TSharedRef<FSlateTextLayout,1> *__return_storage_ptr__,SWidget *param_1,
         FTextBlockStyle *param_2)

{
  FTextBlockStyle *pFVar1;
  FTextBlockStyle local_2e8;
  
  pFVar1 = FTextBlockStyle::FTextBlockStyle(&local_2e8,param_2);
  FSlateTextLayout::Create(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// Execute @ 1429e5000

FString * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FString *__return_storage_ptr__)

{
  FReflectionMetaData::GetWidgetDebugInfo
            (__return_storage_ptr__,*(SWidget **)((longlong)this + 0x18));
  return __return_storage_ptr__;
}

// Execute @ 1429e5030

FString * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::Execute(void *this,FString *__return_storage_ptr__)

{
  FReflectionMetaData::GetWidgetDebugInfo
            (__return_storage_ptr__,*(SWidget **)((longlong)this + 0x18));
  return __return_storage_ptr__;
}

// Execute @ 1429e5060

FString * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::Execute(void *this,FString *__return_storage_ptr__)

{
  FReflectionMetaData::GetWidgetDebugInfo
            (__return_storage_ptr__,*(SWidget **)((longlong)this + 0x18));
  return __return_storage_ptr__;
}

// Execute @ 1429e5090

EActiveTimerReturnType __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::Execute(void *this,double param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x1a0))();
  if (((cVar2 == '\0') &&
      (lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x220),
      *(char *)(lVar1 + 0xa20) == '\0')) &&
     ((*(longlong *)(lVar1 + 0xa28) == 0 ||
      ((*(longlong *)(lVar1 + 0xa30) == 0 || (*(int *)(*(longlong *)(lVar1 + 0xa30) + 8) < 1)))))) {
    return Stop;
  }
  return Continue;
}

// Execute @ 1429e5100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 1429e5110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::Execute(void *this)

{
  FSlateEditableTextLayout::BeginEditTransation
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  FSlateEditableTextLayout::DeleteSelectedText
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  FSlateEditableTextLayout::EndEditTransaction
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 1429e64c0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1,FTextBlockStyle *param_2)

{
  FTextBlockStyle *pFVar1;
  TSharedRef<FSlateTextLayout,1> local_2f8;
  FTextBlockStyle local_2e8;
  
  pFVar1 = FTextBlockStyle::FTextBlockStyle(&local_2e8,param_2);
  FSlateTextLayout::Create(&local_2f8,param_1,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1429e6510

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FString local_18;
  
  FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)((longlong)this + 0x18));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1429e6540

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FString local_18;
  
  FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)((longlong)this + 0x18));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1429e6570

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FString local_18;
  
  FReflectionMetaData::GetWidgetDebugInfo(&local_18,*(SWidget **)((longlong)this + 0x18));
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1429e65a0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x1a0))();
  return true;
}

// ExecuteIfSafe @ 1429e6600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1429e6620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FSlateEditableTextLayout::BeginEditTransation
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  FSlateEditableTextLayout::DeleteSelectedText
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  FSlateEditableTextLayout::EndEditTransaction
            (*(FSlateEditableTextLayout **)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1429e8e90

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8ea0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8eb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8ec0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8ed0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8ee0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1429e8ef0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1429ec180

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec190

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec1a0

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec1b0

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec1c0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec1d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ec1e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1429ef750

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef760

UObject * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef770

UObject * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef780

UObject * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef790

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef7a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef7b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1429f3280

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f3290

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f32a0

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f32b0

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f32c0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f32d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1429f32e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1429f5d70

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5d80

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5d90

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5da0

bool __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5db0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5dc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1429f5dd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142a10bf0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c00

FName __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c10

FName __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c20

FName __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c30

FName __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10c50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142a23380

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_4>_>
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

// CreateCopy @ 142a23400

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_4>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 142a23450

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_4>_>
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

// CreateCopy @ 142a234f0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`22'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a23570

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`22'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a235c0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`22'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a23660

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a23700

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142a23770

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar4[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a23830

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a238d0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142a23940

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar4[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a23a00

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a23aa0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142a23b10

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::`21'::<lambda_3>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar4[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a23bd0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a23c50

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a23ca0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142a26870

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1 - *(float *)((longlong)this + 0x20);
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142a268c0

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142a268f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::Execute(void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 142a26920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::Execute(void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 142a26950

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::Execute(void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 142a26980

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// ExecuteIfSafe @ 142a275f0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142a27620

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142a27650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::ExecuteIfSafe(void *this,FGeometry *param_1,FPointerEvent *param_2)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_188;
  FReply local_178;
  FReply local_c0;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a27680;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar1 = *(SWidget **)((longlong)this + 0x20);
    if (pSVar1 != (SWidget *)0x0) {
      FReply::FReply(&local_178,true);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_188.Object = pSVar1;
      local_188.SharedReferenceCount.ReferenceController = pTVar5;
      pFVar4 = FReply::CaptureMouse(&local_178,&local_188);
      FReply::FReply(&local_c0,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FReply::~FReply(&local_178);
      goto LAB_142a2768f;
    }
  }
LAB_142a27680:
  FReply::FReply(&local_c0,false);
LAB_142a2768f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FReply::~FReply(&local_c0);
  return true;
}

// ExecuteIfSafe @ 142a27720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::ExecuteIfSafe(void *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply local_c8;
  
  `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142a27760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::ExecuteIfSafe(void *this,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  float *pfVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  float fVar6;
  FReply local_c8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a277a0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    if ((*(SWidget **)((longlong)this + 0x20) != (SWidget *)0x0) &&
       (bVar5 = SWidget::HasMouseCapture(*(SWidget **)((longlong)this + 0x20)), bVar5)) {
      pfVar3 = TAttribute<float>::Get
                         ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
      fVar6 = *(float *)&param_2->CursorDelta + *pfVar3;
      if (fVar6 <= __real_41a00000) {
        fVar6 = __real_41a00000;
      }
      SHeaderRow::FColumn::SetWidth(*(FColumn **)((longlong)this + 0x18),fVar6);
      bVar5 = true;
      goto LAB_142a277a2;
    }
  }
LAB_142a277a0:
  bVar5 = false;
LAB_142a277a2:
  FReply::FReply(&local_c8,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142a27820

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142a28830

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a28840

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a28850

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a28860

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a28870

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a28880

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142a2a010

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a2a020

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a2a030

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a2a040

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a2a050

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a2a060

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142a2b540

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a2b550

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a2b560

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a2b570

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a2b580

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a2b590

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142a2bb20

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a2bb30

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a2bb40

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a2bb50

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a2bb60

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a2bb70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142a2ce80

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a2ce90

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a2cea0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a2ceb0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a2cec0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a2ced0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142a37c50

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a37c60

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l22::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a37c70

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a37c80

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a37c90

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a37ca0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::__l6::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

