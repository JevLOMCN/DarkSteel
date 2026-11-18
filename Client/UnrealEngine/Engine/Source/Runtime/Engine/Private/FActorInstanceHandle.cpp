// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// DoesRepresent<APhysicsVolume> @ 147745db0

bool __thiscall FActorInstanceHandle::DoesRepresent<APhysicsVolume>(FActorInstanceHandle *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetRepresentedClass(this);
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_APhysicsVolume_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// FetchActor<APhysicsVolume> @ 147748b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsVolume * __thiscall
FActorInstanceHandle::FetchActor<APhysicsVolume>(FActorInstanceHandle *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  APhysicsVolume *pAVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  pUVar3 = GetRepresentedClass(this);
  if (pUVar3 == (UClass *)0x0) {
    return (APhysicsVolume *)0x0;
  }
  pUVar4 = Z_Construct_UClass_APhysicsVolume_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      bVar2 = true;
      goto LAB_147748b48;
    }
  }
  bVar2 = false;
LAB_147748b48:
  if (!bVar2) {
    return (APhysicsVolume *)0x0;
  }
  pAVar5 = (APhysicsVolume *)FetchActor(this);
  if (pAVar5 == (APhysicsVolume *)0x0) {
    pAVar5 = (APhysicsVolume *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_APhysicsVolume_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar6 = GetTypeName<APhysicsVolume>(&local_28);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_18,(AActor *)pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  return pAVar5;
}

// StaticStruct @ 147ba7a60

UScriptStruct * __cdecl FActorInstanceHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorInstanceHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorInstanceHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorInstanceHandle,(UObject *)pUVar1,
                         L"ActorInstanceHandle");
  }
  return Z_Registration_Info_UScriptStruct_FActorInstanceHandle.OuterSingleton;
}

// FActorInstanceHandle @ 147bb84c0

FActorInstanceHandle * __thiscall
FActorInstanceHandle::FActorInstanceHandle(FActorInstanceHandle *this,FActorInstanceHandle *param_1)

{
  IActorInstanceManagerInterface *pIVar1;
  
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  this->ResolutionStatus = Invalid;
  this->InstanceIndex = -1;
  (this->ReferenceObject).WeakPtr = (param_1->ReferenceObject).WeakPtr;
  pIVar1 = (param_1->ManagerInterface).InterfaceInstance;
  (this->ManagerInterface).ObjectInstance.WeakPtr =
       (param_1->ManagerInterface).ObjectInstance.WeakPtr;
  (this->ManagerInterface).InterfaceInstance = pIVar1;
  this->InstanceIndex = param_1->InstanceIndex;
  this->ResolutionStatus = param_1->ResolutionStatus;
  return this;
}

// FActorInstanceHandle @ 147bb8500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceHandle * __thiscall
FActorInstanceHandle::FActorInstanceHandle(FActorInstanceHandle *this,AActor *param_1)

