// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5c20b0

UClass * __cdecl UDS_TreasureBoxAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TreasureBoxAnim",
               &Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton,
               StaticRegisterNativesUDS_TreasureBoxAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TreasureBoxAnim>,
               InternalVTableHelperCtorCaller<UDS_TreasureBoxAnim>,local_res8,
               UDS_StuffAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton;
}

// UDS_TreasureBoxAnim @ 14b5c77a0

UDS_TreasureBoxAnim * __thiscall
UDS_TreasureBoxAnim::UDS_TreasureBoxAnim(UDS_TreasureBoxAnim *this,FVTableHelper *param_1)

{
  UDS_StuffAnim::UDS_StuffAnim((UDS_StuffAnim *)this,param_1);
  this->BoxStuffState = None;
  *(undefined ***)this = &___7UDS_TreasureBoxAnim__6B_;
  return this;
}

// ~UDS_TreasureBoxAnim @ 14b5c8de0

void __thiscall UDS_TreasureBoxAnim::~UDS_TreasureBoxAnim(UDS_TreasureBoxAnim *this)

{
  *(undefined ***)this = &___7UDS_TreasureBoxAnim__6B_;
  UDS_StuffAnim::~UDS_StuffAnim((UDS_StuffAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc7a0

UClass * __cdecl UDS_TreasureBoxAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TreasureBoxAnim",
               &Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton,
               StaticRegisterNativesUDS_TreasureBoxAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TreasureBoxAnim>,
               InternalVTableHelperCtorCaller<UDS_TreasureBoxAnim>,local_res8,
               UDS_StuffAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TreasureBoxAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_TreasureBoxAnim @ 14b5ce0d0

void __cdecl UDS_TreasureBoxAnim::StaticRegisterNativesUDS_TreasureBoxAnim(void)

{
  return;
}

// UDS_TreasureBoxAnim @ 14b865570

UDS_TreasureBoxAnim * __thiscall
UDS_TreasureBoxAnim::UDS_TreasureBoxAnim(UDS_TreasureBoxAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->BoxStuffState = None;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined2 *)&this->field_0x448 = 0;
  *(undefined ***)this = &___7UDS_TreasureBoxAnim__6B_;
  return this;
}

// OnBindAnimationEvents @ 14b881690

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

void __thiscall UDS_TreasureBoxAnim::OnBindAnimationEvents(UDS_TreasureBoxAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_StuffState_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TreasureBoxAnim>
              (&pUVar2[10].field_0x18,(UDS_TreasureBoxAnim *)(local_res8 + 1),(pmf_6d9e65cc)this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TreasureBoxAnim>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[8].field_0x8,(UDS_TreasureBoxAnim *)(local_res8 + 1),(pmf_0c17d202)this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TreasureBoxAnim>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),(UDS_TreasureBoxAnim *)(local_res8 + 1),(pmf_0c17d202)this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TreasureBoxAnim>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[9].field_0x20,(UDS_TreasureBoxAnim *)(local_res8 + 1),(pmf_d335a2a4)this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    if (pUVar2[0xb].field_0x1d == '\x05') {
      this->BoxStuffState = Die;
    }
  }
  return;
}

// OnChangedStuffState @ 14b886890

void __thiscall
UDS_TreasureBoxAnim::OnChangedStuffState(UDS_TreasureBoxAnim *this,EDS_StuffState *param_1)

{
  if (*param_1 == Die) {
    this->BoxStuffState = Die;
  }
  return;
}

// OnClearVariables @ 14b887bb0

void __thiscall UDS_TreasureBoxAnim::OnClearVariables(UDS_TreasureBoxAnim *this)

{
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  return;
}

// OnInitVariables @ 14b88a0a0

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

void __thiscall UDS_TreasureBoxAnim::OnInitVariables(UDS_TreasureBoxAnim *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar2.WeakPtr;
  }
  this->BoxStuffState = Idle;
  return;
}

// OnInteractionCancel @ 14b88a150

void __thiscall UDS_TreasureBoxAnim::OnInteractionCancel(UDS_TreasureBoxAnim *this,ulong64 *param_1)

{
  if (this->BoxStuffState != Die) {
    this->BoxStuffState = Idle;
  }
  return;
}

// OnInteractionComplete @ 14b88a170

void __thiscall
UDS_TreasureBoxAnim::OnInteractionComplete
          (UDS_TreasureBoxAnim *this,ulong64 *param_1,bool *param_2,bool *param_3)

{
  if (this->BoxStuffState != Die) {
    this->BoxStuffState = Idle;
  }
  return;
}

// OnInteractionStart @ 14b88a190

void __thiscall UDS_TreasureBoxAnim::OnInteractionStart(UDS_TreasureBoxAnim *this,ulong64 *param_1)

{
  this->BoxStuffState = Casting;
  return;
}

// OnUnBindAnimationEvents @ 14b8945e0

void __thiscall UDS_TreasureBoxAnim::OnUnBindAnimationEvents(UDS_TreasureBoxAnim *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x18,this);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[8].field_0x8,this);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 9),this);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[9].field_0x20,this);
  }
  return;
}

