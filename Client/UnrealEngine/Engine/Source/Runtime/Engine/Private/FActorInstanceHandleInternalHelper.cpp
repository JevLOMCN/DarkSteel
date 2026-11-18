// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// SetUpAsInterface @ 147c01cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FActorInstanceHandleInternalHelper::SetUpAsInterface
          (FActorInstanceHandle *param_1,IActorInstanceManagerInterface *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *local_res8;
  
  if (param_1->ResolutionStatus != Invalid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                       ,0x23,L"Expected to be called on a newly constructed handle.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)((longlong)*param_2 + 0x10))(param_2,param_4,param_3);
  param_1->InstanceIndex = iVar3;
  local_res8 = (UObject *)(**(code **)((longlong)*param_2 + 0x18))(param_2,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  param_1->ResolutionStatus = Resolved;
  return;
}

// SetUpWithActor @ 147c01da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FActorInstanceHandleInternalHelper::SetUpWithActor
          (FActorInstanceHandle *param_1,AActor *param_2,UPrimitiveComponent *param_3,int param_4)

{
  IActorInstanceManagerInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *local_res8;
  AActor *local_res10;
  FWeakObjectPtr local_28;
  IActorInstanceManagerInterface *pIStack_20;
  
  if (param_1->ResolutionStatus != Invalid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                       ,0x2b,L"Expected to be called on a newly constructed handle.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  if (param_2 == (AActor *)0x0) {
    pIStack_20 = (IActorInstanceManagerInterface *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    pIStack_20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar4);
    if (pIStack_20 != (IActorInstanceManagerInterface *)0x0) {
      local_res8 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
    }
  }
  (param_1->ManagerInterface).ObjectInstance.WeakPtr = local_28;
  (param_1->ManagerInterface).InterfaceInstance = pIStack_20;
  if ((param_1->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ManagerInterface);
    if ((bVar3) &&
       (pIVar1 = (param_1->ManagerInterface).InterfaceInstance,
       pIVar1 != (IActorInstanceManagerInterface *)0x0)) {
      SetUpAsInterface(param_1,pIVar1,param_3,param_4);
      goto LAB_147c01e9a;
    }
  }
  local_res10 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res10);
LAB_147c01e9a:
  param_1->ResolutionStatus = Resolved;
  return;
}

