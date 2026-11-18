// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 12

// CreateCopy @ 14a8461c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAWN_ISKM_BoidsActor____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a846250

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAWN_ISKM_BoidsActor____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a8462a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAWN_ISKM_BoidsActor____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a848180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::Execute(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,ETeleportType param_3)

{
  AWN_ISKM_BoidsActor *pAVar1;
  AWN_ISKM_BoidsActor *local_res8;
  
  local_res8 = (AWN_ISKM_BoidsActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AWN_ISKM_BoidsActor,AWN_ISKM_BoidsActor_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14a848230

/* WARNING: Removing unreachable block (ram,0x00014a8482af) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
               ETeleportType param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AWN_ISKM_BoidsActor *pAVar3;
  AWN_ISKM_BoidsActor *pAVar4;
  UObject *pUVar5;
  AWN_ISKM_BoidsActor *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AWN_ISKM_BoidsActor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AWN_ISKM_BoidsActor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AWN_ISKM_BoidsActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pAVar3 != (AWN_ISKM_BoidsActor *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AWN_ISKM_BoidsActor,AWN_ISKM_BoidsActor_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AWN_ISKM_BoidsActor *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a84a1f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14a84ae20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a84bf40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14a84c0d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14a8500e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a850180

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a856c80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AWN_ISKM_BoidsActor,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

