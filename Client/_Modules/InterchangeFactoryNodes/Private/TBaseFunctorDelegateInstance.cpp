// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 132

// CreateCopy @ 14e549a70

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e549ae0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e549b20

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e549bb0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e549c20

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e549c60

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e549cf0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e549d60

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e549da0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e549e30

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e549ea0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e549ee0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e549f70

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e549fe0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a020

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a0b0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a120

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a160

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a1f0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a260

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a2a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a330

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a3a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a3e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a470

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a4e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a520

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a5b0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a620

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a660

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a6f0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a760

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a7a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e54a830

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e54a8a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_2>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14e54a8e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,_UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>_::__l2::<lambda_2>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e54cbb0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_EBlendMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cbd0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::
          ApplyAttributeToObject<TEnumAsByte<enum_EMaterialShadingModel>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cbf0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ERefractionMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cc10

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::
          ApplyAttributeToObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cc30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_TextureAddress>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cc50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::ApplyAttributeToObject<enum_ELightUnits>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cc70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_EBlendMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cc90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::
          FillAttributeFromObject<TEnumAsByte<enum_EMaterialShadingModel>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54ccb0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ERefractionMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54ccd0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::
          FillAttributeFromObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54ccf0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_TextureAddress>_>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// Execute @ 14e54cd10

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UInterchangeFactoryBaseNode::FillAttributeFromObject<enum_ELightUnits>
                    (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
                     (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return bVar1;
}

// ExecuteIfSafe @ 14e54d230

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_EBlendMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d260

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_EMaterialShadingModel>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d290

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ERefractionMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d2c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d2f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_TextureAddress>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d320

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::ApplyAttributeToObject<enum_ELightUnits>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d350

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_EBlendMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d380

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_EMaterialShadingModel>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d3b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ERefractionMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d3e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d410

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_TextureAddress>_>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// ExecuteIfSafe @ 14e54d440

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UInterchangeFactoryBaseNode::FillAttributeFromObject<enum_ELightUnits>
            (*(UInterchangeFactoryBaseNode **)((longlong)this + 0x30),
             (FString *)((longlong)this + 0x18),param_1,*(FName *)((longlong)this + 0x28));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e54fcc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fcd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fce0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fcf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd00

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd10

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd20

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd30

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd40

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd50

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd60

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14e54fd70

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14e559720

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559730

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559740

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559750

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559760

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559770

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559780

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e559790

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e5597a0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e5597b0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e5597c0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14e5597d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14e55d9b0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55d9c0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55d9d0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55d9e0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55d9f0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da00

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da10

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da20

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da30

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da40

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da50

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e55da60

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e55dc30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc40

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc60

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc80

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dc90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dca0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dcb0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dcc0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dcd0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14e55dce0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14e55e820

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e830

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e840

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e850

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e860

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e870

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e880

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e890

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e8a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e8b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e8c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14e55e8d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e57fc00

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc10

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc20

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc30

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc40

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc50

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc60

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc70

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc80

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fc90

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fca0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e57fcb0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy,`UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

