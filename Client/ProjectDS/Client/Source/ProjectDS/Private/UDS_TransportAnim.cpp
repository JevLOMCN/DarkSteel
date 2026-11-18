// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5c3510

UClass * __cdecl UDS_TransportAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportAnim",
               &Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton,
               StaticRegisterNativesUDS_TransportAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TransportAnim>,
               InternalVTableHelperCtorCaller<UDS_TransportAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton;
}

// UDS_TransportAnim @ 14b5c7510

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

UDS_TransportAnim * __thiscall
UDS_TransportAnim::UDS_TransportAnim(UDS_TransportAnim *this,FVTableHelper *param_1)

{
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->TransportState = None;
  this->MoveMode = Idle;
  this->_padding_ = (longlong)&___7UDS_TransportAnim__6B_;
  return this;
}

// ~UDS_TransportAnim @ 14b5c8d40

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

void __thiscall UDS_TransportAnim::~UDS_TransportAnim(UDS_TransportAnim *this)

{
  this->_padding_ = (longlong)&___7UDS_TransportAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc3e0

UClass * __cdecl UDS_TransportAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportAnim",
               &Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton,
               StaticRegisterNativesUDS_TransportAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TransportAnim>,
               InternalVTableHelperCtorCaller<UDS_TransportAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_TransportAnim @ 14b5ce050

void __cdecl UDS_TransportAnim::StaticRegisterNativesUDS_TransportAnim(void)

{
  return;
}

// UDS_TransportAnim @ 14b865520

UDS_TransportAnim * __thiscall
UDS_TransportAnim::UDS_TransportAnim(UDS_TransportAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->TransportState = None;
  this->MoveMode = Idle;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_TransportAnim__6B_;
  return this;
}

// OnClearVariables @ 14b887b90

void __thiscall UDS_TransportAnim::OnClearVariables(UDS_TransportAnim *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// OnInitVariables @ 14b88a060

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

void __thiscall UDS_TransportAnim::OnInitVariables(UDS_TransportAnim *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)this->_padding_);
    this->_padding_ = *(longlong *)TVar2.WeakPtr;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88bcb0

void __thiscall
UDS_TransportAnim::OnNativeThreadSafeUpdateAnimation(UDS_TransportAnim *this,float param_1)

{
  bool bVar1;
  EDS_MoveMode EVar2;
  UDS_EntityData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  UDS_TransportData::FindOrAddData((ulong64)local_res8,*(ulong64 *)(this->_padding_ + 8));
  bVar1 = TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(local_res8);
    EVar2 = UDS_EntityData::GetMoveMode(this_00);
    this->MoveMode = EVar2;
  }
  return;
}

