// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 11

// CreateCopy @ 148d21480

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayMediaEncoder____A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148d21510

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayMediaEncoder____A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 148d21560

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayMediaEncoder____A6AXAEAVSWindow__AEBV__TRefCountPtr_VFRHITexture_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148d21780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
          *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  FGameplayMediaEncoder *pFVar1;
  FGameplayMediaEncoder *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayMediaEncoder,FGameplayMediaEncoder_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->ListenersCS).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 148d217e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  FGameplayMediaEncoder *pFVar1;
  FGameplayMediaEncoder *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayMediaEncoder,FGameplayMediaEncoder_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->ListenersCS).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148d21de0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148d21ef0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148d21f00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148d21f10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148d22670

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148d244e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayMediaEncoder,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

