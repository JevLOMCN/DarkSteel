// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 108

// CreateCopy @ 148c8bf90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAFunctionalAITestBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d36e721 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c020

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAFunctionalAITestBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d36e721 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c070

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAFunctionalAITestBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d36e721 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c120

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTest____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1644ddf8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c1b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTest____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1644ddf8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTest____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1644ddf8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c2b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_978c1149 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c340

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_978c1149 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c390

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXAEBUFAutomationScreenshotCompareResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_978c1149 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c440

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_56846dfc *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c4d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_56846dfc *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c520

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXHHAEBV__TArray_UFColor__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_56846dfc *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c5d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_511c41ff *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c660

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_511c41ff *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c6b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAScreenshotFunctionalTestBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_511c41ff *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c760

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c7f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c840

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVAFunctionalTest___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8c8f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c8826 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8c980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c8826 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8c9d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5f3c8826 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8ca80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8cb10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8cb70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVAFunctionalTest____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd26415d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c8cc20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d70cac7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c8ccb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d70cac7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148c8cd00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFunctionalTestingManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d70cac7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148c8dbb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  AFunctionalAITestBase *pAVar1;
  AFunctionalAITestBase *local_res8 [4];
  
  local_res8[0] = (AFunctionalAITestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AFunctionalAITestBase,AFunctionalAITestBase_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pAVar1);
  return;
}

// Execute @ 148c8dbf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
          *this,FAutomationScreenshotCompareResults *param_1)

{
  AScreenshotFunctionalTest *pAVar1;
  AScreenshotFunctionalTest *local_res8;
  
  local_res8 = (AScreenshotFunctionalTest *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AScreenshotFunctionalTest,AScreenshotFunctionalTest_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1);
  return;
}

// Execute @ 148c8dc40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
          *this,FAutomationScreenshotCompareResults *param_1)

{
  AScreenshotFunctionalTestBase *pAVar1;
  AScreenshotFunctionalTestBase *local_res8;
  
  local_res8 = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1);
  return;
}

// Execute @ 148c8dc90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  AScreenshotFunctionalTestBase *pAVar1;
  AScreenshotFunctionalTestBase *local_res8;
  
  local_res8 = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 148c8dd00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  AScreenshotFunctionalTestBase *pAVar1;
  AScreenshotFunctionalTestBase *local_res8 [4];
  
  local_res8[0] = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pAVar1);
  return;
}

// Execute @ 148c8dd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
          *this,AFunctionalTest *param_1)

{
  UFunctionalTestingManager *pUVar1;
  UFunctionalTestingManager *local_res8;
  
  local_res8 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 148c8dd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,bool param_2,bool param_3)

{
  UFunctionalTestingManager *pUVar1;
  UFunctionalTestingManager *local_res8;
  
  local_res8 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 148c8de00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
          *this)

{
  UFunctionalTestingManager *pUVar1;
  UFunctionalTestingManager *local_res8 [4];
  
  local_res8[0] = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1,this->_padding_);
  return;
}

// Execute @ 148c8de40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UFunctionalTestingManager *pUVar1;
  UFunctionalTestingManager *local_res8 [4];
  
  local_res8[0] = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 148c8e0b0

