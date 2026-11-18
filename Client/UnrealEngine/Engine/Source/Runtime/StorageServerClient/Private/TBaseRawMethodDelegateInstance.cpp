// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 33

// CreateCopy @ 148cbfc70

void __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCookOnTheFlyPackageStoreBackend____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_55e8dc21 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148cbfd00

void __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCookOnTheFlyPackageStoreBackend____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_55e8dc21 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148cbfd50

void __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCookOnTheFlyPackageStoreBackend____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_55e8dc21 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148cbfe00

void __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStorageServerPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a2b30a44 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148cbfe90

void __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStorageServerPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a2b30a44 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148cbfee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStorageServerPlatformFile____A6AXAEBVFCookOnTheFlyMessage_Cook_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a2b30a44 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148cbff90

void __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VICacheStrategy_StorageServer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_145aca4e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148cc0020

void __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VICacheStrategy_StorageServer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_145aca4e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148cc0070

void __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VICacheStrategy_StorageServer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_145aca4e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148cc2ad0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
          *this,FCookOnTheFlyMessage *param_1)

{
  FCookOnTheFlyPackageStoreBackend *pFVar1;
  FCookOnTheFlyPackageStoreBackend *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCookOnTheFlyPackageStoreBackend,FCookOnTheFlyPackageStoreBackend_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 148cc2b20

void __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
          *this,FCookOnTheFlyMessage *param_1)

{
  FStorageServerPlatformFile *pFVar1;
  FStorageServerPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FStorageServerPlatformFile,FStorageServerPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 148cc2b70

bool __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  ICacheStrategy *pIVar2;
  ICacheStrategy *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pIVar2 = UE::Core::Private::
           DereferenceIfNecessary<StorageServer::ICacheStrategy,StorageServer::ICacheStrategy_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pIVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 148cc2c20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,FCookOnTheFlyMessage *param_1)

{
  FCookOnTheFlyPackageStoreBackend *pFVar1;
  FCookOnTheFlyPackageStoreBackend *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCookOnTheFlyPackageStoreBackend,FCookOnTheFlyPackageStoreBackend_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 148cc2c70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,FCookOnTheFlyMessage *param_1)

{
  FStorageServerPlatformFile *pFVar1;
  FStorageServerPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FStorageServerPlatformFile,FStorageServerPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 148cc2cc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  ICacheStrategy *pIVar1;
  ICacheStrategy *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pIVar1 = UE::Core::Private::
           DereferenceIfNecessary<StorageServer::ICacheStrategy,StorageServer::ICacheStrategy_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pIVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148cc6d20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148cc6d30

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148cc6d40

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148cc78b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148cc78c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148cc78d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148cc86a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148cc86b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148cc86c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148cc9af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148cc9b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148cc9b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148ccd030

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148ccd040

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148ccd050

bool __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148ce1540

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ce1550

FName __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ce1560

FName __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