{
  bool bVar1;
  AActor *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  this->InstanceIndex = -1;
  this->ResolutionStatus = Resolved;
  if (UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInParallelGameThread();
      if (!bVar1) {
        `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(&local_res8);
      }
    }
  }
  return this;
}

// FActorInstanceHandle @ 147bb85b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FActorInstanceHandle * __thiscall
FActorInstanceHandle::FActorInstanceHandle
          (FActorInstanceHandle *this,AActor *param_1,UPrimitiveComponent *param_2,int param_3)

{
  IActorInstanceManagerInterface *pIVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  EResolutionStatus EVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  FActorInstanceHandle *pFVar8;
  UClass *pUVar9;
  undefined1 local_res8 [8];
  AActor *local_res10;
  UObject *local_68;
  AActor *local_60;
  FWeakObjectPtr local_58;
  IActorInstanceManagerInterface *pIStack_50;
  FActorInstanceHandle local_48;
  
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  this->InstanceIndex = -1;
  this->ResolutionStatus = Invalid;
  if (((UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) &&
      (bVar6 = IsInGameThread(), !bVar6)) && (bVar6 = IsInParallelGameThread(), !bVar6)) {
    local_res8[0] = 0;
    `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(local_res8);
  }
  if (param_1 == (AActor *)0x0) {
    if (param_2 != (UPrimitiveComponent *)0x0) {
      pFVar8 = FActorInstanceHandle(&local_48,param_2,param_3);
      FVar3 = (pFVar8->ManagerInterface).ObjectInstance.WeakPtr;
      (this->ReferenceObject).WeakPtr = (pFVar8->ReferenceObject).WeakPtr;
      (this->ManagerInterface).ObjectInstance.WeakPtr = FVar3;
      iVar7 = pFVar8->InstanceIndex;
      EVar4 = pFVar8->ResolutionStatus;
      uVar5 = *(undefined3 *)&pFVar8->field_0x1d;
      (this->ManagerInterface).InterfaceInstance = (pFVar8->ManagerInterface).InterfaceInstance;
      this->InstanceIndex = iVar7;
      this->ResolutionStatus = EVar4;
      *(undefined3 *)&this->field_0x1d = uVar5;
    }
  }
  else {
    if ((this->ResolutionStatus != Invalid) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                           ,0x2b,L"Expected to be called on a newly constructed handle."), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FActorInstanceHandle *)(*pcVar2)();
      return pFVar8;
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    pUVar9 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    pIStack_50 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar9);
    if (pIStack_50 != (IActorInstanceManagerInterface *)0x0) {
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res10);
    }
    (this->ManagerInterface).ObjectInstance.WeakPtr = local_58;
    (this->ManagerInterface).InterfaceInstance = pIStack_50;
    if ((((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) &&
        (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), bVar6)) &&
       (pIVar1 = (this->ManagerInterface).InterfaceInstance,
       pIVar1 != (IActorInstanceManagerInterface *)0x0)) {
      if ((this->ResolutionStatus != Invalid) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                             ,0x23,L"Expected to be called on a newly constructed handle."), bVar6))
      {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FActorInstanceHandle *)(*pcVar2)();
        return pFVar8;
      }
      iVar7 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_3,param_2);
      this->InstanceIndex = iVar7;
      local_68 = (UObject *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_68);
      this->ResolutionStatus = Resolved;
      return this;
    }
    local_60 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_60);
    this->ResolutionStatus = Resolved;
  }
  return this;
}

// FActorInstanceHandle @ 147bb87b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FActorInstanceHandle * __thiscall
FActorInstanceHandle::FActorInstanceHandle
          (FActorInstanceHandle *this,UPrimitiveComponent *param_1,int param_2)

{
  UObjectBaseUtility *this_00;
  IActorInstanceManagerInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FActorInstanceHandle *pFVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 FVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UObjectBaseUtility *local_res20;
  UObject *local_48;
  UObjectBaseUtility *local_40;
  FWeakObjectPtr local_38;
  IActorInstanceManagerInterface *pIStack_30;
  
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  this->InstanceIndex = -1;
  this->ResolutionStatus = Invalid;
  if (((UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) &&
      (bVar3 = IsInGameThread(), !bVar3)) && (bVar3 = IsInParallelGameThread(), !bVar3)) {
    local_res8[0] = 0;
    `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(local_res8);
  }
  if (param_1 == (UPrimitiveComponent *)0x0) {
    local_res10[0] = 0;
    bVar3 = `FActorInstanceHandle::FActorInstanceHandle'::__l6::<lambda_2>::operator()(local_res10);
    if (!bVar3) {
      return this;
    }
  }
  this_00 = *(UObjectBaseUtility **)&param_1->field_0xa8;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    if ((this->ResolutionStatus != Invalid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                           ,0x2b,L"Expected to be called on a newly constructed handle."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FActorInstanceHandle *)(*pcVar2)();
      return pFVar5;
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    pUVar6 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    pIStack_30 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
    if (pIStack_30 != (IActorInstanceManagerInterface *)0x0) {
      local_res20 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res20);
    }
    (this->ManagerInterface).ObjectInstance.WeakPtr = local_38;
    (this->ManagerInterface).InterfaceInstance = pIStack_30;
    if ((((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), !bVar3)) ||
       (pIVar1 = (this->ManagerInterface).InterfaceInstance,
       pIVar1 == (IActorInstanceManagerInterface *)0x0)) {
      local_40 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FVar7.Handle = (UObject *)&local_40;
    }
    else {
      if ((this->ResolutionStatus != Invalid) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                             ,0x23,L"Expected to be called on a newly constructed handle."), bVar3))
      {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FActorInstanceHandle *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_2,param_1);
      this->InstanceIndex = iVar4;
      local_48 = (UObject *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48);
      }
      FVar7.Handle = (UObject *)&local_48;
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)FVar7);
    this->ResolutionStatus = Resolved;
  }
  return this;
}

