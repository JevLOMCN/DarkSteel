// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4163c0

UClass * __cdecl UDS_AnimNotifyState_ChangeShield::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_ChangeShield",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_ChangeShield,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_ChangeShield>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_ChangeShield>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton;
}

// UDS_AnimNotifyState_ChangeShield @ 14b41b040

UDS_AnimNotifyState_ChangeShield * __thiscall
UDS_AnimNotifyState_ChangeShield::UDS_AnimNotifyState_ChangeShield
          (UDS_AnimNotifyState_ChangeShield *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->StartShieldState = Spreaded;
  this->EndShieldState = Folded;
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_ChangeShield__6B_;
  return this;
}

// ~UDS_AnimNotifyState_ChangeShield @ 14b41ba50

void __thiscall
UDS_AnimNotifyState_ChangeShield::~UDS_AnimNotifyState_ChangeShield
          (UDS_AnimNotifyState_ChangeShield *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d250

UClass * __cdecl UDS_AnimNotifyState_ChangeShield::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_ChangeShield",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_ChangeShield,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_ChangeShield>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_ChangeShield>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_ChangeShield.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState_ChangeShield @ 14b41e190

void __cdecl
UDS_AnimNotifyState_ChangeShield::StaticRegisterNativesUDS_AnimNotifyState_ChangeShield(void)

{
  return;
}

// UDS_AnimNotifyState_ChangeShield @ 14b8b20b0

UDS_AnimNotifyState_ChangeShield * __thiscall
UDS_AnimNotifyState_ChangeShield::UDS_AnimNotifyState_ChangeShield
          (UDS_AnimNotifyState_ChangeShield *this,FObjectInitializer *param_1)

{
  UDS_AnimNotifyState::UDS_AnimNotifyState((UDS_AnimNotifyState *)this,param_1);
  this->StartShieldState = Spreaded;
  this->EndShieldState = Folded;
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_ChangeShield__6B_;
  return this;
}

// FindShieldAnimInstance @ 14b8c3350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<UDS_ShieldAnimInstance,FWeakObjectPtr> __thiscall
UDS_AnimNotifyState_ChangeShield::FindShieldAnimInstance
          (UDS_AnimNotifyState_ChangeShield *this,USkeletalMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  int iVar3;
  UClass *pUVar4;
  UAnimInstance *pUVar5;
  ForAnyElementType FVar6;
  USceneComponent *in_R8;
  UAnimInstance *local_res20;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  USceneComponent::GetChildrenComponents(in_R8,true,&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (FVar6.Data == pFVar1) break;
    this_00 = *(USkeletalMeshComponent **)FVar6.Data;
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = USkeletalMeshComponent::GetAnimInstance(this_00);
        if (pUVar5 != (UAnimInstance *)0x0) {
          pUVar4 = Z_Construct_UClass_UDS_ShieldAnimInstance_NoRegister();
          iVar2 = (int)pUVar4->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar4->_padding_)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            param_1->_padding_ = 0;
            local_res20 = pUVar5;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
LAB_14b8c3446:
            FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
            if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.AllocatorInstance.Data);
            }
            return (TWeakObjectPtr<UDS_ShieldAnimInstance,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
          }
        }
      }
    }
    FVar6.Data = FVar6.Data + 8;
  }
  param_1->_padding_ = 0;
  local_res20 = (UAnimInstance *)0x0;
  goto LAB_14b8c3446;
}

// NotifyBegin @ 14b8d3610

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
UDS_AnimNotifyState_ChangeShield::NotifyBegin
          (UDS_AnimNotifyState_ChangeShield *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  UDS_ShieldAnimInstance *this_00;
  FWeakObjectPtr local_res8;
  UObject *local_18 [2];
  
  if (this->StartShieldState != DoNothing) {
    pUVar3 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
    if (pFVar2 == (FDS_EntityBase *)0x0) {
      FindShieldAnimInstance(this,(USkeletalMeshComponent *)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        this_00 = (UDS_ShieldAnimInstance *)FWeakObjectPtr::Get(&local_res8);
        UDS_ShieldAnimInstance::SetShieldAnimState(this_00,this->StartShieldState);
      }
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        pUVar3[2].field_0x20 = this->StartShieldState;
        return;
      }
    }
  }
  return;
}

// NotifyEnd @ 14b8d3a10

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
UDS_AnimNotifyState_ChangeShield::NotifyEnd
          (UDS_AnimNotifyState_ChangeShield *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  UDS_ShieldAnimInstance *this_00;
  FWeakObjectPtr local_res8;
  UObject *local_18 [2];
  
  if (this->EndShieldState != DoNothing) {
    pUVar3 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
    if (pFVar2 == (FDS_EntityBase *)0x0) {
      FindShieldAnimInstance(this,(USkeletalMeshComponent *)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        this_00 = (UDS_ShieldAnimInstance *)FWeakObjectPtr::Get(&local_res8);
        UDS_ShieldAnimInstance::SetShieldAnimState(this_00,this->EndShieldState);
      }
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        pUVar3[2].field_0x20 = this->EndShieldState;
        return;
      }
    }
  }
  return;
}

