// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 132

// CreateCopy @ 14b86a600

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Chicken_Chick____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e15b0089 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b86a690

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Chicken_Chick____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e15b0089 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b86a6e0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Chicken_Chick____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e15b0089 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b86a790

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Raven____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2d2ea9db *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b86a820

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Raven____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2d2ea9db *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b86a870

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Raven____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2d2ea9db *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b8729a0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
          *this,FName param_1,FName param_2,FName param_3,float param_4,
         FWN_StateMachine_ExecutionContext *param_5)

{
  undefined1 uVar1;
  FDS_ISKM_BoidsController_Chicken_Chick *pFVar2;
  FDS_ISKM_BoidsController_Chicken_Chick *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FDS_ISKM_BoidsController_Chicken_Chick,FDS_ISKM_BoidsController_Chicken_Chick_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1,param_2,param_3,param_4,param_5);
  return (bool)uVar1;
}

// Execute @ 14b872a20

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
          *this,FName param_1,FName param_2,FName param_3,float param_4,
         FWN_StateMachine_ExecutionContext *param_5)

{
  undefined1 uVar1;
  FDS_ISKM_BoidsController_Raven *pFVar2;
  FDS_ISKM_BoidsController_Raven *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FDS_ISKM_BoidsController_Raven,FDS_ISKM_BoidsController_Raven_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1,param_2,param_3,param_4,param_5);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14b873720

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                *this,FName param_1,FName param_2,FName param_3,float param_4,
               FWN_StateMachine_ExecutionContext *param_5)

{
  FDS_ISKM_BoidsController_Chicken_Chick *pFVar1;
  FDS_ISKM_BoidsController_Chicken_Chick *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDS_ISKM_BoidsController_Chicken_Chick,FDS_ISKM_BoidsController_Chicken_Chick_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return true;
}

// ExecuteIfSafe @ 14b8737a0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                *this,FName param_1,FName param_2,FName param_3,float param_4,
               FWN_StateMachine_ExecutionContext *param_5)

{
  FDS_ISKM_BoidsController_Raven *pFVar1;
  FDS_ISKM_BoidsController_Raven *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDS_ISKM_BoidsController_Raven,FDS_ISKM_BoidsController_Raven_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14b876690

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8766a0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14b878df0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14b878e00

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14b879660

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b879670

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b8799a0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14b8799b0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14b87de80

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b87de90

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14b89c5f0

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Chicken_Chick,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b89c600

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
TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_ISKM_BoidsController_Raven,bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14b8b9350

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0affb08c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b93e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0affb08c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b8b9430

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXMU__TVector_N_Math_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_0affb08c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b94e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2b238dba *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9570

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2b238dba *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b8b95c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2b238dba *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9670

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9700

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14b8b9750

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberInfo____A6AXU__TWeakObjectPtr_VUDS_DeathData__UFWeakObjectPtr____W4EDS_ResurrectType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9800

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberStat____A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_83b68a89 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9890

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberStat____A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_83b68a89 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b8b98e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDS_PartyMemberStat____A6AXMM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_83b68a89 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14b8b9990

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_PartyRepo____A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_909f4c1e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b8b9a20

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_PartyRepo____A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_909f4c1e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14b8b9a70

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_PartyRepo____A6AXAEB_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_909f4c1e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b8bf0c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
          *this,float param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FDS_PartyMemberInfo *pFVar1;
  undefined4 in_XMM1_Db;
  FDS_PartyMemberInfo *local_res8;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  local_58 = (param_3->field0_0x0)._s_0.X;
  dStack_50 = (param_3->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  local_48 = (param_3->field0_0x0)._s_0.Z;
  local_38 = *(undefined4 *)&param_2->field0_0x0;
  uStack_34 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_30 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  (*(code *)this->MethodPtr)(pFVar1,CONCAT44(in_XMM1_Db,param_1),&local_38,&local_58);
  return;
}

// Execute @ 14b8bf150

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  FDS_PartyMemberInfo *pFVar1;
  FDS_PartyMemberInfo *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.WeakPtr);
  return;
}

// Execute @ 14b8bf1a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::Execute(void *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1,EDS_ResurrectType param_2)

{
  FDS_PartyMemberInfo *pFVar1;
  FDS_PartyMemberInfo *local_res8;
  
  local_res8 = *(FDS_PartyMemberInfo **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1.WeakPtr,param_2);
  return;
}

// Execute @ 14b8bf200

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
          *this,float param_1,float param_2)

{
  FDS_PartyMemberStat *pFVar1;
  FDS_PartyMemberStat *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberStat,FDS_PartyMemberStat_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14b8bf260

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
          *this,ulong64 *param_1)

{
  FDS_PartyRepo *pFVar1;
  FDS_PartyRepo *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyRepo,FDS_PartyRepo_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14b8bfed0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
                *this,float param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FDS_PartyMemberInfo *pFVar1;
  undefined4 in_XMM1_Db;
  FDS_PartyMemberInfo *local_res8;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  local_58 = (param_3->field0_0x0)._s_0.X;
  dStack_50 = (param_3->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  local_48 = (param_3->field0_0x0)._s_0.Z;
  local_38 = *(undefined4 *)&param_2->field0_0x0;
  uStack_34 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_30 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  (*(code *)this->MethodPtr)(pFVar1,CONCAT44(in_XMM1_Db,param_1),&local_38,&local_58);
  return true;
}

// ExecuteIfSafe @ 14b8bff70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  FDS_PartyMemberInfo *pFVar1;
  FDS_PartyMemberInfo *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1.WeakPtr);
  return true;
}

