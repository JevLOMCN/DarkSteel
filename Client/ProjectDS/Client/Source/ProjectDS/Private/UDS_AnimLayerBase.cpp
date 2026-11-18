// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4141d0

UClass * __cdecl UDS_AnimLayerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimLayerBase",
               &Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton,
               StaticRegisterNativesUDS_AnimLayerBase,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimLayerBase>,
               InternalVTableHelperCtorCaller<UDS_AnimLayerBase>,aFStackX_8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton;
}

// UDS_AnimLayerBase @ 14b41aec0

UDS_AnimLayerBase * __thiscall
UDS_AnimLayerBase::UDS_AnimLayerBase(UDS_AnimLayerBase *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimLayerBase__6B_;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  (this->CharacterAnimBase).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AnimLayerBase @ 14b41b9a0

void __thiscall UDS_AnimLayerBase::~UDS_AnimLayerBase(UDS_AnimLayerBase *this)

{
  *(undefined ***)this = &___7UDS_AnimInstanceBase__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cf50

UClass * __cdecl UDS_AnimLayerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimLayerBase",
               &Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton,
               StaticRegisterNativesUDS_AnimLayerBase,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimLayerBase>,
               InternalVTableHelperCtorCaller<UDS_AnimLayerBase>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimLayerBase.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimLayerBase @ 14b41e150

void __cdecl UDS_AnimLayerBase::StaticRegisterNativesUDS_AnimLayerBase(void)

{
  return;
}

// UDS_AnimLayerBase @ 14b864690

UDS_AnimLayerBase * __thiscall
UDS_AnimLayerBase::UDS_AnimLayerBase(UDS_AnimLayerBase *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimLayerBase__6B_;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  (this->CharacterAnimBase).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// GetAnimSharedData @ 14b876450

FDS_AnimSharedData * __thiscall UDS_AnimLayerBase::GetAnimSharedData(UDS_AnimLayerBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharacterAnimBase).WeakPtr);
  if (!bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FDS_AnimSharedData::FDS_AnimSharedData(&InvalidData);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &InvalidData;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->CharacterAnimBase).WeakPtr);
  return (FDS_AnimSharedData *)&pUVar2[0x1d].field_0x10;
}

// IsValidReferencedPtr @ 14b87e700

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

bool __thiscall UDS_AnimLayerBase::IsValidReferencedPtr(UDS_AnimLayerBase *this)

{
  bool bVar1;
  
  bVar1 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerEntityMovementCore).WeakPtr);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->CharacterAnimBase).WeakPtr);
      return bVar1;
    }
  }
  return false;
}

// OnBindAnimationEvents @ 14b880fe0

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

void __thiscall UDS_AnimLayerBase::OnBindAnimationEvents(UDS_AnimLayerBase *this)

{
  FGameplayTag *pFVar1;
  int iVar2;
  char cVar3;
  UObject *pUVar4;
  FDS_ChangedCharStateInfo *pFVar5;
  FGameplayTag *pFVar6;
  bool abStackX_8 [8];
  FName FStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  FDS_ChangedCharStateInfo FStack_48;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar3 == '\x01') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_AnimInstanceBase>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_AnimInstanceBase *)abStackX_8,(pmf_2d1e6189)this);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    pFVar6 = *(FGameplayTag **)&pUVar4[2].field_0x8;
    iVar2 = *(int *)&pUVar4[2].field_0x10;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&pUVar4[2].field_0x10 != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(abStackX_8);
      }
      if (pFVar6 == pFVar1) break;
      abStackX_8[0] = true;
      pFVar5 = UDS_CharStateData::GetChangedCharStateInfo(&FStack_48,pFVar6,abStackX_8);
      FStack_78 = (pFVar5->StateTag).TagName;
      uStack_70 = *(undefined8 *)&pFVar5->bIsStateTagOn;
      uStack_68 = (undefined4)pFVar5->AddedCharState;
      uStack_64 = *(undefined4 *)((longlong)&pFVar5->AddedCharState + 4);
      uStack_60 = (undefined4)pFVar5->RemovedCharState;
      uStack_5c = *(undefined4 *)((longlong)&pFVar5->RemovedCharState + 4);
      uStack_58._0_4_ = pFVar5->AddedCharDetailState;
      uStack_58._4_4_ = pFVar5->RemovedCharDetailState;
      (**(code **)(*(longlong *)this + 0x3d8))(this,*(undefined8 *)&this->field_0x438,&FStack_78);
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// OnClearVariables @ 14b887720

void __thiscall UDS_AnimLayerBase::OnClearVariables(UDS_AnimLayerBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OwnerEntityMovementCore).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CharacterAnimBase).WeakPtr = local_res8;
  return;
}

// OnInitVariables @ 14b889450

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

void __thiscall UDS_AnimLayerBase::OnInitVariables(UDS_AnimLayerBase *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  FDS_EntityBase *pFVar5;
  USkeletalMeshComponent *this_00;
  FWeakObjectPtr FVar6;
  UClass *pUVar7;
  FWeakObjectPtr *pFVar8;
  UObject *pUVar9;
  FWeakObjectPtr FVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  AActor *local_res20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  cVar2 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar2 == '\x01') {
    TVar4 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar4.WeakPtr;
  }
  local_res20 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FVar10.ObjectIndex = 0;
  FVar10.ObjectSerialNumber = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
  }
  else {
    (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5);
    bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (bVar3) {
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
    }
    else {
      this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res18);
      FVar6 = (FWeakObjectPtr)USkeletalMeshComponent::GetAnimInstance(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar6 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res8);
  if (FVar6 != (FWeakObjectPtr)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_CharacterAnimBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar6 + 0x10) + 0x38)) &&
       (local_res10 = FVar6,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)((longlong)FVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar7->_padding_)) goto LAB_14b8895a9;
  }
  local_res10 = FVar10;
LAB_14b8895a9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&(this->CharacterAnimBase).WeakPtr,(FObjectPtr)&local_res10);
  pFVar8 = (FWeakObjectPtr *)
           (**(code **)(**(longlong **)&this->field_0x430 + 0x78))
                     (*(longlong **)&this->field_0x430,&local_res8);
  (this->OwnerEntityMovementCore).WeakPtr = *pFVar8;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar3) {
    cVar2 = (**(code **)(*(longlong *)this + 0x3d0))(this);
    if (cVar2 == '\x01') {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_58 = *(undefined8 *)(pUVar9 + 5);
      uStack_50 = *(undefined8 *)&pUVar9[5].field_0x8;
      local_48 = *(undefined4 *)&pUVar9[5].field_0x10;
      uStack_44 = *(undefined4 *)&pUVar9[5].field_0x14;
      uStack_40 = *(undefined4 *)&pUVar9[5].field_0x18;
      uStack_3c = *(undefined4 *)&pUVar9[5].field_0x1c;
      local_38 = *(undefined8 *)&pUVar9[5].field_0x20;
      (**(code **)(*(longlong *)this + 0x3d8))(this,*(undefined8 *)&this->field_0x438,&local_58);
    }
  }
  return;
}

// OnUnBindAnimationEvents @ 14b893f50

void __thiscall UDS_AnimLayerBase::OnUnBindAnimationEvents(UDS_AnimLayerBase *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    return;
  }
  return;
}

