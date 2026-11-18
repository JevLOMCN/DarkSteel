// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5a7440

UClass * __cdecl UDS_StuffVergenceAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffVergenceAnim",
               &Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton,
               StaticRegisterNativesUDS_StuffVergenceAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffVergenceAnim>,
               InternalVTableHelperCtorCaller<UDS_StuffVergenceAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton;
}

// UDS_StuffVergenceAnim @ 14b5a9550

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

UDS_StuffVergenceAnim * __thiscall
UDS_StuffVergenceAnim::UDS_StuffVergenceAnim(UDS_StuffVergenceAnim *this,FVTableHelper *param_1)

{
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->IsActive = false;
  this->IsActiveAnimaion = false;
  this->_padding_ = (longlong)&___7UDS_StuffVergenceAnim__6B_;
  return this;
}

// ~UDS_StuffVergenceAnim @ 14b5a9a10

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

void __thiscall UDS_StuffVergenceAnim::~UDS_StuffVergenceAnim(UDS_StuffVergenceAnim *this)

{
  this->_padding_ = (longlong)&___7UDS_StuffVergenceAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aada0

UClass * __cdecl UDS_StuffVergenceAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffVergenceAnim",
               &Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton,
               StaticRegisterNativesUDS_StuffVergenceAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffVergenceAnim>,
               InternalVTableHelperCtorCaller<UDS_StuffVergenceAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffVergenceAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffVergenceAnim @ 14b5ab040

void __cdecl UDS_StuffVergenceAnim::StaticRegisterNativesUDS_StuffVergenceAnim(void)

{
  return;
}

// UDS_StuffVergenceAnim @ 14b865430

UDS_StuffVergenceAnim * __thiscall
UDS_StuffVergenceAnim::UDS_StuffVergenceAnim
          (UDS_StuffVergenceAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->IsActive = false;
  this->IsActiveAnimaion = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_StuffVergenceAnim__6B_;
  return this;
}

// OnClearVariables @ 14b887b70

void __thiscall UDS_StuffVergenceAnim::OnClearVariables(UDS_StuffVergenceAnim *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// OnInitVariables @ 14b88a020

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

void __thiscall UDS_StuffVergenceAnim::OnInitVariables(UDS_StuffVergenceAnim *this)

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

// OnNativeThreadSafeUpdateAnimation @ 14b88bb20

void __thiscall
UDS_StuffVergenceAnim::OnNativeThreadSafeUpdateAnimation(UDS_StuffVergenceAnim *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_StuffQuestData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->_padding_ != 0) {
    UDS_StuffQuestData::GetData((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->IsActive = (bool)pUVar2[10].field_0x18;
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->IsActiveAnimaion = (bool)pUVar2[10].field_0x19;
      this_00 = (UDS_StuffQuestData *)FWeakObjectPtr::Get(local_res8);
      UDS_StuffQuestData::SetIsStuffActiveAnimaion(this_00,false);
    }
  }
  return;
}

