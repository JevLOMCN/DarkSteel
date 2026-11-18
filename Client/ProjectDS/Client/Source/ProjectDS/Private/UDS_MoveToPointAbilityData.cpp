// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4fcc10

UClass * __cdecl UDS_MoveToPointAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToPointAbilityData",
               &Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MoveToPointAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_MoveToPointAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MoveToPointAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton;
}

// UDS_MoveToPointAbilityData @ 14b501520

UDS_MoveToPointAbilityData * __thiscall
UDS_MoveToPointAbilityData::UDS_MoveToPointAbilityData
          (UDS_MoveToPointAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MoveToPointAbilityData__6B_;
  this->MoveToPointProcessType = AddInputVector;
  this->ArrivedDist = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveSpeed = 0.0;
  this->RotateToTargetEntityID = 0;
  (this->Destination).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_MoveToPointAbilityData @ 14b501580

UDS_MoveToPointAbilityData * __thiscall
UDS_MoveToPointAbilityData::UDS_MoveToPointAbilityData
          (UDS_MoveToPointAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MoveToPointAbilityData__6B_;
  this->MoveToPointProcessType = AddInputVector;
  this->ArrivedDist = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveSpeed = 0.0;
  this->RotateToTargetEntityID = 0;
  (this->Destination).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_MoveToPointAbilityData @ 14b5027e0

void __thiscall
UDS_MoveToPointAbilityData::~UDS_MoveToPointAbilityData(UDS_MoveToPointAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_MoveToPointAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b504ae0

UClass * __cdecl UDS_MoveToPointAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToPointAbilityData",
               &Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_MoveToPointAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_MoveToPointAbilityData>,
               InternalVTableHelperCtorCaller<UDS_MoveToPointAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToPointAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_MoveToPointAbilityData @ 14b505b80

void __cdecl UDS_MoveToPointAbilityData::StaticRegisterNativesUDS_MoveToPointAbilityData(void)

{
  return;
}

// ResetData @ 14ba18b60

void __thiscall UDS_MoveToPointAbilityData::ResetData(UDS_MoveToPointAbilityData *this)

{
  undefined8 uVar1;
  
  this->MoveToPointProcessType = AddInputVector;
  this->ArrivedDist = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveSpeed = 0.0;
  this->RotateToTargetEntityID = 0;
  return;
}

