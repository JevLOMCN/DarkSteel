// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 22

// CreateCopy @ 14d7231e0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d723260

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14d7232b0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d723350

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7233d0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14d723420

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d727250

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,
         TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *p_Var1;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFrameEventTreeElement *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d7272b0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,
         TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *p_Var1;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FStateItem *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14d7282a0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *p_Var1;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFrameEventTreeElement *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d728300

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *p_Var1;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FStateItem *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d72e4e0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d72e4f0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14d72fc70

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d72fc80

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d7314d0

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7314e0

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d731ea0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d731eb0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d732a10

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d732a20

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d749260

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d749270

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

