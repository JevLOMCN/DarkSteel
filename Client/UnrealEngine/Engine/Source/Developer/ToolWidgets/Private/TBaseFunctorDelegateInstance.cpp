// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 143

// CreateCopy @ 142d94150

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
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
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::`5'::<lambda_1>_>
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

// CreateCopy @ 142d941f0

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::`5'::<lambda_1>_>
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

// CreateCopy @ 142d94250

void __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
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
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::`5'::<lambda_1>_>
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

// CreateCopy @ 142d94300

void __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFLinearColor__XZ____V__6B_
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

// CreateCopy @ 142d943b0

void __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFLinearColor__XZ____V__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142d94414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142d94430

void __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFLinearColor__XZ____V__6B_
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

// CreateCopy @ 142d944f0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)((longlong)this + 0x20);
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               (puVar1 + 5),
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((longlong)this + 0x40);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94590

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)((longlong)this + 0x20);
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               (puVar1 + 5),
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((longlong)this + 0x40);
  }
  return;
}

// CreateCopy @ 142d94600

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)((longlong)this + 0x20);
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               (puVar3 + 5),
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x28));
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)((longlong)this + 0x40);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d946d0

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride_::__l8::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94740

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride_::__l8::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142d94780

void __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,_UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride_::__l8::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d94810

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFItemPair_CheckBoxList___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94890

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFItemPair_CheckBoxList___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d948e0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFItemPair_CheckBoxList___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d94980

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94a00

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d94a50

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d94af0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
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

// CreateCopy @ 142d94ba0

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142d94c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142d94c20

void __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
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

// CreateCopy @ 142d94ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d94db0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d94e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d94ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d94f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d94fc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d95040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d95090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d95130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d951b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142d95200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d952a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d95340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142d953b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = *(undefined8 *)((longlong)this + 0x20);
    lVar1 = *(longlong *)((longlong)this + 0x28);
    puVar4[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d95470

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::`8'::<lambda_1>_>
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

// CreateCopy @ 142d954f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::`8'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 142d95540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::`8'::<lambda_1>_>
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

// Execute @ 142d9fe00

EVisibility __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::Execute(void *this)

{
  TEnumAsByte<EVisibility::Private> in_DL;
  
  `SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 142d9fe30

FLinearColor * __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
          *this,FLinearColor *__return_storage_ptr__)

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

// Execute @ 142d9fe90

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::Execute(void *this,FMargin *__return_storage_ptr__)

{
  FSlateBrush **ppFVar1;
  float fVar2;
  
  if (*(char *)((longlong)this + 0x20) != '\0') {
    ppFVar1 = TAttribute<FSlateBrush_const_*>::Get
                        ((TAttribute<FSlateBrush_const_*> *)((longlong)this + 0x18));
    if (*ppFVar1 != (FSlateBrush *)0x0) {
      fVar2 = *(float *)((longlong)this + 0x40);
      goto LAB_142d9febf;
    }
  }
  fVar2 = 0.0;
LAB_142d9febf:
  __return_storage_ptr__->Left = fVar2;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  return __return_storage_ptr__;
}

// Execute @ 142d9fee0

FMargin * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::Execute(void *this,FMargin *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FSlateBrush **ppFVar3;
  
  if (*(char *)((longlong)this + 0x20) != '\0') {
    ppFVar3 = TAttribute<FSlateBrush_const_*>::Get
                        ((TAttribute<FSlateBrush_const_*> *)((longlong)this + 0x18));
    if (*ppFVar3 != (FSlateBrush *)0x0) {
      uVar1 = *(undefined8 *)((longlong)this + 0x50);
      uVar2 = *(undefined8 *)((longlong)this + 0x58);
      __return_storage_ptr__->Left = (float)(int)uVar1;
      __return_storage_ptr__->Top = (float)(int)((ulonglong)uVar1 >> 0x20);
      __return_storage_ptr__->Right = (float)(int)uVar2;
      __return_storage_ptr__->Bottom = (float)(int)((ulonglong)uVar2 >> 0x20);
      return __return_storage_ptr__;
    }
  }
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  __return_storage_ptr__->Left = (float)(int)uVar1;
  __return_storage_ptr__->Top = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->Right = (float)(int)uVar2;
  __return_storage_ptr__->Bottom = (float)(int)((ulonglong)uVar2 >> 0x20);
  return __return_storage_ptr__;
}

// Execute @ 142d9ff40

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142d9ff70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142d9ffa0

FText * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
          *this,FText *__return_storage_ptr__)

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

// Execute @ 142da0000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::Execute(void *this,TSharedRef<SWindow,1> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x748),&local_28);
  if (*(int *)(lVar1 + 0x758) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x750);
  }
  (**(code **)(*plVar2 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Execute @ 142da0050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::Execute(void *this,FText *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_SCustomTextFilterDialog::Construct_::__l2::<lambda_2>_&,FText_const_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142da0070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::Execute(void *this,FText *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_SCustomTextFilterDialog::Construct_::__l2::<lambda_5>_&,FText_const_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_5> *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142da0090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `SSidebarButton::Construct'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142da00a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142da00b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::Execute(void *this)

{
  SWidgetDrawer::CloseDrawerImmediately
            (*(SWidgetDrawer **)((longlong)this + 0x20),*(FName *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 142da2f20

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142da2f50;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SWidget **)((longlong)this + 0x18) != (SWidget *)0x0) {
      FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes
                (*(SWidget **)((longlong)this + 0x18),AllowInvalidationIfConstructed);
    }
  }
LAB_142da2f50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// ExecuteIfSafe @ 142da2f90

bool __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
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

// ExecuteIfSafe @ 142da2fe0

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)((longlong)this + 0x20) != '\0') {
    TAttribute<FSlateBrush_const_*>::Get((TAttribute<FSlateBrush_const_*> *)((longlong)this + 0x18))
    ;
  }
  return true;
}

