// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4bd440

UClass * __cdecl UDS_InteractionAbilityData_NPCTaming::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCTaming",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCTaming,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCTaming>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCTaming>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton;
}

// UDS_InteractionAbilityData_NPCTaming @ 14b4c0a90

UDS_InteractionAbilityData_NPCTaming * __thiscall
UDS_InteractionAbilityData_NPCTaming::UDS_InteractionAbilityData_NPCTaming
          (UDS_InteractionAbilityData_NPCTaming *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DismountDelegate).Delegate = 0;
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x18 = 2;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCTaming__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->TamingStartIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AttachRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AttachRelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->AttachRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TimerHandle).Handle = 0;
  return this;
}

// UDS_InteractionAbilityData_NPCTaming @ 14b4c0b30

UDS_InteractionAbilityData_NPCTaming * __thiscall
UDS_InteractionAbilityData_NPCTaming::UDS_InteractionAbilityData_NPCTaming
          (UDS_InteractionAbilityData_NPCTaming *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->DismountDelegate).Delegate = 0;
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->DismountDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ProcessEndDelegate).Delegate.field_0x18 = 2;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCTaming__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->TamingStartIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AttachRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AttachRelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->AttachRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TimerHandle).Handle = 0;
  return this;
}

// ~UDS_InteractionAbilityData_NPCTaming @ 14b4c2180

void __thiscall
UDS_InteractionAbilityData_NPCTaming::~UDS_InteractionAbilityData_NPCTaming
          (UDS_InteractionAbilityData_NPCTaming *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCTaming__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ProcessEndDelegate).Delegate.field_0x8,
             *(int *)&(this->ProcessEndDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->ProcessEndDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ProcessEndDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DismountDelegate).Delegate.field_0x8,
             *(int *)&(this->DismountDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->DismountDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DismountDelegate);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c41e0

UClass * __cdecl UDS_InteractionAbilityData_NPCTaming::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCTaming",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCTaming,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCTaming>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCTaming>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCTaming.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPCTaming @ 14b4c55d0

void __cdecl
UDS_InteractionAbilityData_NPCTaming::StaticRegisterNativesUDS_InteractionAbilityData_NPCTaming
          (void)

{
  return;
}

// ResetData @ 14ba189e0

void __thiscall
UDS_InteractionAbilityData_NPCTaming::ResetData(UDS_InteractionAbilityData_NPCTaming *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// TamingTimerStart @ 14ba1dca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_InteractionAbilityData_NPCTaming::TamingTimerStart
          (UDS_InteractionAbilityData_NPCTaming *this,FDS_EventDelegate<> *param_1,float param_2)

{
  void *pvVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  
  if (param_1 != &this->ProcessEndDelegate) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ProcessEndDelegate,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  }
  pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar3 = FTimerManager::FindTimer(pFVar2,&this->TimerHandle);
  if (pFVar3 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar2,(FTimerHandle)(this->TimerHandle).Handle);
  }
  (this->TimerHandle).Handle = 0;
  pFVar2 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_InteractionAbilityData_NPCTaming>
            (pFVar2,&this->TimerHandle,this,(pmf_30eceee1)0x14ba1e010,param_2,false,__real_bf800000)
  ;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(param_1->Delegate).field_0x8
             ,*(int *)&(param_1->Delegate).field_0x10);
  pvVar1 = *(void **)&(param_1->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// TimerEndEvent @ 14ba1e010

void __thiscall
UDS_InteractionAbilityData_NPCTaming::TimerEndEvent(UDS_InteractionAbilityData_NPCTaming *this)

{
  bool bVar1;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ProcessEndDelegate
                    );
  if (bVar1) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&(this->ProcessEndDelegate).Delegate);
    return;
  }
  return;
}