// FActorInstanceHandle @ 147bb8990

FActorInstanceHandle * __thiscall
FActorInstanceHandle::FActorInstanceHandle
          (FActorInstanceHandle *this,TWeakInterfacePtr<IActorInstanceManagerInterface> *param_1,
          int param_2)

{
  IActorInstanceManagerInterface *pIVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  int iVar5;
  FActorInstanceHandle *pFVar6;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  FVar3 = (param_1->ObjectInstance).WeakPtr;
  pIVar1 = param_1->InterfaceInstance;
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).ObjectInstance.WeakPtr = FVar3;
  (this->ManagerInterface).InterfaceInstance = pIVar1;
  this->InstanceIndex = -1;
  this->ResolutionStatus = Invalid;
  if (UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = IsInParallelGameThread();
      if (!bVar4) {
        local_res8[0] = bVar4;
        `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(local_res8);
      }
    }
  }
  if ((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
    if ((bVar4) &&
       (pIVar1 = (this->ManagerInterface).InterfaceInstance,
       pIVar1 != (IActorInstanceManagerInterface *)0x0)) {
      if (this->ResolutionStatus != Invalid) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceHandle.ResolutionStatus == FActorInstanceHandle::EResolutionStatus::Invalid"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                           ,0x23,L"Expected to be called on a newly constructed handle.");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FActorInstanceHandle *)(*pcVar2)();
          return pFVar6;
        }
      }
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_2,0);
      this->InstanceIndex = iVar5;
      local_res10 = (UObject *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
      this->ResolutionStatus = Resolved;
    }
  }
  return this;
}

// operator= @ 147bbfca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceHandle * __thiscall
FActorInstanceHandle::operator=(FActorInstanceHandle *this,AActor *param_1)

{
  bool bVar1;
  AActor *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  this->InstanceIndex = -1;
  this->ResolutionStatus = Resolved;
  if (UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInParallelGameThread();
      if (!bVar1) {
        `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(&local_res8);
      }
    }
  }
  return this;
}

// operator== @ 147bc0ae0

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
FActorInstanceHandle::operator==(FActorInstanceHandle *this,FActorInstanceHandle *param_1)

