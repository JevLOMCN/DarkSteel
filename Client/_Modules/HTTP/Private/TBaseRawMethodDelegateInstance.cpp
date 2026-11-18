// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 55

// CreateCopy @ 143159af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpLogVerbosityTracker_FManager_FHttpRetrySystem____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b3c3edc6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 143159b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpLogVerbosityTracker_FManager_FHttpRetrySystem____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b3c3edc6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 143159bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpLogVerbosityTracker_FManager_FHttpRetrySystem____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b3c3edc6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 143159c80

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpManager____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6488c2b7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 143159d10

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpManager____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6488c2b7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 143159d60

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpManager____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6488c2b7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 143159e10

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpModule____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 143159ea0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpModule____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 143159ef0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpModule____A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 143159fa0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpTest____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5988f224 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14315a030

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpTest____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5988f224 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14315a080

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpTest____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5988f224 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14315a130

void __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUserAgentImpl____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b5066f82 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14315a1c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUserAgentImpl____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b5066f82 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14315a210

void __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUserAgentImpl____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b5066f82 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14315d110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FString *param_1,
         TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FHttpLogVerbosityTracker *pFVar1;
  FHttpLogVerbosityTracker *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14315d170

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FHttpManager *pFVar1;
  FHttpManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHttpManager,FHttpManager_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14315d1c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FString *param_1,
         TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FHttpModule *pFVar1;
  FHttpModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHttpModule,FHttpModule_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14315d220

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_5988f224 pVar1;
  FHttpTest *pFVar2;
  FHttpTest *local_res8;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FHttpTest,FHttpTest_*_&>(&local_res8);
  local_28 = param_2->Object;
  pVar1 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14315d2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FUserAgentImpl *pFVar1;
  FUserAgentImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FUserAgentImpl,FUserAgentImpl_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14315dc50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FString *param_1,
               TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FHttpLogVerbosityTracker *pFVar1;
  FHttpLogVerbosityTracker *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14315dcb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FHttpManager *pFVar1;
  FHttpManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHttpManager,FHttpManager_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14315dd00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FString *param_1,
               TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FHttpModule *pFVar1;
  FHttpModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHttpModule,FHttpModule_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// ExecuteIfSafe @ 14315dd60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_5988f224 pVar1;
  FHttpTest *pFVar2;
  FHttpTest *local_res8;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FHttpTest,FHttpTest_*_&>(&local_res8);
  local_28 = param_2->Object;
  pVar1 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14315de20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FUserAgentImpl *pFVar1;
  FUserAgentImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FUserAgentImpl,FUserAgentImpl_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 143161830

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 143161840

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 143161850

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 143161860

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 143161870

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 143163ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 143164000

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 143164010

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 143164020

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 143164030

void * __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 143164ed0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164ee0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164ef0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164f00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164f10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 143168c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 143168c20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 143168c30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 143168c40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 143168c50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14316c9a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14316c9b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14316c9c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14316c9d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14316c9e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 143188b50

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188b60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188b70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188b80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188b90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

