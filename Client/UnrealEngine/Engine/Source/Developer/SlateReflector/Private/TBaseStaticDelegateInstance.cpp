// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 99

// CreateCopy @ 142e69d20

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e69da0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e69df0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e69e90

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e69f10

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e69f60

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a000

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a080

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a0d0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a170

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a1f0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a240

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a2e0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a360

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a3b0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a450

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a4d0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a520

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a5c0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a640

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a690

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a730

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a7b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a800

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e6a8a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e6a930

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    *puVar2 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142e6a980

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    *puVar6 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__N_N__6B_;
    puVar6[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142e79540

TSharedRef<SWidget,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142e79570

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this,FString *__return_storage_ptr__,TSharedPtr<int,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<int,1> *p_Var1;
  TSharedPtr<int,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e795d0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,
         TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FNavigationSimulationWidgetNode,1> *p_Var1;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FNavigationSimulationWidgetNode *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e79630

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,
         TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *p_Var1;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FWidgetSnapshotTarget *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e79690

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FWidgetReflectorNodeBase,1> *p_Var1;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FWidgetReflectorNodeBase *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e796f0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,
         TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *p_Var1;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e79750

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FWidgetReflectorNodeBase,1> *p_Var1;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142e797b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,FMenuBuilder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e797b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 142e797c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e797cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)((double)this->_padding_,SUB81(this->_padding_,0));
  return;
}

// ExecuteIfSafe @ 142e80700

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  TSharedRef<SWidget,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e80730

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
              *this,TSharedPtr<int,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<int,1> *p_Var1;
  TSharedPtr<int,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e80790

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FNavigationSimulationWidgetNode,1> *p_Var1;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FNavigationSimulationWidgetNode *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e807f0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *p_Var1;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FWidgetSnapshotTarget *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e80850

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FWidgetReflectorNodeBase,1> *p_Var1;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FWidgetReflectorNodeBase *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e808b0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *p_Var1;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e80910

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FWidgetReflectorNodeBase,1> *p_Var1;
  TSharedRef<FWidgetReflectorNodeBase,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e80970

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,FMenuBuilder *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 142e80990

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
              *this)

{
  (*this->StaticFuncPtr)((double)this->_padding_,SUB81(this->_padding_,0));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142e9a190

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1a0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1b0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1c0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1d0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1e0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a1f0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a200

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142e9a210

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142ea3750

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea3760

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea3770

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea3780

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea3790

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea37a0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea37b0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea37c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea37d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142ea9420

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9430

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9440

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9450

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9460

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9470

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9480

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea9490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea94a0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142eba0f0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba100

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba110

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba120

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba130

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba140

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba150

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba160

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eba170

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142ebee40

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142ebee50

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142ebee60

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142ebee70

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142ebee80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142ebee90

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142ebeea0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142ebeeb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142ebeec0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142f114c0

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f114d0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f114e0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FNavigationSimulationWidgetNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f114f0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f11500

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f11510

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f11520

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FWidgetReflectorNodeBase,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f11530

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f11540

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,double,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