{
  int iVar1;
  bool bVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  AActor *pAVar6;
  undefined1 local_res18 [8];
  
  bVar2 = IsInGameThread();
  if ((!bVar2) && (bVar2 = IsInParallelGameThread(), !bVar2)) {
    if ((this->ResolutionStatus != NeedsResolving) || (param_1->ResolutionStatus != NeedsResolving))
    {
      `FActorInstanceHandle::operator=='::__l17::<lambda_1>::operator()(local_res18);
      return false;
    }
    if ((this->ReferenceObject).WeakPtr.ObjectIndex !=
        (param_1->ReferenceObject).WeakPtr.ObjectIndex) {
      return false;
    }
    if ((this->ReferenceObject).WeakPtr.ObjectSerialNumber ==
        (param_1->ReferenceObject).WeakPtr.ObjectSerialNumber) {
      if (this->InstanceIndex == param_1->InstanceIndex) {
        return true;
      }
      return false;
    }
    return false;
  }
  if (this->ResolutionStatus == NeedsResolving) {
    ResolveHandle(this);
  }
  if (param_1->ResolutionStatus == NeedsResolving) {
    ResolveHandle(param_1);
  }
  if ((((this->InstanceIndex != -1) && (param_1->InstanceIndex != -1)) &&
      ((this->ManagerInterface).InterfaceInstance == (param_1->ManagerInterface).InterfaceInstance))
     && (this->InstanceIndex == param_1->InstanceIndex)) {
    return true;
  }
  ResolveHandle(this);
  pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pAVar3 == (AActor *)0x0) {
LAB_147bc0bc7:
    pAVar3 = (AActor *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_147bc0bc7;
  }
  ResolveHandle(param_1);
  pAVar5 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pAVar5 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_147bc0c06;
  }
  pAVar5 = (AActor *)0x0;
LAB_147bc0c06:
  pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ManagerInterface);
  if ((pAVar3 != pAVar6) ||
     (pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->ManagerInterface),
     pAVar5 != pAVar6)) {
    if (pAVar3 != (AActor *)0x0) {
      bVar2 = operator==(param_1,pAVar3);
      return bVar2;
    }
    if (pAVar5 != (AActor *)0x0) {
      bVar2 = operator==(this,pAVar5);
      return bVar2;
    }
  }
  return false;
}

// operator== @ 147bc0c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FActorInstanceHandle::operator==(FActorInstanceHandle *this,AActor *param_1)

{
  int iVar1;
  IActorInstanceManagerInterface *pIVar2;
  bool bVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  UObject *local_res8;
  
  if (((UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread) &&
      (bVar3 = IsInGameThread(), !bVar3)) && (bVar3 = IsInParallelGameThread(), !bVar3)) {
    `FActorInstanceHandle::operator=='::__l5::<lambda_1>::operator()(&local_res8);
  }
  ResolveHandle(this);
  pAVar4 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pAVar4 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pAVar4 == param_1;
    }
  }
  pIVar2 = (this->ManagerInterface).InterfaceInstance;
  if (param_1 != (AActor *)0x0) {
    if (((pIVar2 != (IActorInstanceManagerInterface *)0x0) &&
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), bVar3)) &&
       (pIVar2 = (this->ManagerInterface).InterfaceInstance,
       pIVar2 != (IActorInstanceManagerInterface *)0x0)) {
      local_res8 = (UObject *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    }
    pAVar4 = GetCachedActor(this);
    return pAVar4 == param_1;
  }
  if ((pIVar2 != (IActorInstanceManagerInterface *)0x0) &&
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), bVar3)) {
    return false;
  }
  if (this->InstanceIndex != -1) {
    return false;
  }
  return true;
}

// operator!= @ 147bc1300

bool __thiscall
FActorInstanceHandle::operator!=(FActorInstanceHandle *this,FActorInstanceHandle *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// operator!= @ 147bc1320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FActorInstanceHandle::operator!=(FActorInstanceHandle *this,AActor *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// DoesRepresentClass @ 147bd7ec0

bool __thiscall FActorInstanceHandle::DoesRepresentClass(FActorInstanceHandle *this,UClass *param_1)

{
  int iVar1;
  IActorInstanceManagerInterface *pIVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  
  ResolveHandle(this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    lVar6 = *(longlong *)&pUVar4->field_0x10;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_147bd7f3d;
  }
  if ((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) {
    return false;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
  if (!bVar3) {
    return false;
  }
  pIVar2 = (this->ManagerInterface).InterfaceInstance;
  if (pIVar2 == (IActorInstanceManagerInterface *)0x0) {
    return false;
  }
  if (this->InstanceIndex == -1) {
    return false;
  }
  lVar6 = (**(code **)((longlong)*pIVar2 + 0x28))();
LAB_147bd7f3d:
  if ((lVar6 != 0) && (param_1 != (UClass *)0x0)) {
    iVar1 = (int)param_1->_padding_;
    if ((iVar1 <= *(int *)(lVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) ==
        &param_1->_padding_)) {
      return true;
    }
  }
  return false;
}

// FetchActor @ 147bdbb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FActorInstanceHandle::FetchActor(FActorInstanceHandle *this)

{
  int iVar1;
  IActorInstanceManagerInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  AActor *pAVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  AActor *local_res8;
  
  ResolveHandle(this);
  pAVar5 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pAVar5 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pAVar5;
    }
  }
  pAVar5 = (AActor *)0x0;
  if (((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) &&
     (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), bVar4)) {
    if ((((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) ||
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (AActor *)(*pcVar3)();
      return pAVar5;
    }
    pIVar2 = (this->ManagerInterface).InterfaceInstance;
    pAVar5 = (AActor *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,this);
    ResolveHandle(this);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar7 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsActorValid() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                             ,0x16d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pAVar5 = (AActor *)(*pcVar3)();
        return pAVar5;
      }
    }
    local_res8 = pAVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  }
  return pAVar5;
}

// GetActorAsUObject @ 147bde9f0

UObject * __thiscall FActorInstanceHandle::GetActorAsUObject(FActorInstanceHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UObject *)0x0;
}