// ExecuteIfSafe @ 142da3000

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)((longlong)this + 0x20) != '\0') {
    TAttribute<FSlateBrush_const_*>::Get((TAttribute<FSlateBrush_const_*> *)((longlong)this + 0x18))
    ;
  }
  return true;
}

// ExecuteIfSafe @ 142da3020

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142da3050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142da3080

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 142da30e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<SWindow,1> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x748),&local_28);
  if (*(int *)(lVar1 + 0x758) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x750);
  }
  (**(code **)(*plVar2 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// ExecuteIfSafe @ 142da3130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FText *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_SCustomTextFilterDialog::Construct_::__l2::<lambda_2>_&,FText_const_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142da3160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,FText *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_SCustomTextFilterDialog::Construct_::__l2::<lambda_5>_&,FText_const_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_5> *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142da3190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `SSidebarButton::Construct'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142da31b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142da31d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  SWidgetDrawer::CloseDrawerImmediately
            (*(SWidgetDrawer **)((longlong)this + 0x20),*(FName *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142dab110

ulong64 __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab120

ulong64 __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab130

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab140

ulong64 __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab150

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab160

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab170

ulong64 __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab180

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab190

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab1a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab1b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab1c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142dab1d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142dad2d0

void * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad2e0

void * __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad2f0

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad300

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad310

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad320

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad330

void * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad340

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad370

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142dad390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142db2300

UObject * __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2310

UObject * __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2320

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2330

UObject * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2340

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2350

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2360

UObject * __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2370

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2380

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db2390

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db23a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db23b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142db23c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142db3530

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3540

bool __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3550

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3560

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3570

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3580

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db3590

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142db35f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142db6130

bool __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db6140

bool __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142db6150

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db6160

bool __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db6170

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db6180

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db6190

bool __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142db61a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db61b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db61c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db61d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db61e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142db61f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142ddae70

FName __thiscall
TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::MakeStatusBarDrawerButton'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddae80

FName __thiscall
TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FLinearColor___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddae90

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaea0

FName __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaeb0

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaec0

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaed0

FName __thiscall
TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FText___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaee0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`SCustomDialog::Show'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaef0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaf00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaf10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaf20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142ddaf30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SWidgetDrawer::OpenDrawer'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

