// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 44

// CreateCopy @ 14d720dc0

void __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateColor__XZ____V__6B_
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

// CreateCopy @ 14d720e70

void __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateColor__XZ____V__6B_
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
                    /* WARNING: Could not recover jumptable at 0x00014d720ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 14d720ef0

void __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateColor__XZ____V__6B_
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

// CreateCopy @ 14d720fb0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d721030

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d721080

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d721120

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7211a0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d7211f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d721290

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEAV__TArray_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d721310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEAV__TArray_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d721350

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEAV__TArray_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d726710

FSlateColor * __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
          *this,FSlateColor *__return_storage_ptr__)

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

// Execute @ 14d726770

TSharedPtr<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::Execute(void *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  `UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d7267a0

TSharedRef<ITableRow,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> local_18;
  
  `UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1,param_2);
  __return_storage_ptr__->Object = (ITableRow *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d726800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::Execute(void *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,
         TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
         *param_2)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UE::StateTreeDebugger::SFrameEventsView::Construct_::__l2::<lambda_2>_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14d7276b0

bool __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_28 [32];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_28,uVar3);
  return true;
}

// ExecuteIfSafe @ 14d727700

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TSharedPtr<SWidget,1> local_18;
  
  `UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d727730

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,
               TSharedRef<STableViewBase,1> *param_2)

{
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> local_18;
  
  `UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d727770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,
               TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UE::StateTreeDebugger::SFrameEventsView::Construct_::__l2::<lambda_2>_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d72e390

ulong64 __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d72e3a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d72e3b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d72e3c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d72f710

void * __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d72f720

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d72f730

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d72f740

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d731380

UObject * __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d731390

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7313a0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7313b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d731940

bool __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d731950

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d731960

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d731970

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d732720

bool __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d732730

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d732740

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d732750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d749110

FName __thiscall
TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateColor___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d749120

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d749130

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d749140

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

