// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 55

// CreateCopy @ 142a657b0

void __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMountedPakInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a65830

void __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMountedPakInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a65880

void __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMountedPakInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a65920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFIoSignatureError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`47'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a659a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFIoSignatureError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`47'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142a659e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFIoSignatureError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`47'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a65a80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPakChunkSignatureCheckFailedData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::`24'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a65b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPakChunkSignatureCheckFailedData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::`24'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a65b50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPakChunkSignatureCheckFailedData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::`24'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a65bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a65c70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a65cc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a65d60

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView_UFMountPaksExArgs_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a65de0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView_UFMountPaksExArgs_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142a65e30

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView_UFMountPaksExArgs_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142a6c2f0

TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_> * __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::Execute(void *this,TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  `FPakPlatformFile::Initialize'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142a6c320

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::Execute(void *this,FIoSignatureError *param_1)

{
  int iVar1;
  FPakChunkSignatureCheckFailedData local_28;
  
  iVar1 = param_1->BlockIndex;
  ::FString::FString(&local_28.PakFilename,&param_1->ContainerName);
  local_28.ExpectedHash = *(uint *)(param_1->ExpectedHash).Hash;
  local_28.ReceivedHash = *(uint *)(param_1->ActualHash).Hash;
  local_28.ChunkIndex = iVar1;
  FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(&local_28);
  if (local_28.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PakFilename.Data.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 142a6c380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::Execute(void *this,FPakChunkSignatureCheckFailedData *param_1)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return;
}

// Execute @ 142a6c390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::Execute(void *this)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FFileIoStore::Initialize_::__l2::<lambda_1>_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18));
  return;
}

// Execute @ 142a6c3b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::Execute(void *this,TArrayView<UE::FMountPaksExArgs,int> *param_1)

{
  bool bVar1;
  TArrayView<UE::FMountPaksExArgs,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::PakFile::Private::FHandleMountPaksExDelegate::HandleDelegate
                    (*(FPakPlatformFile **)((longlong)this + 0x18),&local_18);
  return bVar1;
}

// ExecuteIfSafe @ 142a6c5d0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_> local_18;
  
  `FPakPlatformFile::Initialize'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 142a6c600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::ExecuteIfSafe(void *this,FIoSignatureError *param_1)

{
  int iVar1;
  FPakChunkSignatureCheckFailedData local_28;
  
  iVar1 = param_1->BlockIndex;
  ::FString::FString(&local_28.PakFilename,&param_1->ContainerName);
  local_28.ExpectedHash = *(uint *)(param_1->ExpectedHash).Hash;
  local_28.ReceivedHash = *(uint *)(param_1->ActualHash).Hash;
  local_28.ChunkIndex = iVar1;
  FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(&local_28);
  if (local_28.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PakFilename.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 142a6c660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::ExecuteIfSafe(void *this,FPakChunkSignatureCheckFailedData *param_1)

{
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  return true;
}

// ExecuteIfSafe @ 142a6c670

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FFileIoStore::Initialize_::__l2::<lambda_1>_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142a6c690

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,TArrayView<UE::FMountPaksExArgs,int> *param_1)

{
  TArrayView<UE::FMountPaksExArgs,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UE::PakFile::Private::FHandleMountPaksExDelegate::HandleDelegate
            (*(FPakPlatformFile **)((longlong)this + 0x18),&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142a725e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a725f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a72600

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a72610

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142a72620

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142a76050

void * __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a76060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a76070

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a76080

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142a76090

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142a7a110

UObject * __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a120

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a130

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a140

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a150

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142a7bf40

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a7bf50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a7bf60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a7bf70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142a7bf80

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142a7f7a0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f7b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f7c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f7d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f7e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142aa5450

FName __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa5460

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa5470

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa5480

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa5490

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

