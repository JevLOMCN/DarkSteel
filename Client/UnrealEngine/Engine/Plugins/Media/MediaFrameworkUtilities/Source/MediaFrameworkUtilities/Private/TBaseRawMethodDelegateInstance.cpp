// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 11

// CreateCopy @ 14d7d5250

void __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaBundleDeferredCloser_MediaBundlePrivate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bb54096c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d52e0

void __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaBundleDeferredCloser_MediaBundlePrivate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bb54096c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d5330

void __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMediaBundleDeferredCloser_MediaBundlePrivate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_bb54096c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7d6910

void __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FMediaBundleDeferredCloser *pFVar1;
  FMediaBundleDeferredCloser *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<MediaBundlePrivate::FMediaBundleDeferredCloser,MediaBundlePrivate::FMediaBundleDeferredCloser_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14d7d6b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FMediaBundleDeferredCloser *pFVar1;
  FMediaBundleDeferredCloser *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<MediaBundlePrivate::FMediaBundleDeferredCloser,MediaBundlePrivate::FMediaBundleDeferredCloser_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d7d8270

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d7d9880

void * __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d7db570

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d7db7f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d7dc050

bool __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d7e1fb0

FName __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

