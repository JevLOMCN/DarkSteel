// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4819f0

UClass * __cdecl UDS_DeathAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbilityData",
               &Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbilityData,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbilityData>,
               InternalVTableHelperCtorCaller<UDS_DeathAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton;
}

// UDS_DeathAbilityData @ 14b483750

UDS_DeathAbilityData * __thiscall
UDS_DeathAbilityData::UDS_DeathAbilityData(UDS_DeathAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->EntityDeathType = None;
  this->_padding_ = (longlong)&___7UDS_DeathAbilityData__6B_;
  this->Niagara_KillTimeLength = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Niagara_BodyColor).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Niagara_BodyColor).field0_0x0._s_0.Y = (double)uVar1;
  (this->Niagara_BodyColor).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StartDeathEffectDelegate = 0;
  *(undefined8 *)&(this->StartDeathEffectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartDeathEffectDelegate).field_0x10 = 0;
  this->Niagara_Propigate = 0.0;
  this->Niagara_SpawnRate = 0.0;
  this->Disappear_KillPropigation = 0.0;
  this->Disappear_KillAgeSpeed = 0.0;
  this->IsDeathRotateToTarget = false;
  this->DeathTargetYaw = 0.0;
  this->DisappearTime = 1.0;
  return this;
}

// UDS_DeathAbilityData @ 14b4837d0

UDS_DeathAbilityData * __thiscall
UDS_DeathAbilityData::UDS_DeathAbilityData(UDS_DeathAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->EntityDeathType = None;
  this->_padding_ = (longlong)&___7UDS_DeathAbilityData__6B_;
  this->Niagara_KillTimeLength = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Niagara_BodyColor).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Niagara_BodyColor).field0_0x0._s_0.Y = (double)uVar1;
  (this->Niagara_BodyColor).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StartDeathEffectDelegate = 0;
  *(undefined8 *)&(this->StartDeathEffectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartDeathEffectDelegate).field_0x10 = 0;
  this->Niagara_Propigate = 0.0;
  this->Niagara_SpawnRate = 0.0;
  this->Disappear_KillPropigation = 0.0;
  this->Disappear_KillAgeSpeed = 0.0;
  this->IsDeathRotateToTarget = false;
  this->DeathTargetYaw = 0.0;
  this->DisappearTime = 1.0;
  return this;
}

// ~UDS_DeathAbilityData @ 14b483fb0

void __thiscall UDS_DeathAbilityData::~UDS_DeathAbilityData(UDS_DeathAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_DeathAbilityData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartDeathEffectDelegate);
  pvVar1 = *(void **)&(this->StartDeathEffectDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartDeathEffectDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4850e0

UClass * __cdecl UDS_DeathAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathAbilityData",
               &Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_DeathAbilityData,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DeathAbilityData>,
               InternalVTableHelperCtorCaller<UDS_DeathAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_DeathAbilityData @ 14b485610

void __cdecl UDS_DeathAbilityData::StaticRegisterNativesUDS_DeathAbilityData(void)

{
  return;
}

// ResetData @ 14ba18700

void __thiscall UDS_DeathAbilityData::ResetData(UDS_DeathAbilityData *this)

{
  undefined8 uVar1;
  
  this->EntityDeathType = None;
  this->Niagara_KillTimeLength = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Niagara_BodyColor).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Niagara_BodyColor).field0_0x0._s_0.Y = (double)uVar1;
  (this->Niagara_BodyColor).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->Niagara_Propigate = 0.0;
  this->Niagara_SpawnRate = 0.0;
  this->Disappear_KillPropigation = 0.0;
  this->Disappear_KillAgeSpeed = 0.0;
  this->IsDeathRotateToTarget = false;
  this->DeathTargetYaw = 0.0;
  this->DisappearTime = 1.0;
  return;
}

// StartDeathEffectByAnimNotify @ 14ba1d6d0

void __thiscall
UDS_DeathAbilityData::StartDeathEffectByAnimNotify
          (UDS_DeathAbilityData *this,float *param_1,TVector<double> *param_2,float *param_3,
          float *param_4,float *param_5,float *param_6)

{
  longlong *plVar1;
  double dVar2;
  FReadAccessScope local_28;
  
  if (this->EntityDeathType != Disappear) {
    (**(code **)(this->_padding_ + 0x2c8))();
    this->Niagara_KillTimeLength = *param_1;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (this->Niagara_BodyColor).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->Niagara_BodyColor).field0_0x0._s_0.Y = dVar2;
    (this->Niagara_BodyColor).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    this->Niagara_Propigate = *param_3;
    this->Niagara_SpawnRate = *param_4;
    this->Disappear_KillPropigation = *param_5;
    this->Disappear_KillAgeSpeed = *param_6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->StartDeathEffectDelegate,&local_28);
    if ((*(int *)&(this->StartDeathEffectDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->StartDeathEffectDelegate).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