// GetActorAsUObject @ 147bdea50

UObject * __thiscall FActorInstanceHandle::GetActorAsUObject(FActorInstanceHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UObject *)0x0;
}

// GetCachedActor @ 147bdec70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FActorInstanceHandle::GetCachedActor(FActorInstanceHandle *this)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (AActor *)0x0;
}

// GetFName @ 147be03f0

FName __thiscall FActorInstanceHandle::GetFName(FActorInstanceHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName in_RDX;
  
  ResolveHandle(this);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)in_RDX = *(undefined8 *)&pUVar2->field_0x18;
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetLevel @ 147be0d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall FActorInstanceHandle::GetLevel(FActorInstanceHandle *this)

{
  int iVar1;
  IActorInstanceManagerInterface *pIVar2;
  bool bVar3;
  AActor *this_00;
  UClass *pUVar4;
  ULevel *pUVar5;
  
  ResolveHandle(this);
  this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar5 = AActor::GetLevel(this_00);
      return pUVar5;
    }
  }
  if ((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
    if (((bVar3) &&
        (pIVar2 = (this->ManagerInterface).InterfaceInstance,
        pIVar2 != (IActorInstanceManagerInterface *)0x0)) && (this->InstanceIndex != -1)) {
                    /* WARNING: Could not recover jumptable at 0x000147be0d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar5 = (ULevel *)(**(code **)((longlong)*pIVar2 + 0x30))();
      return pUVar5;
    }
  }
  return (ULevel *)0x0;
}

// GetLocation @ 147be2a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FActorInstanceHandle::GetLocation
          (FActorInstanceHandle *this,TVector<double> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  IActorInstanceManagerInterface *pIVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  ResolveHandle(this);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
LAB_147be2b30:
    if ((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) {
LAB_147be2b4a:
      pIVar6 = (IActorInstanceManagerInterface *)0x0;
    }
    else {
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
      if (!bVar2) goto LAB_147be2b4a;
      pIVar6 = (this->ManagerInterface).InterfaceInstance;
    }
    if ((pIVar6 == (IActorInstanceManagerInterface *)0x0) || (this->InstanceIndex == -1)) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      local_88 = 0.0;
    }
    else {
      lVar5 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,local_78,this);
      local_88 = *(double *)(lVar5 + 0x30);
      uVar7 = *(undefined4 *)(lVar5 + 0x20);
      uVar8 = *(undefined4 *)(lVar5 + 0x24);
      uVar9 = *(undefined4 *)(lVar5 + 0x28);
      uVar10 = *(undefined4 *)(lVar5 + 0x2c);
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_147be2b30;
    lVar5 = *(longlong *)(pUVar3 + 0xb);
    if (lVar5 == 0) {
      local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_147be2b84;
    }
    local_88 = *(double *)(lVar5 + 0x220);
    uVar7 = *(undefined4 *)(lVar5 + 0x210);
    uVar8 = *(undefined4 *)(lVar5 + 0x214);
    uVar9 = *(undefined4 *)(lVar5 + 0x218);
    uVar10 = *(undefined4 *)(lVar5 + 0x21c);
  }
  local_98 = (double)CONCAT44(uVar8,uVar7);
  uStack_90 = (double)CONCAT44(uVar10,uVar9);
LAB_147be2b84:
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_98;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = uStack_90;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88;
  return __return_storage_ptr__;
}

// GetManagingActor @ 147be2bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FActorInstanceHandle::GetManagingActor(FActorInstanceHandle *this)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ManagerInterface);
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (AActor *)0x0;
}

// GetName @ 147be35f0

FString * __thiscall
FActorInstanceHandle::GetName(FActorInstanceHandle *this,FString *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FName local_res8;
  FString local_18;
  
  ResolveHandle(this);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_res8.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_res8,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  if (((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) ||
     (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), !bVar2)) {
    ::FString::FString(__return_storage_ptr__,L"Invalid");
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ManagerInterface);
    if (pUVar3 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_res8.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%d");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetRepresentedClass @ 147be6ad0

UClass * __thiscall FActorInstanceHandle::GetRepresentedClass(FActorInstanceHandle *this)

{
  int iVar1;
  IActorInstanceManagerInterface *pIVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  ResolveHandle(this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    pUVar6 = *(UClass **)&pUVar4->field_0x10;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= (int)pUVar6->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) == &pUVar5->_padding_)
       ) {
      return pUVar6;
    }
  }
  if ((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
    if (((bVar3) &&
        (pIVar2 = (this->ManagerInterface).InterfaceInstance,
        pIVar2 != (IActorInstanceManagerInterface *)0x0)) && (this->InstanceIndex != -1)) {
                    /* WARNING: Could not recover jumptable at 0x000147be6b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar6 = (UClass *)(**(code **)((longlong)*pIVar2 + 0x28))();
      return pUVar6;
    }
  }
  return (UClass *)0x0;
}

// GetRootComponent @ 147be6de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall FActorInstanceHandle::GetRootComponent(FActorInstanceHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_147be6e59;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ManagerInterface);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
LAB_147be6e59:
      return *(USceneComponent **)(pUVar2 + 0xb);
    }
  }
  return (USceneComponent *)0x0;
}

// GetRotation @ 147be70b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
FActorInstanceHandle::GetRotation
          (FActorInstanceHandle *this,TRotator<double> *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TRotator<double> *pTVar6;
  double *pdVar7;
  IActorInstanceManagerInterface *pIVar8;
  undefined1 auStack_d8 [32];
  TRotator<double> local_b8;
  TQuat<double> local_98;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ResolveHandle(this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 == (UObject *)0x0) {
LAB_147be7149:
    if ((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) {
LAB_147be7163:
      pIVar8 = (IActorInstanceManagerInterface *)0x0;
    }
    else {
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
      if (!bVar3) goto LAB_147be7163;
      pIVar8 = (this->ManagerInterface).InterfaceInstance;
    }
    if ((pIVar8 != (IActorInstanceManagerInterface *)0x0) && (this->InstanceIndex != -1)) {
      pdVar7 = (double *)(**(code **)((longlong)*pIVar8 + 0x38))(pIVar8,local_78,this);
      local_98.X = *pdVar7;
      local_98.Y = pdVar7[1];
      local_98.Z = pdVar7[2];
      local_98.W = pdVar7[3];
      pTVar6 = UE::Math::TQuat<double>::Rotator(&local_98,&local_b8);
      goto LAB_147be71b4;
    }
    local_b8.Pitch = 0.0;
    local_b8.Yaw = 0.0;
    local_b8.Roll = 0.0;
  }
  else {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_147be7149;
    if (*(USceneComponent **)(pUVar4 + 0xb) != (USceneComponent *)0x0) {
      pTVar6 = USceneComponent::GetComponentRotation(*(USceneComponent **)(pUVar4 + 0xb),&local_b8);
      goto LAB_147be71b4;
    }
    local_b8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_b8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_b8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  pTVar6 = &local_b8;
LAB_147be71b4:
  dVar2 = pTVar6->Yaw;
  __return_storage_ptr__->Pitch = pTVar6->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = pTVar6->Roll;
  return __return_storage_ptr__;
}

// GetTransform @ 147bebfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FActorInstanceHandle::GetTransform
          (FActorInstanceHandle *this,TTransform<double> *__return_storage_ptr__)

{
  int iVar1;
  double adVar2 [2];
  double adVar3 [2];
  double adVar4 [2];
  double adVar5 [2];
  double adVar6 [2];
  double adVar7 [2];
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  TTransform<double> *pTVar12;
  IActorInstanceManagerInterface *pIVar13;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  ResolveHandle(this);
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar10 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar11->_padding_)) {
      if (*(longlong *)(pUVar10 + 0xb) == 0) {
        pTVar12 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar12 = (TTransform<double> *)(*(longlong *)(pUVar10 + 0xb) + 0x1f0);
      }
      goto LAB_147bec0cf;
    }
  }
  if ((this->ManagerInterface).InterfaceInstance == (IActorInstanceManagerInterface *)0x0) {
LAB_147bec05f:
    pIVar13 = (IActorInstanceManagerInterface *)0x0;
  }
  else {
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface);
    if (!bVar9) goto LAB_147bec05f;
    pIVar13 = (this->ManagerInterface).InterfaceInstance;
  }
  if ((pIVar13 == (IActorInstanceManagerInterface *)0x0) || (this->InstanceIndex == -1)) {
    pTVar12 = &local_78;
    adVar2[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    adVar2[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    adVar2[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_78.Rotation.XY.m128d_f64[1] = adVar2[1];
    adVar3[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    adVar3[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    adVar3[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_78.Rotation.ZW.m128d_f64[1] = adVar3[1];
    adVar6[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    adVar6[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    adVar6[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_78.Translation.XY.m128d_f64[1] = adVar6[1];
    adVar4[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    adVar4[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    adVar4[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_78.Translation.ZW.m128d_f64[1] = adVar4[1];
    adVar7[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    adVar7[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    adVar7[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_78.Scale3D.XY.m128d_f64[1] = adVar7[1];
    adVar5[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    adVar5[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    adVar5[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_78.Scale3D.ZW.m128d_f64[1] = adVar5[1];
  }
  else {
    pTVar12 = (TTransform<double> *)(**(code **)((longlong)*pIVar13 + 0x38))(pIVar13,&local_78,this)
    ;
  }
LAB_147bec0cf:
  dVar8 = (pTVar12->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar12->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar8;
  dVar8 = (pTVar12->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar12->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar8;
  dVar8 = (pTVar12->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar12->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8;
  dVar8 = (pTVar12->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar12->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar8;
  dVar8 = (pTVar12->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar12->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
  dVar8 = (pTVar12->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar12->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar8;
  return __return_storage_ptr__;
}

// IsActorValid @ 147bf0510

bool __thiscall FActorInstanceHandle::IsActorValid(FActorInstanceHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  ResolveHandle(this);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_147bf0553;
  }
  pUVar2 = (UObject *)0x0;
LAB_147bf0553:
  return pUVar2 != (UObject *)0x0;
}

// IsUnresolvedDehydratedActor @ 147bf1600

bool __thiscall FActorInstanceHandle::IsUnresolvedDehydratedActor(FActorInstanceHandle *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (this->ResolutionStatus == NeedsResolving) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar6 = GetTypeName<UPrimitiveComponent>(&local_28);
        pwVar7 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,pUVar3);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
      if (*(longlong *)&pUVar3[4].field_0x8 != 0) {
        pUVar4 = *(UClass **)(*(longlong *)&pUVar3[4].field_0x8 + 0x10);
        pUVar5 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
        bVar2 = UClass::ImplementsInterface(pUVar4,pUVar5);
        return bVar2;
      }
    }
  }
  return false;
}

// IsValid @ 147bf1720

bool __thiscall FActorInstanceHandle::IsValid(FActorInstanceHandle *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  if (this->ResolutionStatus == NeedsResolving) {
    bVar2 = IsInGameThread();
    if ((!bVar2) && (bVar2 = IsInParallelGameThread(), !bVar2)) {
      if ((this->ReferenceObject).WeakPtr.ObjectIndex != 0) {
        return true;
      }
      if ((this->ReferenceObject).WeakPtr.ObjectSerialNumber == 0) {
        return false;
      }
      return true;
    }
    ResolveHandle(this);
  }
  if ((((this->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) &&
      (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ManagerInterface), bVar2)) &&
     (this->InstanceIndex != -1)) {
    return true;
  }
  ResolveHandle(this);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return true;
    }
  }
  return false;
}

// MakeActorHandleToResolve @ 147bf1cf0

FActorInstanceHandle * __cdecl
FActorInstanceHandle::MakeActorHandleToResolve
          (FActorInstanceHandle *__return_storage_ptr__,
          TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *param_1,int param_2)

{
  undefined1 local_res18 [16];
  
  if (((param_1->WeakPtr).ObjectIndex == 0) && ((param_1->WeakPtr).ObjectSerialNumber == 0)) {
    `FActorInstanceHandle::MakeActorHandleToResolve'::__l2::<lambda_1>::operator()(local_res18);
  }
  (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  __return_storage_ptr__->ResolutionStatus = Invalid;
  __return_storage_ptr__->InstanceIndex = -1;
  (__return_storage_ptr__->ReferenceObject).WeakPtr = param_1->WeakPtr;
  __return_storage_ptr__->InstanceIndex = param_2;
  __return_storage_ptr__->ResolutionStatus = NeedsResolving;
  return __return_storage_ptr__;
}

// MakeDehydratedActorHandle @ 147bf1d60

FActorInstanceHandle * __cdecl
FActorInstanceHandle::MakeDehydratedActorHandle
          (FActorInstanceHandle *__return_storage_ptr__,UObject *param_1,int param_2)

{
  UClass *pUVar1;
  UObject *local_res8;
  FWeakObjectPtr local_18;
  IActorInstanceManagerInterface *pIStack_10;
  
  (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  __return_storage_ptr__->InstanceIndex = -1;
  __return_storage_ptr__->ResolutionStatus = Invalid;
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  if (param_1 == (UObject *)0x0) {
    pIStack_10 = (IActorInstanceManagerInterface *)0x0;
  }
  else {
    pUVar1 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
    pIStack_10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pIStack_10 != (IActorInstanceManagerInterface *)0x0) {
      local_res8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
    }
  }
  __return_storage_ptr__->InstanceIndex = param_2;
  (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = local_18;
  (__return_storage_ptr__->ManagerInterface).InterfaceInstance = pIStack_10;
  __return_storage_ptr__->ResolutionStatus = Resolved;
  return __return_storage_ptr__;
}

// ResolveHandle @ 147bfdf50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FActorInstanceHandle::ResolveHandle(FActorInstanceHandle *this)

{
  int iVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UPrimitiveComponent *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  if (this->ResolutionStatus == NeedsResolving) {
    if (((UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread) &&
        (bVar4 = IsInGameThread(), !bVar4)) && (bVar4 = IsInParallelGameThread(), !bVar4)) {
      local_res8[0] = bVar4;
      `FActorInstanceHandle::ResolveHandle'::__l8::<lambda_1>::operator()(local_res8);
    }
    pUVar5 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 != (UPrimitiveComponent *)0x0) {
      pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pFVar7 = GetTypeName<UPrimitiveComponent>(&local_28);
        pwVar8 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar5);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar8,pwVar9);
      }
      pAVar2 = *(AActor **)&pUVar5->field_0xa8;
      if (pAVar2 != (AActor *)0x0) {
        this->ResolutionStatus = Invalid;
        FActorInstanceHandleInternalHelper::SetUpWithActor(this,pAVar2,pUVar5,this->InstanceIndex);
        if ((this->ResolutionStatus != Resolved) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_712694473527656295>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                               ,0x99,"ResolutionStatus == EResolutionStatus::Resolved"), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (this->ResolutionStatus == NeedsResolving) {
      this->InstanceIndex = -1;
      (this->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
      (this->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
      (this->ManagerInterface).InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
      this->ResolutionStatus = Invalid;
    }
  }
  return;
}

// SetCachedActor @ 147c01060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FActorInstanceHandle::SetCachedActor(FActorInstanceHandle *this,AActor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  AActor *local_res8;
  
  ResolveHandle(this);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsActorValid() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ActorInstanceHandle.cpp"
                         ,0x16d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  return;
}

// operator() @ 150519f10

bool __thiscall
`FActorInstanceHandle::MakeActorHandleToResolve'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_712694473527656321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150519fe0

bool __thiscall
`FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527656384>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656384>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a030

bool __thiscall
`FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527656364>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656364>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a080

bool __thiscall
`FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527656379>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656379>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a0d0

bool __thiscall
`FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527656349>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656349>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a160

bool __thiscall `FActorInstanceHandle::operator=='::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527655999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527655999>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a1f0

bool __thiscall `FActorInstanceHandle::ResolveHandle'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_712694473527656308>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656308>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a240

bool __thiscall `FActorInstanceHandle::operator=='::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_712694473527656050>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656050>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a340

bool __thiscall
`FActorInstanceHandle::FActorInstanceHandle'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_712694473527656377>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_712694473527656377>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

