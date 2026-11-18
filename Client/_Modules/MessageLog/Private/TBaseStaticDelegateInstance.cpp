// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 55

// CreateCopy @ 142be9ab0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9b30

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142be9b80

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be9c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142be9d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar4[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be9df0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9e70

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142be9ec0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VIMessageLogListing___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142be9f60

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142be9fe0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142bea030

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFMessageFilter___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142bea0d0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142bea150

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142bea1a0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142bf1790

TSharedRef<IMessageLog,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<IMessageLog,1> *__return_storage_ptr__,FName *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142bf17c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::Execute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
          *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  _func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr_TSharedRef<FMessageLogViewModel,1> *p_Var1;
  TSharedRef<FMessageLogViewModel,1> local_18;
  
  local_18.Object = (FMessageLogViewModel *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,param_1,&local_18);
  return __return_storage_ptr__;
}

// Execute @ 142bf1810

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedPtr<IMessageLogListing,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<IMessageLogListing,1> *p_Var1;
  TSharedPtr<IMessageLogListing,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageLogListing *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142bf1870

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedRef<FMessageFilter,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FMessageFilter,1> *p_Var1;
  TSharedRef<FMessageFilter,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142bf18d0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedRef<FTokenizedMessage,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FTokenizedMessage,1> *p_Var1;
  TSharedRef<FTokenizedMessage,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 142bf4140

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                *this,FName *param_1)

{
  TSharedRef<IMessageLog,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142bf4170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
                *this,FSpawnTabArgs *param_1)

{
  _func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr_TSharedRef<FMessageLogViewModel,1> *p_Var1;
  TSharedRef<FMessageLogViewModel,1> local_28;
  TSharedRef<SDockTab,1> local_18;
  
  local_28.Object = (FMessageLogViewModel *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142bf41c0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<IMessageLogListing,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<IMessageLogListing,1> *p_Var1;
  TSharedPtr<IMessageLogListing,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageLogListing *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142bf4220

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<FMessageFilter,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FMessageFilter,1> *p_Var1;
  TSharedRef<FMessageFilter,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142bf4280

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<FTokenizedMessage,1> *p_Var1;
  TSharedRef<FTokenizedMessage,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf20

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf30

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf40

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf50

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142bfbf60

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142bfed70

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfed80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfed90

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfeda0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142bfedb0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142c01b30

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b40

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b50

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b60

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142c01b70

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142c03fc0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142c03fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142c03fe0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142c03ff0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142c04000

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142c06c60

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142c06c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142c06c80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142c06c90

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142c06ca0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142c29260

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29270

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29280

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c29290

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c292a0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

