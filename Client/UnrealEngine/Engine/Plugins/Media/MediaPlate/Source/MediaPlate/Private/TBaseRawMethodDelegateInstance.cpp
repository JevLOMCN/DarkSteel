// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 22

// CreateCopy @ 14ea8a780

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV2__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateModule____A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV3__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_49392d40 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea8a810

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV2__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateModule____A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV3__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_49392d40 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ea8a860

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV2__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateModule____A6APEAVUMediaPlayer__PEAVUObject__AEAPEAV3__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_49392d40 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ea8a910

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateOpenLatentAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea8a9a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateOpenLatentAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14ea8a9f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaPlateOpenLatentAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ea8add0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
          *this,UObject *param_1,UObject **param_2)

{
  FMediaPlateModule *pFVar1;
  UMediaPlayer *pUVar2;
  FMediaPlateModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMediaPlateModule,FMediaPlateModule_*_&>
                     (&local_res8);
  pUVar2 = (UMediaPlayer *)(*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return pUVar2;
}

// Execute @ 14ea8ae30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::Execute(void *this,EMediaEvent param_1)

{
  FMediaPlateOpenLatentAction *pFVar1;
  FMediaPlateOpenLatentAction *local_res8;
  
  local_res8 = *(FMediaPlateOpenLatentAction **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMediaPlateOpenLatentAction,FMediaPlateOpenLatentAction_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14ea8ae80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
                *this,UObject *param_1,UObject **param_2)

{
  FMediaPlateModule *pFVar1;
  FMediaPlateModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMediaPlateModule,FMediaPlateModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14ea8aee0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EMediaEvent param_1)

{
  FMediaPlateOpenLatentAction *pFVar1;
  FMediaPlateOpenLatentAction *local_res8;
  
  local_res8 = *(FMediaPlateOpenLatentAction **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMediaPlateOpenLatentAction,FMediaPlateOpenLatentAction_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ea8afc0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ea8afd0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14ea8b2c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14ea8b2d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 14ea8b860

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14ea8b870

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ea8b930

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14ea8b940

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14ea8bf10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14ea8bf20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ea90680

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMediaPlateModule,UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ea90690

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMediaPlateOpenLatentAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