/* WARNING: Removing unreachable block (ram,0x000148c8e116) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AFunctionalAITestBase *pAVar3;
  AFunctionalAITestBase *pAVar4;
  UObject *pUVar5;
  AFunctionalAITestBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AFunctionalAITestBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AFunctionalAITestBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AFunctionalAITestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AFunctionalAITestBase *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AFunctionalAITestBase,AFunctionalAITestBase_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pAVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AFunctionalAITestBase *)0x0;
}

// ExecuteIfSafe @ 148c8e180

/* WARNING: Removing unreachable block (ram,0x000148c8e1ee) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this,FAutomationScreenshotCompareResults *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AScreenshotFunctionalTest *pAVar3;
  AScreenshotFunctionalTest *pAVar4;
  UObject *pUVar5;
  AScreenshotFunctionalTest *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AScreenshotFunctionalTest *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AScreenshotFunctionalTest *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AScreenshotFunctionalTest *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AScreenshotFunctionalTest *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AScreenshotFunctionalTest,AScreenshotFunctionalTest_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AScreenshotFunctionalTest *)0x0;
}

// ExecuteIfSafe @ 148c8e260

/* WARNING: Removing unreachable block (ram,0x000148c8e2ce) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this,FAutomationScreenshotCompareResults *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AScreenshotFunctionalTestBase *pAVar3;
  AScreenshotFunctionalTestBase *pAVar4;
  UObject *pUVar5;
  AScreenshotFunctionalTestBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AScreenshotFunctionalTestBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AScreenshotFunctionalTestBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AScreenshotFunctionalTestBase *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AScreenshotFunctionalTestBase *)0x0;
}

// ExecuteIfSafe @ 148c8e340

/* WARNING: Removing unreachable block (ram,0x000148c8e3be) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AScreenshotFunctionalTestBase *pAVar3;
  AScreenshotFunctionalTestBase *pAVar4;
  UObject *pUVar5;
  AScreenshotFunctionalTestBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AScreenshotFunctionalTestBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AScreenshotFunctionalTestBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AScreenshotFunctionalTestBase *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AScreenshotFunctionalTestBase *)0x0;
}

// ExecuteIfSafe @ 148c8e440

/* WARNING: Removing unreachable block (ram,0x000148c8e4a6) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AScreenshotFunctionalTestBase *pAVar3;
  AScreenshotFunctionalTestBase *pAVar4;
  UObject *pUVar5;
  AScreenshotFunctionalTestBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AScreenshotFunctionalTestBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AScreenshotFunctionalTestBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AScreenshotFunctionalTestBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AScreenshotFunctionalTestBase *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AScreenshotFunctionalTestBase *)0x0;
}

// ExecuteIfSafe @ 148c8e510

/* WARNING: Removing unreachable block (ram,0x000148c8e57e) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
                *this,AFunctionalTest *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFunctionalTestingManager *pUVar3;
  UFunctionalTestingManager *pUVar4;
  UObject *pUVar5;
  UFunctionalTestingManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFunctionalTestingManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFunctionalTestingManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFunctionalTestingManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFunctionalTestingManager *)0x0;
}

// ExecuteIfSafe @ 148c8e5f0

/* WARNING: Removing unreachable block (ram,0x000148c8e670) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFunctionalTestingManager *pUVar3;
  UFunctionalTestingManager *pUVar4;
  UObject *pUVar5;
  UFunctionalTestingManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFunctionalTestingManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFunctionalTestingManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFunctionalTestingManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFunctionalTestingManager *)0x0;
}

// ExecuteIfSafe @ 148c8e6f0

/* WARNING: Removing unreachable block (ram,0x000148c8e756) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFunctionalTestingManager *pUVar3;
  UFunctionalTestingManager *pUVar4;
  UObject *pUVar5;
  UFunctionalTestingManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFunctionalTestingManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFunctionalTestingManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFunctionalTestingManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFunctionalTestingManager *)0x0;
}

// ExecuteIfSafe @ 148c8e7c0

/* WARNING: Removing unreachable block (ram,0x000148c8e826) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFunctionalTestingManager *pUVar3;
  UFunctionalTestingManager *pUVar4;
  UObject *pUVar5;
  UFunctionalTestingManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFunctionalTestingManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFunctionalTestingManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UFunctionalTestingManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFunctionalTestingManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFunctionalTestingManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 148c903b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c903c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c903d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c903e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c903f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c90400

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c90410

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c90420

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148c90430

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148c90eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90ec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90ed0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90ef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90f00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90f20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148c90f30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92a90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92aa0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148c92ab0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 148c93160

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c93190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c931c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c931f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c93220

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c93250

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c93280

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c932b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148c932e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 148c93b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93b50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93b70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93bb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93bd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93bf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93c10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148c93c30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 148c94130

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c94150

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c94170

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c94190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c941b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c941d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c941f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c94210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148c94230

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 148ca0b80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0b90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0ba0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0bb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0bc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0bd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0be0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0bf0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ca0c00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

