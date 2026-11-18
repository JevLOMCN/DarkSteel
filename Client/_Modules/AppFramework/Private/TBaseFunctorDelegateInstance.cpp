// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 517

// CreateCopy @ 142fa3600

void __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__V<lambda_1>__6__RebuildChildren___SSegmentedControl_H__QEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3680

void __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__V<lambda_1>__6__RebuildChildren___SSegmentedControl_H__QEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa36d0

void __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__V<lambda_1>__6__RebuildChildren___SSegmentedControl_H__QEAAXXZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa3770

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_VFTestData___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa37f0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_VFTestData___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa3840

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_VFTestData___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa38e0

void __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V<lambda_1>__4__SetValue___SSegmentedControl_H__QEAAXV__TAttribute_H___N_Z___V__6B_
    ;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)((longlong)this + 0x1c);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3980

void __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V<lambda_1>__4__SetValue___SSegmentedControl_H__QEAAXV__TAttribute_H___N_Z___V__6B_
    ;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)((longlong)this + 0x1c);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 142fa39f0

void __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V<lambda_1>__4__SetValue___SSegmentedControl_H__QEAAXV__TAttribute_H___N_Z___V__6B_
    ;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar3 + 0x1c) = *(undefined1 *)((longlong)this + 0x1c);
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa3ab0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3b30

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa3b70

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa3c10

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3c90

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa3cd0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa3d70

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3df0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa3e30

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa3ed0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa3f50

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa3fa0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4040

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa40c0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4110

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa41b0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4230

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4280

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4320

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa43a0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa43f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4490

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4510

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4560

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4600

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4680

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa46c0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4760

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_7>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa47e0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_7>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa4820

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_7>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa48c0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4940

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4990

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4a30

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_4>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4ab0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_4>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4b00

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_4>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4ba0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_5>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4c20

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_5>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4c70

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_5>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4d10

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_15>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4d90

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_15>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa4dd0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_15>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4e70

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa4ef0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa4f40

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa4fe0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5060

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa50b0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5150

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
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

// CreateCopy @ 142fa51f0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142fa5250

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
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

// CreateCopy @ 142fa5300

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5380

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa53c0

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5460

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__GetCheckBoxStateAttribute___SSegmentedControl_H__AEBA_AV__TAttribute_W4ECheckBoxState____H_Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa54e0

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__GetCheckBoxStateAttribute___SSegmentedControl_H__AEBA_AV__TAttribute_W4ECheckBoxState____H_Z___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 142fa5530

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__GetCheckBoxStateAttribute___SSegmentedControl_H__AEBA_AV__TAttribute_W4ECheckBoxState____H_Z___V__6B_
    ;
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

// CreateCopy @ 142fa55d0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_4__Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
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

// CreateCopy @ 142fa5670

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_4__Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142fa56d0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_4__Z___V__6B_
    ;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
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

// CreateCopy @ 142fa5780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V<lambda_16>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V<lambda_16>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa5850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V<lambda_16>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa58f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_12>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_12>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa59c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_12>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_9>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5ae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_9>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa5b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_9>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_10>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_10>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa5ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_10>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_13>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_13>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa5e10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_13>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa5eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_67__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa5f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_67__Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa5f70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_67__Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa6010

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__V<lambda_8>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa6090

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__V<lambda_8>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa60e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__V<lambda_8>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa6180

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___R<lambda_1>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
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

// CreateCopy @ 142fa6220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___R<lambda_1>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142fa6280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___R<lambda_1>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z___V__6B_
    ;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
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

// CreateCopy @ 142fa6330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_4>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa63b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_4>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 142fa6400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_4>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
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

// CreateCopy @ 142fa64a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_2>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa6520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_2>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  return;
}

// CreateCopy @ 142fa6560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_2>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa6600

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa6680

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa66d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fa6770

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fa67f0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fa6840

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142fb7c40

TVector2<double> * __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::Execute(void *this,TVector2<double> *__return_storage_ptr__)

