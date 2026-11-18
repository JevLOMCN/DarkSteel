// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 176

// CreateCopy @ 146d8ae40

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8aec0

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8af10

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8afb0

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b030

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b080

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b120

void __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b1a0

void __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b1f0

void __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b290

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b310

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b360

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b400

void __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b480

void __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b4d0

void __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b570

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b5f0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b640

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b6e0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b760

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b7b0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b850

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8b8d0

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8b920

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8b9c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8ba40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8ba90

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8bb30

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8bbb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8bc00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8bca0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8bd20

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8bd70

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8be10

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8be90

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8bee0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8bf80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c000

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146d8c050

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVUObject__AEBVFName__W4Type_ELogVerbosity__AEBU__TBox_N_Math_UE__AEBVUWorld__AEAUFVisualLogEntry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8c0f0

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c170

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146d8c1c0

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d93150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavigationElementHandle * __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
          *this,FNavigationElementHandle *__return_storage_ptr__,UWorld *param_1,
         FNavigationElement *param_2)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 146d93180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavDataConfig * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  FNavDataConfig *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146d93187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->StaticFuncPtr)(param_1);
  return pFVar1;
}

// Execute @ 146d93190

FNavDataConfig * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FNavDataConfig *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146d93190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->StaticFuncPtr)();
  return pFVar1;
}

// Execute @ 146d931a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

INavigationDataInterface * __thiscall
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
          *this,AActor *param_1)

{
  INavigationDataInterface *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146d931a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (*this->StaticFuncPtr)(param_1);
  return pIVar1;
}

// Execute @ 146d931b0

UNavCollisionBase * __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
        *this,UObject *param_1)

{
  UNavCollisionBase *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146d931b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (*this->StaticFuncPtr)(param_1);
  return pUVar1;
}

// Execute @ 146d931c0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          AActor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146d931c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 146d931d0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,AActor *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146d931de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 146d931f0

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this,UActorComponent *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146d931f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 146d93200

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          UObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146d93207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 146d93210

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
          *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146d9321d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 146d93230

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FNavigationElementHandle *param_2,FNavigationElement *param_3)

{
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr.ObjectIndex = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  local_18.OwnerUObject.WeakPtr.ObjectSerialNumber =
       (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  local_18.SubElementId._0_4_ = (undefined4)param_2->SubElementId;
  local_18.SubElementId._4_4_ = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  (*this->StaticFuncPtr)(param_1,&local_18,param_3);
  return;
}

// Execute @ 146d93260

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FNavigationElementHandle *param_2)

{
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr.ObjectIndex = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  local_18.OwnerUObject.WeakPtr.ObjectSerialNumber =
       (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  local_18.SubElementId._0_4_ = (undefined4)param_2->SubElementId;
  local_18.SubElementId._4_4_ = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  (*this->StaticFuncPtr)(param_1,&local_18);
  return;
}

// Execute @ 146d93290

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
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::Execute(void *this,UObject *param_1,FName *param_2,Type param_3,TBox<double> *param_4,
         UWorld *param_5,FVisualLogEntry *param_6)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// Execute @ 146d932e0

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          UWorld *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146d932e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)(param_1);
  return bVar1;
}

// ExecuteIfSafe @ 146d93c80

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FNavigationElement *param_2)

{
  FNavigationElementHandle local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 146d93ca0

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93cc0

bool __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 146d93ce0

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
                *this,AActor *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93d00

bool __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
              *this,UObject *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93d20

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          AActor *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93d40

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,AActor *param_1,bool param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 146d93d70

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
              *this,UActorComponent *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93d90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          UObject *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93db0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                *this,FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 146d93dd0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FNavigationElementHandle *param_2,FNavigationElement *param_3)

{
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr.ObjectIndex = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  local_18.OwnerUObject.WeakPtr.ObjectSerialNumber =
       (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  local_18.SubElementId._0_4_ = (undefined4)param_2->SubElementId;
  local_18.SubElementId._4_4_ = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  (*this->StaticFuncPtr)(param_1,&local_18,param_3);
  return true;
}

// ExecuteIfSafe @ 146d93e00

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FNavigationElementHandle *param_2)

{
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr.ObjectIndex = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  local_18.OwnerUObject.WeakPtr.ObjectSerialNumber =
       (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  local_18.SubElementId._0_4_ = (undefined4)param_2->SubElementId;
  local_18.SubElementId._4_4_ = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  (*this->StaticFuncPtr)(param_1,&local_18);
  return true;
}

// ExecuteIfSafe @ 146d93e30

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
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UObject *param_1,FName *param_2,Type param_3,TBox<double> *param_4,
               UWorld *param_5,FVisualLogEntry *param_6)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4,param_5,param_6);
  return true;
}

// ExecuteIfSafe @ 146d93e90

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          UWorld *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146d99d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d40

ulong64 __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d60

ulong64 __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          )

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99da0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99db0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99de0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetBoundProgramCounterForTimerManager @ 146d99df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 146d9e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e650

void * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e670

void * __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          )

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6b0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e6f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetUObject @ 146da2b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b50

UObject * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b70

UObject * __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          )

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2bb0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2bc0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2bf0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146da3960

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3970

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3980

bool __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3990

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da39a0

bool __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da39b0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 146da39c0

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,void *param_1)

{
  return false;
}

// HasSameObject @ 146da39d0

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da39e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 146da39f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3a00

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3a10

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3a20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3a30

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146da5300

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
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da5310

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
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da5320

bool __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 146da5330

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da5340

bool __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 146da5350

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 146da5360

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          )

{
  return true;
}

// IsSafeToExecute @ 146da5370

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 146da5380

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 146da5390

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da53a0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da53b0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146da53c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da53d0

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
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146dbdc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdcb0

FName __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdcc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdcd0

FName __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdcf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          )

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd10

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd20

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd50

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dcac20

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146dcac40

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146dcac50

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146dcac60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 146dcac70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146dcacc0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 146dcacd0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146dcad70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146dcadf0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 146dcae40

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
         TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146dcae53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146dcae60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
               TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_3)

{
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return true;
}

// TryGetBoundFunctionName @ 146dcafa0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146dcafb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146dcafc0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146dcafd0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 146dcafe0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146dcaff0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 146dcb000

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146dcb0a0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146dcb120

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 146dcb170

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
         TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146dcb183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146dcb190

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
               TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_3)

{
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return true;
}

