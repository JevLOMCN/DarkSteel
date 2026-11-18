// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b583b20

UClass * __cdecl UDS_RotateToAngleAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToAngleAbilityData",
               &Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_RotateToAngleAbilityData,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RotateToAngleAbilityData>,
               InternalVTableHelperCtorCaller<UDS_RotateToAngleAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton;
}

// UDS_RotateToAngleAbilityData @ 14b587300

UDS_RotateToAngleAbilityData * __thiscall
UDS_RotateToAngleAbilityData::UDS_RotateToAngleAbilityData
          (UDS_RotateToAngleAbilityData *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RotateToAngleAbilityData__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar1;
  (this->DestRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  return this;
}

// UDS_RotateToAngleAbilityData @ 14b587350

UDS_RotateToAngleAbilityData * __thiscall
UDS_RotateToAngleAbilityData::UDS_RotateToAngleAbilityData
          (UDS_RotateToAngleAbilityData *this,FObjectInitializer *param_1)

{
  double dVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RotateToAngleAbilityData__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar1;
  (this->DestRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  return this;
}

// ~UDS_RotateToAngleAbilityData @ 14b587b80

void __thiscall
UDS_RotateToAngleAbilityData::~UDS_RotateToAngleAbilityData(UDS_RotateToAngleAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_RotateToAngleAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b589370

UClass * __cdecl UDS_RotateToAngleAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToAngleAbilityData",
               &Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_RotateToAngleAbilityData,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RotateToAngleAbilityData>,
               InternalVTableHelperCtorCaller<UDS_RotateToAngleAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToAngleAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_RotateToAngleAbilityData @ 14b589be0

void __cdecl UDS_RotateToAngleAbilityData::StaticRegisterNativesUDS_RotateToAngleAbilityData(void)

{
  return;
}

// ResetData @ 14ba690d0

void __thiscall UDS_RotateToAngleAbilityData::ResetData(UDS_RotateToAngleAbilityData *this)

{
  double dVar1;
  
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar1;
  (this->DestRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  return;
}

