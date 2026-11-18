// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// TryGetBoundFunctionName @ 14449a070

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14449a080

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14449a090

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14449a0a0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14449a0b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14449a0c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14449a0d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14449a170

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14449a1f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 14449a240

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014449a24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14449a260

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