{
  `SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb7c70

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142fb7ca0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::Execute(void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  `SSegmentedControl<int>::SetValue'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb7cd0

TSharedRef<ITableRow,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::Execute(void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,TSharedPtr<int,1> *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_28,&local_18,param_2);
  __return_storage_ptr__->Object = (ITableRow *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142fb7d50

TSharedRef<ITableRow,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::Execute(void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,TSharedPtr<int,1> *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_28,&local_18,param_2);
  __return_storage_ptr__->Object = (ITableRow *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142fb7dd0

TSharedRef<ITableRow,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::Execute(void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,TSharedPtr<int,1> *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),&local_28,&local_18,param_2);
  __return_storage_ptr__->Object = (ITableRow *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142fb7e50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SStarshipGallery::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7e80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SStarshipGallery::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SStarshipGallery::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SStarshipGallery::Construct'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7f10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SStarshipGallery::Construct'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7f40

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  TSharedRef<STextBlock,1> local_28;
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),&local_28,&local_18);
  __return_storage_ptr__->Object = (SWidget *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb7fc0

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  TSharedRef<STextBlock,1> local_28;
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>::operator()
            ((void *)((longlong)this + 0x18),&local_28,&local_18);
  __return_storage_ptr__->Object = (SWidget *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return __return_storage_ptr__;
}

// Execute @ 142fb8040

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  `SStarshipGallery::BuildToolbar'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb8070

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  `SStarshipGallery::BuildToolbar'::__l6::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb80a0

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  `SStarshipGallery::BuildToolbar'::__l6::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb80d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb8100

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb8130

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb8160

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SExampleLayout::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fb8190

ECheckBoxState __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::Execute(void *this)

{
  ECheckBoxState EVar1;
  
  EVar1 = `SStarshipGallery::BuildToolbar'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18));
  return EVar1;
}

// Execute @ 142fb81a0

ECheckBoxState __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::Execute(void *this)

{
  ECheckBoxState EVar1;
  
  EVar1 = `SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18));
  return EVar1;
}

// Execute @ 142fb81b0

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return (float)**(int **)((longlong)this + 0x18);
}

// Execute @ 142fb81d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::Execute(void *this,FMenuBuilder *param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142fb81e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::Execute(void *this,float param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142fb81f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::Execute(void *this,float param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142fb8200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::Execute(void *this,float param_1,Type param_2)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 142fb8210

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::Execute(void *this,float param_1,Type param_2)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 142fb8220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::Execute(void *this,TSharedPtr<int,1> *param_1,
         TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142fb8270

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::Execute(void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return;
}

// Execute @ 142fb82c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::Execute(void *this,ECheckBoxState param_1)

{
  ``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142fb82d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::Execute(void *this,ECheckBoxState param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142fb82e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::Execute(void *this)

{
  `SStarshipGallery::BuildToolbar'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142fb82f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x354) == 0;
}

// Execute @ 142fb8310

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x354) == 1;
}

// ExecuteIfSafe @ 142fbd880

bool __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FSlateBrush **ppFVar1;
  FText *this_00;
  
  ppFVar1 = TAttribute<FSlateBrush_const_*>::Get
                      ((TAttribute<FSlateBrush_const_*> *)
                       (*(longlong *)((longlong)this + 0x18) + 0xb8));
  if (*ppFVar1 != (FSlateBrush *)0x0) {
    this_00 = TAttribute<FText>::Get
                        ((TAttribute<FText> *)(*(longlong *)((longlong)this + 0x18) + 0x28));
    FText::IsEmpty(this_00);
  }
  return true;
}

// ExecuteIfSafe @ 142fbd8d0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142fbd900

