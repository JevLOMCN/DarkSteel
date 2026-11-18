// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 55

// CreateCopy @ 148bc6e00

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a865c22 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148bc6e90

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a865c22 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148bc6ee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundlePauseInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8a865c22 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148bc6f90

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_18ecd34c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148bc7020

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_18ecd34c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148bc7070

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6AXUFInstallBundleRequestResultInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_18ecd34c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148bc7120

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_afc215d3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148bc71b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_afc215d3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148bc7200

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_afc215d3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148bc72b0

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_859e8758 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148bc7340

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_859e8758 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148bc7390

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_859e8758 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148bc7440

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_336f8688 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148bc74d0

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_336f8688 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148bc7520

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_336f8688 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148bc8700

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
          *this,FInstallBundlePauseInfo *param_1)

{
  FInstallBundleCombinedProgressTracker *pFVar1;
  FInstallBundleCombinedProgressTracker *local_res8;
  FName local_18;
  EInstallBundlePauseFlags local_10;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (&local_res8);
  local_10 = param_1->PauseFlags;
  local_18 = param_1->BundleName;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return;
}

// Execute @ 148bc8760

void __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
          *this,FInstallBundleRequestResultInfo *param_1)

{
  pmf_18ecd34c pVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  FInstallBundleCombinedProgressTracker *pFVar4;
  FInstallBundleCombinedProgressTracker *local_res8;
  FName local_38;
  EInstallBundleResult local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  FText local_28;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (&local_res8);
  local_38 = param_1->BundleName;
  local_30 = param_1->Result;
  local_2c = param_1->bIsStartup;
  local_2b = param_1->bContainsChunks;
  local_2a = param_1->bContainsIoStoreOnDemand;
  local_29 = param_1->bContentWasInstalled;
  FText::FText(&local_28,&param_1->OptionalErrorText);
  local_18 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  (param_1->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->OptionalErrorCode).Data.ArrayNum;
  local_c = (param_1->OptionalErrorCode).Data.ArrayMax;
  (param_1->OptionalErrorCode).Data.ArrayNum = 0;
  (param_1->OptionalErrorCode).Data.ArrayMax = 0;
  (*(code *)pVar1)(pFVar4,&local_38);
  pFVar2 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// Execute @ 148bc8840

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FInstallBundleCombinedProgressTracker *pFVar2;
  FInstallBundleCombinedProgressTracker *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 148bc8890

void __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FPersistentStatContainerBase *pFVar1;
  FPersistentStatContainerBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 148bc88d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FPersistentStatContainerBase *pFVar2;
  FPersistentStatContainerBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 148bc8920

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
                *this,FInstallBundlePauseInfo *param_1)

{
  FInstallBundleCombinedProgressTracker *pFVar1;
  FInstallBundleCombinedProgressTracker *local_res8;
  FName local_18;
  EInstallBundlePauseFlags local_10;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (&local_res8);
  local_10 = param_1->PauseFlags;
  local_18 = param_1->BundleName;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return true;
}

// ExecuteIfSafe @ 148bc8980

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
                *this,FInstallBundleRequestResultInfo *param_1)

{
  pmf_18ecd34c pVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  FInstallBundleCombinedProgressTracker *pFVar4;
  FInstallBundleCombinedProgressTracker *local_res8;
  FName local_38;
  EInstallBundleResult local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  FText local_28;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (&local_res8);
  local_38 = param_1->BundleName;
  local_30 = param_1->Result;
  local_2c = param_1->bIsStartup;
  local_2b = param_1->bContainsChunks;
  local_2a = param_1->bContainsIoStoreOnDemand;
  local_29 = param_1->bContentWasInstalled;
  FText::FText(&local_28,&param_1->OptionalErrorText);
  local_18 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  (param_1->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->OptionalErrorCode).Data.ArrayNum;
  local_c = (param_1->OptionalErrorCode).Data.ArrayMax;
  (param_1->OptionalErrorCode).Data.ArrayNum = 0;
  (param_1->OptionalErrorCode).Data.ArrayMax = 0;
  (*(code *)pVar1)(pFVar4,&local_38);
  pFVar2 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 148bc8a60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FInstallBundleCombinedProgressTracker *pFVar1;
  FInstallBundleCombinedProgressTracker *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FInstallBundleCombinedProgressTracker,FInstallBundleCombinedProgressTracker_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 148bc8ab0

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FPersistentStatContainerBase *pFVar1;
  FPersistentStatContainerBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 148bc8af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FPersistentStatContainerBase *pFVar1;
  FPersistentStatContainerBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148bca7b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148bca7c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148bca7d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148bca7e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148bca7f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148bcc3b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148bcc3c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148bcc3d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148bcc3e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 148bcc3f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 148bcdf20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148bcdf30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148bcdf40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148bcdf50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148bcdf60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148bce430

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148bce440

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148bce450

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148bce460

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 148bce470

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148bcf3a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148bcf3b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148bcf3c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148bcf3d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 148bcf3e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148bdba20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148bdba30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148bdba40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148bdba50

FName __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148bdba60

FName __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

