// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 11

// TryGetBoundFunctionName @ 146c14180

FName __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146c14190

UObject * __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146c141a0

void * __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146c141b0

ulong64 __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 146c141c0

bool __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146c141d0

bool __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 146c141e0

void __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146c14280

void __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146c14300

void __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 146c14350

UMediaSource * __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
          *this,FString *param_1,UObject *param_2)

{
  UMediaSource *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146c1435d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (*this->StaticFuncPtr)(param_1,param_2);
  return pUVar1;
}

// ExecuteIfSafe @ 146c14370

bool __thiscall
TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
                *this,FString *param_1,UObject *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

