// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 11

// CreateCopy @ 146d465f0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d46670

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d466c0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d4b5d0

TSharedRef<FGameplayDebuggerExtension,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedRef<FGameplayDebuggerExtension,1> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 146d4b8e0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  TSharedRef<FGameplayDebuggerExtension,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146d4bfb0

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 146d4d160

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 146d4ddb0

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146d4e3d0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146d4f640

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146d5d3d0

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

