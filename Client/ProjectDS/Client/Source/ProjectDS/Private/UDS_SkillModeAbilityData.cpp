// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b591df0

UClass * __cdecl UDS_SkillModeAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillModeAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillModeAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton;
}

// UDS_SkillModeAbilityData @ 14b594800

UDS_SkillModeAbilityData * __thiscall
UDS_SkillModeAbilityData::UDS_SkillModeAbilityData
          (UDS_SkillModeAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillModeAbilityData__6B_;
  this->SkillModeID = 0;
  this->AimPitchValue = 0.0;
  return this;
}

// UDS_SkillModeAbilityData @ 14b594840

UDS_SkillModeAbilityData * __thiscall
UDS_SkillModeAbilityData::UDS_SkillModeAbilityData
          (UDS_SkillModeAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillModeAbilityData__6B_;
  this->SkillModeID = 0;
  this->AimPitchValue = 0.0;
  return this;
}

// ~UDS_SkillModeAbilityData @ 14b595410

void __thiscall UDS_SkillModeAbilityData::~UDS_SkillModeAbilityData(UDS_SkillModeAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_SkillModeAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b596eb0

UClass * __cdecl UDS_SkillModeAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillModeAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillModeAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillModeAbilityData @ 14b597890

void __cdecl UDS_SkillModeAbilityData::StaticRegisterNativesUDS_SkillModeAbilityData(void)

{
  return;
}

// ResetData @ 14ba693e0

void __thiscall UDS_SkillModeAbilityData::ResetData(UDS_SkillModeAbilityData *this)

{
  undefined8 uVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  
  this->SkillModeID = 0;
  this->SkillModeType = SkillAimMode;
  this->AimDistanceMax = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->TargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->TargetSphereRadius = 0.0;
  this->TargetSphereID = 0;
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (!bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
    }
  }
  TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar3[9].field_0x20 = 0;
  }
  return;
}

// SetData @ 14ba6de70

void __thiscall UDS_SkillModeAbilityData::SetData(UDS_SkillModeAbilityData *this,int param_1)

{
  bool bVar1;
  FDS_SkillModeTableRow *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  this->SkillModeID = param_1;
  if (param_1 != 0) {
    pFVar2 = FDS_SkillModeTableRow::Get((longlong)param_1,true);
    if (pFVar2 != (FDS_SkillModeTableRow *)0x0) {
      this->SkillModeType = pFVar2->SkillModeType;
      this->AimDistanceMax = pFVar2->AimDistanceMax;
    }
    if (this->SkillModeType == SkillAimMode) {
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_res8);
      bVar1 = FWeakObjectPtr::IsValid(local_res8);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(local_res8);
        *(int *)&pUVar3[9].field_0x20 = this->SkillModeID;
      }
    }
  }
  return;
}

