// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 99

// CreateCopy @ 141e17e30

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e17eb0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e17f00

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e17fa0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18020

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e18070

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e18110

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18190

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e181e0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e18280

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18300

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e18350

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginReferenceDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e183f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18470

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e184c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e18560

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e185e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e18630

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e186d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18750

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e187a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e18840

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e188c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e18910

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginReferenceDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141e189b0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e18a30

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e18a80

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141e1d520

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,FLocalizationTargetDescriptor *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 141e1d550

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
        *this,FString *__return_storage_ptr__,FModuleDescriptor *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 141e1d580

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,FPluginDisallowedDescriptor *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 141e1d5b0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,FPluginReferenceDescriptor *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 141e1d5e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *this,FLocalizationTargetDescriptor *param_1,FJsonObject *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141e1d5ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 141e1d600

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *this,FModuleDescriptor *param_1,FJsonObject *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141e1d60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 141e1d620

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *this,FPluginDisallowedDescriptor *param_1,FJsonObject *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141e1d62d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 141e1d640

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *this,FPluginReferenceDescriptor *param_1,FJsonObject *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141e1d64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 141e1d660

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
          *this,FJsonObject *param_1,FString *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141e1d66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)(param_1,param_2);
  return bVar1;
}

// ExecuteIfSafe @ 141e1d750

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,FLocalizationTargetDescriptor *param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 141e1d780

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
              *this,FModuleDescriptor *param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 141e1d7b0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,FPluginDisallowedDescriptor *param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 141e1d7e0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,FPluginReferenceDescriptor *param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 141e1d810

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,FLocalizationTargetDescriptor *param_1,FJsonObject *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 141e1d830

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,FModuleDescriptor *param_1,FJsonObject *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 141e1d850

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,FPluginDisallowedDescriptor *param_1,FJsonObject *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 141e1d870

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,FPluginReferenceDescriptor *param_1,FJsonObject *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 141e1d890

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                *this,FJsonObject *param_1,FString *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141e22080

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e22090

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220a0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220b0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220c0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220d0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220e0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e220f0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141e22100

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141e25590

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255a0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255b0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255c0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255e0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e255f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e25600

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141e25610

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141e25970

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e25980

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e25990

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259a0

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259b0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259c0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141e259f0

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141e25e10

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e20

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e30

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e40

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e80

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141e25e90

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141e26c60

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26c70

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 141e26c80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26c90

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26ca0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26cb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26cc0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26cd0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141e26ce0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141e3c350

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c360

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c370

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c380

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c390

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c3a0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c3b0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c3c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141e3c3d0

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

