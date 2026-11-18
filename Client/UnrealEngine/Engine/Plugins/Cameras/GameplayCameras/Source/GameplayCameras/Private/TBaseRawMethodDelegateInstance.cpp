// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 22

// CreateCopy @ 14d59c640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFBlendStackCameraRigEvent_Cameras_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultRootCameraNodeEvaluator_Cameras_UE____A6AXAEBUFBlendStackCameraRigEvent_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_998aae1b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d59c6d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFBlendStackCameraRigEvent_Cameras_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultRootCameraNodeEvaluator_Cameras_UE____A6AXAEBUFBlendStackCameraRigEvent_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_998aae1b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d59c720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFBlendStackCameraRigEvent_Cameras_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultRootCameraNodeEvaluator_Cameras_UE____A6AXAEBUFBlendStackCameraRigEvent_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_998aae1b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d5a3440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FBlendStackCameraRigEvent *param_1)

{
  FDefaultRootCameraNodeEvaluator *pFVar1;
  FDefaultRootCameraNodeEvaluator *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Cameras::FDefaultRootCameraNodeEvaluator,UE::Cameras::FDefaultRootCameraNodeEvaluator_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14d5a3c50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FBlendStackCameraRigEvent *param_1)

{
  FDefaultRootCameraNodeEvaluator *pFVar1;
  FDefaultRootCameraNodeEvaluator *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Cameras::FDefaultRootCameraNodeEvaluator,UE::Cameras::FDefaultRootCameraNodeEvaluator_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d5a6b40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d5a8a50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d5abdb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d5ad290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d5b4990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d5d13f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14d612190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VIGameplayCameraSystemHost____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bb10a0be *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d612220

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VIGameplayCameraSystemHost____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bb10a0be *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d612270

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VIGameplayCameraSystemHost____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_bb10a0be *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d615a50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
          *this,UCanvas *param_1,APlayerController *param_2)

{
  IGameplayCameraSystemHost *pIVar1;
  IGameplayCameraSystemHost *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::
           DereferenceIfNecessary<IGameplayCameraSystemHost,IGameplayCameraSystemHost_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pIVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14d615af0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,UCanvas *param_1,APlayerController *param_2)

{
  IGameplayCameraSystemHost *pIVar1;
  IGameplayCameraSystemHost *local_res8;
  
  local_res8 = this->UserObject;
  pIVar1 = UE::Core::Private::
           DereferenceIfNecessary<IGameplayCameraSystemHost,IGameplayCameraSystemHost_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pIVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d618f90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d61ac70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d61e780

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d61f490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d621640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d63a0b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,IGameplayCameraSystemHost,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

