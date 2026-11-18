// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4abae0

UClass * __cdecl ADS_InnCharacterActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InnCharacterActor",
               &Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton,
               StaticRegisterNativesADS_InnCharacterActor,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_InnCharacterActor>,
               InternalVTableHelperCtorCaller<ADS_InnCharacterActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton;
}

// ADS_InnCharacterActor @ 14b4b1470

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_InnCharacterActor * __thiscall
ADS_InnCharacterActor::ADS_InnCharacterActor(ADS_InnCharacterActor *this,FVTableHelper *param_1)

{
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_InnCharacterActor__6B_;
  (this->IdleAnim).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  return this;
}

// ~ADS_InnCharacterActor @ 14b4b3130

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_InnCharacterActor::~ADS_InnCharacterActor(ADS_InnCharacterActor *this)

{
  this->_padding_ = (longlong)&___7ADS_InnCharacterActor__6B_;
  ADS_PartsSystemActor::~ADS_PartsSystemActor((ADS_PartsSystemActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6720

UClass * __cdecl ADS_InnCharacterActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InnCharacterActor",
               &Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton,
               StaticRegisterNativesADS_InnCharacterActor,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_InnCharacterActor>,
               InternalVTableHelperCtorCaller<ADS_InnCharacterActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_InnCharacterActor.InnerSingleton;
}

// StaticRegisterNativesADS_InnCharacterActor @ 14b4b83f0

void __cdecl ADS_InnCharacterActor::StaticRegisterNativesADS_InnCharacterActor(void)

{
  return;
}

// ADS_InnCharacterActor @ 14b998c40

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_InnCharacterActor * __thiscall
ADS_InnCharacterActor::ADS_InnCharacterActor(ADS_InnCharacterActor *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,pFVar1);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&___7ADS_InnCharacterActor__6B_;
  (this->IdleAnim).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  return this;
}

// BeginPlay @ 14b99b410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_InnCharacterActor::BeginPlay(ADS_InnCharacterActor *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  AActor::BeginPlay((AActor *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    (**(code **)(this->_padding_ + 0x368))
              (this,this->ID_CharacterID == *(int *)&pUVar2[8].field_0x18);
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<ADS_InnCharacterActor>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (ADS_InnCharacterActor *)local_res10,(pmf_7a03bd06)this);
  return;
}

// EndPlay @ 14b9a7610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_InnCharacterActor::EndPlay(ADS_InnCharacterActor *this,Type param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// OnMainCharacterChanged @ 14b9bdbf0

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
ADS_InnCharacterActor::OnMainCharacterChanged
          (ADS_InnCharacterActor *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    pcVar1 = *(code **)(this->_padding_ + 0x368);
    if (this->ID_CharacterID == *(int *)&pUVar3[8].field_0x18) {
      (*pcVar1)(this,CONCAT71((int7)((ulonglong)this->_padding_ >> 8),1));
      return;
    }
    (*pcVar1)(this,0);
  }
  return;
}

// OnRefreshPartsSystemComplete @ 14b9be360

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_InnCharacterActor::OnRefreshPartsSystemComplete(ADS_InnCharacterActor *this)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  FWeakObjectPtr local_res8;
  USkeletalMeshComponent *local_res10;
  
  ADS_PartsSystemActor::OnRefreshPartsSystemComplete((ADS_PartsSystemActor *)this);
  if (((this->IdleAnim).field0_0x0.DebugPtr != (UAnimSequence *)0x0) &&
     ((UDS_PartsSystemControl *)this->_padding_ != (UDS_PartsSystemControl *)0x0)) {
    bVar1 = UDS_PartsSystemControl::IsValid((UDS_PartsSystemControl *)this->_padding_);
    if ((bVar1) && (((UDS_PartsSystemControl *)this->_padding_)->bIsCanceled != true)) {
      local_res10 = UDS_PartsSystemControl::GetSoulSkeletalMesh
                              ((UDS_PartsSystemControl *)this->_padding_);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                         (void *)0x0);
      if (!bVar1) {
        this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res8);
        USkeletalMeshComponent::PlayAnimation
                  (this_00,(UAnimationAsset *)(this->IdleAnim).field0_0x0.DebugPtr,true);
      }
    }
  }
  return;
}

// Refresh @ 14b9c1620

void __thiscall ADS_InnCharacterActor::Refresh(ADS_InnCharacterActor *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    pcVar1 = *(code **)(this->_padding_ + 0x368);
    if (this->ID_CharacterID == *(int *)&pUVar3[8].field_0x18) {
      (*pcVar1)(this,CONCAT71((int7)((ulonglong)this->_padding_ >> 8),1));
      return;
    }
    (*pcVar1)(this,0);
  }
  return;
}