bool __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  `SSegmentedControl<int>::SetValue'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 142fbd930

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TSharedPtr<int,1> local_28;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28,param_2);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbd990

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TSharedPtr<int,1> local_28;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28,param_2);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbd9f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TSharedPtr<int,1> local_28;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28,param_2);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbda50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SStarshipGallery::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbda80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SStarshipGallery::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SStarshipGallery::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdae0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SStarshipGallery::Construct'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdb10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SStarshipGallery::Construct'::__l2::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdb40

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,TSharedPtr<FString,1> *param_1)

{
  TSharedPtr<FString,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return true;
}

// ExecuteIfSafe @ 142fbdba0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this,TSharedPtr<FString,1> *param_1)

{
  TSharedPtr<FString,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return true;
}

// ExecuteIfSafe @ 142fbdc00

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<SWidget,1> local_18;
  
  `SStarshipGallery::BuildToolbar'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdc30

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<SWidget,1> local_18;
  
  `SStarshipGallery::BuildToolbar'::__l6::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdc60

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<SWidget,1> local_18;
  
  `SStarshipGallery::BuildToolbar'::__l6::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdc90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142fbdcc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142fbdcf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142fbdd20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FReply local_c8;
  
  if (*(longlong *)((longlong)this + 0x18) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = **(uint **)((longlong)this + 0x18) + 1 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  **(uint **)((longlong)this + 0x18) = uVar4;
  FReply::FReply(&local_c8,true);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 142fbdda0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `SStarshipGallery::BuildToolbar'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142fbddc0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142fbdde0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142fbddf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::ExecuteIfSafe(void *this,FMenuBuilder *param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142fbde10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142fbde30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142fbde50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::ExecuteIfSafe(void *this,float param_1,Type param_2)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 142fbde70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::ExecuteIfSafe(void *this,float param_1,Type param_2)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 142fbde90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,TSharedPtr<int,1> *param_1,
               TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  `SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fbdee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::ExecuteIfSafe(void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return true;
}

// ExecuteIfSafe @ 142fbdf30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,ECheckBoxState param_1)

{
  ``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
  operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142fbdf50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::ExecuteIfSafe(void *this,ECheckBoxState param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142fbdf70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `SStarshipGallery::BuildToolbar'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142fbdf90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142fbdfa0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142fd07c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd07d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd07e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd07f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0800

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0810

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0820

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0830

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0840

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0850

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0860

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0870

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0880

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0890

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd08f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0900

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0910

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0920

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0930

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0940

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0950

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0960

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0970

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0980

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd0990

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd09a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd09b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd09c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd09d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142fd09e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142fd4520

void * __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4530

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4540

void * __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4550

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4560

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4570

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4580

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4590

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45a0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45b0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45c0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45e0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd45f0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4600

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4610

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4620

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4630

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4640

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4650

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4660

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4670

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4680

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4690

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd46f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4720

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4730

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd4740

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142fda690

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6a0

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6b0

UObject * __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6c0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6d0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6e0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda6f0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda700

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda710

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda720

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda730

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda740

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda750

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda760

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda770

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda780

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda790

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7a0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7b0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7c0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7d0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7e0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda7f0

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda800

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda810

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda820

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda830

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda840

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda850

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda860

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda870

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda880

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda890

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda8a0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fda8b0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142fded00

bool __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded10

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded20

bool __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded30

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded40

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded50

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded60

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded70

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded80

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fded90

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeda0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdedb0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdedc0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdedd0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdede0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdedf0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee00

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee10

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee20

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee30

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee40

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee50

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee60

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdee90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeea0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeeb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeed0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdeef0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdef00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdef10

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fdef20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142fe3650

bool __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3660

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3670

bool __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3680

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3690

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36a0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36b0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36c0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36d0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36e0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe36f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3700

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3710

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3720

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3730

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3740

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3750

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3760

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3770

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3780

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3790

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37a0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37b0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe37f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3800

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3860

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142fe3870

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 143013e80

FName __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013e90

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ea0

FName __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013eb0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ec0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ed0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ee0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ef0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f00

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f10

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f20

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f30

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f40

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f50

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f60

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f70

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f80

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013f90

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013fa0

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013fb0

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013fc0

FName __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013fd0

FName __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013fe0

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143013ff0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014000

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014010

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014020

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014030

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014040

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014050

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014060

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014070

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014080

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143014090

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1430140a0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14302b830

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14302b8b0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14302b8f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14302b990

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14302ba10

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14302ba50

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14302baf0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
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

// CreateCopy @ 14302bb90

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 14302bbf0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
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

// CreateCopy @ 14302bca0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14302bd20

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14302bd70

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14302be10

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14302be90

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14302bee0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14302bf80

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14302c000

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14302c050

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 143030230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `RestoreStarshipSuite'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 143030260

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `SummonPerfTestSuite'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 143030290

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::Execute(void *this)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FColorTheme *pFVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar2.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar5 = (FColorTheme *)0x0;
  FVar4.ReferenceController = FVar2.ReferenceController;
  pFVar6 = pFVar5;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      pFVar6 = pFVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4.ReferenceController = FVar2.ReferenceController;
      pFVar6 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  pFVar5 = *(FColorTheme **)((longlong)this + 0x18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return pFVar5 == pFVar6;
}

// Execute @ 1430302f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::Execute(void *this)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FColorTheme *pFVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar2.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar5 = (FColorTheme *)0x0;
  FVar4.ReferenceController = FVar2.ReferenceController;
  pFVar6 = pFVar5;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      pFVar6 = pFVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4.ReferenceController = FVar2.ReferenceController;
      pFVar6 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  bVar7 = SColorThemesViewer::Recents.Object != pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar7;
}

// Execute @ 143030350

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::Execute(void *this)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FColorTheme *pFVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar2.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar5 = (FColorTheme *)0x0;
  FVar4.ReferenceController = FVar2.ReferenceController;
  pFVar6 = pFVar5;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      pFVar6 = pFVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4.ReferenceController = FVar2.ReferenceController;
      pFVar6 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  bVar7 = SColorThemesViewer::Recents.Object != pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar7;
}

// Execute @ 1430303b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::Execute(void *this)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FColorTheme *pFVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar2.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar5 = (FColorTheme *)0x0;
  FVar4.ReferenceController = FVar2.ReferenceController;
  pFVar6 = pFVar5;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      pFVar6 = pFVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4.ReferenceController = FVar2.ReferenceController;
      pFVar6 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  bVar7 = SColorThemesViewer::Recents.Object != pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar7;
}

// ExecuteIfSafe @ 143031530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `RestoreStarshipSuite'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 143031560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `SummonPerfTestSuite'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 143031590

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar2 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1430315e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar2 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 143031630

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar2 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 143031680

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar2 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1430332b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430332c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430332d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430332e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430332f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 143033300

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 143034a10

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143034a20

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143034a30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143034a40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143034a50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 143034a60

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 143035dd0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143035de0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143035df0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143035e00

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143035e10

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143035e20

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1430369f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143036a00

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143036a10

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143036a20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143036a30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 143036a40

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 143037c30

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143037c40

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143037c50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143037c60

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143037c70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 143037c80

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14303f5c0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14303f5d0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14303f5e0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14303f5f0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14303f600

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14303f610

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1430a7950

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a79d0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a7a20

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430a7ac0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a7b40

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a7b90

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430a7c30

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SGlobalInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a7cb0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SGlobalInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a7d00

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SGlobalInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430a7da0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a7e20

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a7e70

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430a7f10

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a7f90

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a7fe0

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430a8080

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
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
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430a8100

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1430a8150

void __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1430b6070

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SInvalidationTest::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1430b60a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SSplineTest::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1430b60d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SGlobalInvalidationTest::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1430b6100

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SSplineTest::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1430b6130

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SSplineTest::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1430b6160

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::Execute(void *this,FReply *__return_storage_ptr__)

{
  `SSplineTest::Construct'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 1430ba680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SInvalidationTest::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 1430ba6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SSplineTest::Construct'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 1430ba6e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SGlobalInvalidationTest::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 1430ba710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SSplineTest::Construct'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 1430ba740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SSplineTest::Construct'::__l2::<lambda_3>::operator()((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 1430ba770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  FReply local_c8;
  
  `SSplineTest::Construct'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1430c7de0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430c7df0

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430c7e00

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430c7e10

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430c7e20

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1430c7e30

ulong64 __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1430c9b10

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430c9b20

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430c9b30

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430c9b40

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430c9b50

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430c9b60

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1430ce080

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce090

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce0a0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce0b0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce0c0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce0d0

UObject * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1430cfef0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430cff00

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430cff10

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430cff20

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430cff30

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430cff40

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1430d3cb0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1430d3cc0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1430d3cd0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1430d3ce0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1430d3cf0

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1430d3d00

bool __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 143105df0

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143105e00

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143105e10

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143105e20

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143105e30

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143105e40

FName __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

