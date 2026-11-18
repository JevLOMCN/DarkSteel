// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 44

// CreateCopy @ 1432caa70

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_15b7e7f7 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1432cab10

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_15b7e7f7 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1432cab80

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_15b7e7f7 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1432cac40

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_65310326 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1432cace0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_65310326 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1432cad50

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_65310326 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1432cae10

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_ae7fa123 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1432caeb0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_ae7fa123 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1432caf20

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_ae7fa123 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1432cafe0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_31737394 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1432cb080

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_31737394 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1432cb0f0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___00__A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_31737394 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1432cfd10

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
          *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDownloadDelegates *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *local_res8;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432cfd51;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432cfd51:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&>
                     ((FDownloadDelegates **)&local_res8);
  (*(code *)this->MethodPtr)(pFVar4,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Execute @ 1432cfda0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
          *this,int param_1,ulong64 param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDownloadDelegates *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *local_res8;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432cfde1;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432cfde1:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&>
                     ((FDownloadDelegates **)&local_res8);
  (*(code *)this->MethodPtr)(pFVar4,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Execute @ 1432cfe30

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
          *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDownloadDelegates *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *local_res8;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432cfe71;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432cfe71:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&>
                     ((FDownloadDelegates **)&local_res8);
  (*(code *)this->MethodPtr)(pFVar4,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Execute @ 1432cfec0

void __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
          *this,int param_1,ulong64 param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FDownloadDelegates *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *local_res8;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432cff01;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432cff01:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&>
                     ((FDownloadDelegates **)&local_res8);
  (*(code *)this->MethodPtr)(pFVar4,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// ExecuteIfSafe @ 1432d0270

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDownloadDelegates *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDownloadDelegates *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1432d02b0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FDownloadDelegates *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1432d02b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1432d0310

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,int param_1,ulong64 param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDownloadDelegates *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDownloadDelegates *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1432d0350;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FDownloadDelegates *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,BuildPatchServices::FCloudChunkSource::FDownloadDelegates_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1432d0350:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1432d03b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDownloadDelegates *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDownloadDelegates *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1432d03f0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FDownloadDelegates *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1432d03f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1432d0450

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,int param_1,ulong64 param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FDownloadDelegates *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FDownloadDelegates *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1432d0490;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FDownloadDelegates *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1432d0490:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 1432d35f0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1432d3600

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1432d3610

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1432d3620

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1432d8710

void * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDownloadDelegates *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1432d8770

void * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDownloadDelegates *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1432d87d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDownloadDelegates *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1432d8830

void * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDownloadDelegates *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 1432d99a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1432d99b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1432d99c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1432d99d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1432dab90

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432dabc5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432dabc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 1432dabf0

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432dac25;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432dac25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 1432dac50

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432dac85;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432dac85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 1432dacb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1432dace5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (TReferenceControllerBase<1> *)(this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_1432dace5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 1432dc470

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDownloadDelegates *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1432dc4a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDownloadDelegates *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1432dc4d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDownloadDelegates *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1432dc500

bool __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FDownloadDelegates *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 1432f4850

FName __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1432f4860

FName __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1432f4870

FName __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1432f4880

FName __thiscall
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

