// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 48

// CreateCopy @ 146d8d340

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d3d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8d420

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8d4d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d560

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8d5b0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVINavLinkCustomInterface___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8d660

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d6f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8d740

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8d7f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d880

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8d8d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef___CBUFNavigationElement___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d93720

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::Execute(void *this,INavLinkCustomInterface *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146d93727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x400))();
  return;
}

// Execute @ 146d93740

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::Execute(void *this,INavLinkCustomInterface *param_1)

{
  longlong lVar1;
  FNavLinkId *pFVar2;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)((longlong)this + 0x20);
  pFVar2 = (FNavLinkId *)(**(code **)((longlong)*param_1 + 0x38))(param_1,local_res8);
  TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
            *)(lVar1 + 0x440),pFVar2);
  return;
}

// Execute @ 146d93780

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::Execute(void *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  TSharedRef<FNavigationElement_const_,1> local_res8 [2];
  FNavigationDataHandler local_18;
  
  local_18.OctreeController =
       (FNavigationOctreeController *)(*(longlong *)((longlong)this + 0x20) + 0x2e8);
  local_18.DirtyAreasController =
       (FNavigationDirtyAreasController *)(*(longlong *)((longlong)this + 0x20) + 0x490);
  FNavigationDataHandler::RegisterElementWithNavOctree(&local_18,local_res8,(int)param_1);
  return;
}

// Execute @ 146d937c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::Execute(void *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  FNavigationDataHandler local_18;
  
  local_18.OctreeController =
       (FNavigationOctreeController *)(*(longlong *)((longlong)this + 0x20) + 0x2e8);
  local_18.DirtyAreasController =
       (FNavigationDirtyAreasController *)(*(longlong *)((longlong)this + 0x20) + 0x490);
  FNavigationDataHandler::UnregisterElementWithNavOctree(&local_18,param_1,0);
  return;
}

// ExecuteIfSafe @ 146d94920

/* WARNING: Removing unreachable block (ram,0x000146d9498e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,INavLinkCustomInterface *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x400))
              (*(longlong **)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 146d949f0

/* WARNING: Removing unreachable block (ram,0x000146d94a5e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,INavLinkCustomInterface *param_1)

{
  longlong lVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  FNavLinkId *pFVar4;
  UObject *pUVar5;
  UObject *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar2) {
    lVar1 = *(longlong *)((longlong)this + 0x20);
    pFVar4 = (FNavLinkId *)(**(code **)((longlong)*param_1 + 0x38))(param_1,&local_res8);
    TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x440),pFVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar2;
}

// ExecuteIfSafe @ 146d94ad0

/* WARNING: Removing unreachable block (ram,0x000146d94b3e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  FNavigationElement *local_res8;
  FNavigationDataHandler local_28;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (FNavigationElement *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (FNavigationElement *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    local_28.OctreeController =
         (FNavigationOctreeController *)(*(longlong *)((longlong)this + 0x20) + 0x2e8);
    local_28.DirtyAreasController =
         (FNavigationDirtyAreasController *)(*(longlong *)((longlong)this + 0x20) + 0x490);
    FNavigationDataHandler::RegisterElementWithNavOctree
              (&local_28,(TSharedRef<FNavigationElement_const_,1> *)&local_res8,(int)param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 146d94bc0

/* WARNING: Removing unreachable block (ram,0x000146d94c2e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  FNavigationDataHandler local_28;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    local_28.OctreeController =
         (FNavigationOctreeController *)(*(longlong *)((longlong)this + 0x20) + 0x2e8);
    local_28.DirtyAreasController =
         (FNavigationDirtyAreasController *)(*(longlong *)((longlong)this + 0x20) + 0x490);
    FNavigationDataHandler::UnregisterElementWithNavOctree(&local_28,param_1,0);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 146d99eb0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99ec0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99ed0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99ee0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146d9e7c0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e7d0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e7e0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e7f0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2cc0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2cd0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2ce0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2cf0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 146da3c50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3c80

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3cb0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3ce0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 146da4800

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4820

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4840

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4860

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146da5540

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 146da5550

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 146da5560

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// IsSafeToExecute @ 146da5570

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 146dbde20

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbde30

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbde40

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbde50

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