// ExecuteIfSafe @ 14b8bffc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1,
               EDS_ResurrectType param_2)

{
  FDS_PartyMemberInfo *pFVar1;
  FDS_PartyMemberInfo *local_res8;
  
  local_res8 = *(FDS_PartyMemberInfo **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberInfo,FDS_PartyMemberInfo_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1.WeakPtr,param_2);
  return true;
}

// ExecuteIfSafe @ 14b8c0020

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
                *this,float param_1,float param_2)

{
  FDS_PartyMemberStat *pFVar1;
  FDS_PartyMemberStat *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyMemberStat,FDS_PartyMemberStat_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14b8c0080

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *this,ulong64 *param_1)

{
  FDS_PartyRepo *pFVar1;
  FDS_PartyRepo *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_PartyRepo,FDS_PartyRepo_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4640

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4650

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4660

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14b8c4670

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14b8c4680

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14b8c7d30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14b8c7d40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14b8c7d50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14b8c7d60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14b8c7d70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14b8c9030

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9040

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9050

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9060

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14b8c9070

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14b8c93d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14b8c93e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14b8c93f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14b8c9400

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14b8c9410

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14b8d0630

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0640

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0650

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0660

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14b8d0670

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14b8ef190

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef1a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef1b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberInfo,void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef1c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_PartyMemberStat,void___cdecl(float,float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14b8ef1d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_PartyRepo,void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bb57e30

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
    ;
    puVar2[4] = this->UserObject;
    *(pmf_469d0faf *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb57ee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
    ;
    puVar2[4] = this->UserObject;
    *(pmf_469d0faf *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14bb57f50

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
    ;
    puVar4[4] = this->UserObject;
    *(pmf_469d0faf *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bb58010

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ae811fc6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb580a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ae811fc6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14bb580f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ae811fc6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bb581a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cdb9d22d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb58230

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cdb9d22d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14bb58280

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cdb9d22d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bb58330

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_11a500bd *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bb583c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_11a500bd *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14bb58410

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_11a500bd *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bb5e370

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_469d0faf pVar1;
  FDS_HttpServer *pFVar2;
  FDS_HttpServer *local_res8;
  longlong local_48;
  longlong local_40;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_40 = this->_padding_;
  local_48 = this->_padding_;
  pVar1 = this->MethodPtr;
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_2->Object;
  local_30 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_28,&local_38,param_3,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14bb5e450

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  pmf_ae811fc6 pVar1;
  FDS_HttpServer *pFVar2;
  FDS_HttpServer *local_res8;
  IHttpResponse *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14bb5e4c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  FDS_HttpServer *pFVar1;
  FDS_HttpServer *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14bb5e500

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  pmf_11a500bd pVar1;
  undefined1 uVar2;
  FDS_HttpServer *pFVar3;
  FDS_HttpServer *local_res8;
  IHttpResponse *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  uVar2 = (*(code *)pVar1)(pFVar3,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfSafe @ 14bb5f520

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_469d0faf pVar1;
  FDS_HttpServer *pFVar2;
  FDS_HttpServer *local_res8;
  longlong local_48;
  longlong local_40;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_40 = this->_padding_;
  local_48 = this->_padding_;
  pVar1 = this->MethodPtr;
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_2->Object;
  local_30 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_28,&local_38,param_3,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14bb5f600

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  pmf_ae811fc6 pVar1;
  FDS_HttpServer *pFVar2;
  FDS_HttpServer *local_res8;
  IHttpResponse *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14bb5f670

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  FDS_HttpServer *pFVar1;
  FDS_HttpServer *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14bb5f6b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  pmf_11a500bd pVar1;
  FDS_HttpServer *pFVar2;
  FDS_HttpServer *local_res8;
  IHttpResponse *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FDS_HttpServer,FDS_HttpServer_*_&>(&local_res8)
  ;
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bb63740

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bb63750

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bb63760

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14bb63770

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14bb67070

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14bb67080

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14bb67090

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14bb670a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14bb68220

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bb68230

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bb68240

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14bb68250

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bb69b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14bb69b40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14bb69b50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14bb69b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14bb6f2a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bb6f2b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bb6f2c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14bb6f2d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bb93360

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TSharedPtr<FDS_HttpRequest,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bb93370

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bb93380

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bb93390

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDS_HttpServer,bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bc339f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_EntityBase____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bc33a80

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_EntityBase____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bc33ae0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_EntityBase____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bc3a600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::Execute(void *this)

{
  FDS_EntityBase *pFVar1;
  FDS_EntityBase *local_res8 [4];
  
  local_res8[0] = *(FDS_EntityBase **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_EntityBase,FDS_EntityBase_*_&>(local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,*(undefined4 *)((longlong)this + 8));
  return;
}

// ExecuteIfSafe @ 14bc3b440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::ExecuteIfSafe(void *this)

{
  FDS_EntityBase *pFVar1;
  FDS_EntityBase *local_res8 [4];
  
  local_res8[0] = *(FDS_EntityBase **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDS_EntityBase,FDS_EntityBase_*_&>(local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,*(undefined4 *)((longlong)this + 8));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14bc3f560

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14bc42cf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 14bc44970

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14bc45e80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14bc4b780

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14bc688b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDS_EntityBase,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EDS_EntityMaterialType>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

