// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b458610

UClass * __cdecl UDS_ComeBackAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComeBackAbilityData",
               &Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ComeBackAbilityData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ComeBackAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ComeBackAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton;
}

// UDS_ComeBackAbilityData @ 14b45c950

UDS_ComeBackAbilityData * __thiscall
UDS_ComeBackAbilityData::UDS_ComeBackAbilityData
          (UDS_ComeBackAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ComeBackAbilityData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_ComeBackAbilityData @ 14b45c990

UDS_ComeBackAbilityData * __thiscall
UDS_ComeBackAbilityData::UDS_ComeBackAbilityData
          (UDS_ComeBackAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ComeBackAbilityData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_ComeBackAbilityData @ 14b45d110

void __thiscall UDS_ComeBackAbilityData::~UDS_ComeBackAbilityData(UDS_ComeBackAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_ComeBackAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b45ebc0

UClass * __cdecl UDS_ComeBackAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComeBackAbilityData",
               &Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ComeBackAbilityData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ComeBackAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ComeBackAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComeBackAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_ComeBackAbilityData @ 14b45f270

void __cdecl UDS_ComeBackAbilityData::StaticRegisterNativesUDS_ComeBackAbilityData(void)

{
  return;
}

// ResetData @ 14ba186e0

void __thiscall UDS_ComeBackAbilityData::ResetData(UDS_ComeBackAbilityData *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

