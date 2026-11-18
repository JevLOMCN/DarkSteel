// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b535760

UClass * __cdecl UDS_NPCClientControlAbilityData_Falling::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Falling",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Falling,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Falling>
               ,InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Falling>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton;
}

// UDS_NPCClientControlAbilityData_Falling @ 14b538330

UDS_NPCClientControlAbilityData_Falling * __thiscall
UDS_NPCClientControlAbilityData_Falling::UDS_NPCClientControlAbilityData_Falling
          (UDS_NPCClientControlAbilityData_Falling *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Falling__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LandingLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LandingLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LandingLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartDelay = 0.0;
  return this;
}

// UDS_NPCClientControlAbilityData_Falling @ 14b538380

UDS_NPCClientControlAbilityData_Falling * __thiscall
UDS_NPCClientControlAbilityData_Falling::UDS_NPCClientControlAbilityData_Falling
          (UDS_NPCClientControlAbilityData_Falling *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Falling__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LandingLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LandingLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LandingLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartDelay = 0.0;
  return this;
}

// ~UDS_NPCClientControlAbilityData_Falling @ 14b538f20

void __thiscall
UDS_NPCClientControlAbilityData_Falling::~UDS_NPCClientControlAbilityData_Falling
          (UDS_NPCClientControlAbilityData_Falling *this)

{
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Falling__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a210

UClass * __cdecl UDS_NPCClientControlAbilityData_Falling::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Falling",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Falling,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Falling>
               ,InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Falling>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Falling.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCClientControlAbilityData_Falling @ 14b53a960

void __cdecl
UDS_NPCClientControlAbilityData_Falling::
StaticRegisterNativesUDS_NPCClientControlAbilityData_Falling(void)

{
  return;
}

// ResetData @ 14ba68c30

void __thiscall
UDS_NPCClientControlAbilityData_Falling::ResetData(UDS_NPCClientControlAbilityData_Falling *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LandingLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LandingLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LandingLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartDelay = 0.0;
  return;
}

