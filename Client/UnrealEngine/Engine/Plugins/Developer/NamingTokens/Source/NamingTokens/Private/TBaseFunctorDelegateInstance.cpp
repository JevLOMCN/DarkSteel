// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 209

// CreateCopy @ 14d0d7830

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d78b0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d7900

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_10>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d79a0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d7a20

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d7a70

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d7b10

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d7b90

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d7be0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d7c80

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d7d00

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d7d50

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d7df0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d7e70

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d7ec0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_14>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d7f60

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_15>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d7fe0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_15>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8030

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_15>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d80d0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_16>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8150

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_16>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d81a0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_16>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8240

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_17>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d82c0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_17>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8310

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_17>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d83b0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8430

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8480

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_18>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8520

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_19>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d85a0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_19>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d85f0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_19>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8690

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8710

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d0d8750

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d87f0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8870

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d0d88b0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8950

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d89d0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8a20

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8ac0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8b40

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8b90

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8c30

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8cb0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8d00

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8da0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8e20

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8e70

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d8f10

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d8f90

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d8fe0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d9080

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d9100

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d9150

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0d91f0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0d9270

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d0d92c0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d0dc780

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc7b0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc7e0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc810

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc840

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc870

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc8a0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc8d0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc900

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc930

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc960

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,GInternalProjectName);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc990

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc9c0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dc9f0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dca20

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dca50

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dca80

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dcab0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d0dcae0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::Execute(void *this,FText *__return_storage_ptr__)

{
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14d0dcba0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcbd0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcc00

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcc30

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::ExecuteIfSafe(void *this)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FText local_18;
  
  this_00 = *(UObject **)((longlong)this + 0x18);
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%P");
  FText::FromString(&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dccf0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::ExecuteIfSafe(void *this)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FText local_18;
  
  this_00 = *(UObject **)((longlong)this + 0x18);
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%p");
  FText::FromString(&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcdb0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcde0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dce10

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dce40

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dce70

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcea0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  FText::FromString(&local_18,GInternalProjectName);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcee0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  ForAnyElementType _Src;
  longlong lVar1;
  FString local_28;
  FText local_18;
  
  _Src.Data = FApp::SessionOwner.Data.AllocatorInstance.Data;
  lVar1 = (longlong)FApp::SessionOwner.Data.ArrayNum;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = FApp::SessionOwner.Data.ArrayNum;
  if (FApp::SessionOwner.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FApp::SessionOwner.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
               FApp::SessionOwner.Data.ArrayNum,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,lVar1 * 2);
  }
  FText::FromString(&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcf90

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcfc0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dcff0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dd020

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dd050

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dd080

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14d0dd0b0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  `UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d0dda90

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddaa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddab0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddac0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddad0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddae0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddaf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb00

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb10

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb20

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb30

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb40

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb50

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb60

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb70

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb80

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddb90

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddba0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d0ddbb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d0e00c0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e00d0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e00e0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e00f0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0100

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0110

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0120

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0130

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0140

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0150

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0160

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0170

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0180

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e0190

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e01a0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e01b0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e01c0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e01d0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d0e01e0

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d0e07b0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e07c0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e07d0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e07e0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e07f0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0800

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0810

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0820

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0830

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0840

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0850

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0860

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0870

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0880

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e0890

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e08a0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e08b0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e08c0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d0e08d0

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d0e09c0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e09d0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e09e0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e09f0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a00

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a10

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a20

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a30

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a40

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a50

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a60

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a70

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a80

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0a90

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0aa0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0ab0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0ac0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0ad0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d0e0ae0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d0e0c20

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c30

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c40

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c50

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c60

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c70

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c80

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0c90

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0ca0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0cb0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0cc0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0cd0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0ce0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0cf0

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0d00

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0d10

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0d20

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0d30

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d0e0d40

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d0e5d40

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5d50

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5d60

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5d70

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5d80

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5d90

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5da0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5db0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5dc0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5dd0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5de0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5df0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e00

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e10

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e20

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e30

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e40

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e50

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d0e5e60

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

