// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b535c80

UClass * __cdecl UDS_NPCClientControlAbilityData_Hide::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Hide",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Hide,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Hide>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Hide>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton;
}

// UDS_NPCClientControlAbilityData_Hide @ 14b5383d0

UDS_NPCClientControlAbilityData_Hide * __thiscall
UDS_NPCClientControlAbilityData_Hide::UDS_NPCClientControlAbilityData_Hide
          (UDS_NPCClientControlAbilityData_Hide *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Hide__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveSpeed = 0.0;
  this->StartDelayTime = 0.0;
  this->DisappearDelayTime = 0.0;
  (this->EndLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->MoveAnimType = None;
  return this;
}

// UDS_NPCClientControlAbilityData_Hide @ 14b538440

UDS_NPCClientControlAbilityData_Hide * __thiscall
UDS_NPCClientControlAbilityData_Hide::UDS_NPCClientControlAbilityData_Hide
          (UDS_NPCClientControlAbilityData_Hide *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Hide__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveSpeed = 0.0;
  this->StartDelayTime = 0.0;
  this->DisappearDelayTime = 0.0;
  (this->EndLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->MoveAnimType = None;
  return this;
}

// ~UDS_NPCClientControlAbilityData_Hide @ 14b538f40

void __thiscall
UDS_NPCClientControlAbilityData_Hide::~UDS_NPCClientControlAbilityData_Hide
          (UDS_NPCClientControlAbilityData_Hide *this)

{
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Hide__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a2d0

UClass * __cdecl UDS_NPCClientControlAbilityData_Hide::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Hide",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Hide,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Hide>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Hide>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Hide.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCClientControlAbilityData_Hide @ 14b53a970

void __cdecl
UDS_NPCClientControlAbilityData_Hide::StaticRegisterNativesUDS_NPCClientControlAbilityData_Hide
          (void)

{
  return;
}

// ResetData @ 14ba68c60

void __thiscall
UDS_NPCClientControlAbilityData_Hide::ResetData(UDS_NPCClientControlAbilityData_Hide *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveAnimType = None;
  this->MoveSpeed = 0.0;
  this->StartDelayTime = 0.0;
  this->DisappearDelayTime = 0.0;
  return;
}

