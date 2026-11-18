// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4175b0

UClass * __cdecl UDS_AnimNotify_DeathEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_DeathEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_DeathEffect,0x60,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotify_DeathEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_DeathEffect>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton;
}

// UDS_AnimNotify_DeathEffect @ 14b41b260

UDS_AnimNotify_DeathEffect * __thiscall
UDS_AnimNotify_DeathEffect::UDS_AnimNotify_DeathEffect
          (UDS_AnimNotify_DeathEffect *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->Niagara_KillTimeLength = 3.0;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_DeathEffect__6B_;
  (this->Niagara_BodyColor).field0_0x0._s_0.R = 0.05098;
  (this->Niagara_BodyColor).field0_0x0._s_0.G = 0.215686;
  (this->Niagara_BodyColor).field0_0x0._s_0.B = 0.941177;
  (this->Niagara_BodyColor).field0_0x0._s_0.A = 1.0;
  this->Niagara_Propigate = 1000.0;
  this->Niagara_SpawnRate = 6000.0;
  this->Disappear_KillPropigation = 100.0;
  this->Disappear_KillAgeSpeed = 0.5;
  return this;
}

// UDS_AnimNotify_DeathEffect @ 14b41b2d0

UDS_AnimNotify_DeathEffect * __thiscall
UDS_AnimNotify_DeathEffect::UDS_AnimNotify_DeathEffect
          (UDS_AnimNotify_DeathEffect *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->Niagara_KillTimeLength = 3.0;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_DeathEffect__6B_;
  (this->Niagara_BodyColor).field0_0x0._s_0.R = 0.05098;
  (this->Niagara_BodyColor).field0_0x0._s_0.G = 0.215686;
  (this->Niagara_BodyColor).field0_0x0._s_0.B = 0.941177;
  (this->Niagara_BodyColor).field0_0x0._s_0.A = 1.0;
  this->Niagara_Propigate = 1000.0;
  this->Niagara_SpawnRate = 6000.0;
  this->Disappear_KillPropigation = 100.0;
  this->Disappear_KillAgeSpeed = 0.5;
  return this;
}

// ~UDS_AnimNotify_DeathEffect @ 14b41bb70

void __thiscall
UDS_AnimNotify_DeathEffect::~UDS_AnimNotify_DeathEffect(UDS_AnimNotify_DeathEffect *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d790

UClass * __cdecl UDS_AnimNotify_DeathEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_DeathEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_DeathEffect,0x60,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotify_DeathEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_DeathEffect>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_DeathEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_DeathEffect @ 14b41e200

void __cdecl UDS_AnimNotify_DeathEffect::StaticRegisterNativesUDS_AnimNotify_DeathEffect(void)

{
  return;
}

// Notify @ 14b8d2110

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
UDS_AnimNotify_DeathEffect::Notify
          (UDS_AnimNotify_DeathEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  UObject *pUVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_DeathAbilityData *this_00;
  UObject *local_res10 [3];
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  TVector<double>_u_0 local_28;
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_res10);
    pFVar3 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_38)
    ;
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      local_res10[0] = (UObject *)CONCAT71(local_res10[0]._1_7_,0x56);
      UDS_AbilityDataSet::GetAbilityData<UDS_DeathAbilityData>
                ((ulong64 *)&local_30,(EDS_AbilityTagType *)&pFVar3->EntityID);
      bVar2 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *)&local_30,
                         (void *)0x0);
      if (!bVar2) {
        local_28._s_0.X = (double)(this->Niagara_BodyColor).field0_0x0._s_0.R;
        local_28._s_0.Y = (double)(this->Niagara_BodyColor).field0_0x0._s_0.G;
        local_28._s_0.Z = (double)(this->Niagara_BodyColor).field0_0x0._s_0.B;
        this_00 = (UDS_DeathAbilityData *)FWeakObjectPtr::Get(&local_30);
        UDS_DeathAbilityData::StartDeathEffectByAnimNotify
                  (this_00,&this->Niagara_KillTimeLength,(TVector<double> *)&local_28._s_0,
                   &this->Niagara_Propigate,&this->Niagara_SpawnRate,
                   &this->Disappear_KillPropigation,&this->Disappear_KillAgeSpeed);
      }
    }
  }
  return;
}

