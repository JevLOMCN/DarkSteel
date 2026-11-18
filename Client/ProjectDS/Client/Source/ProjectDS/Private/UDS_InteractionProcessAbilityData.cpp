// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4c8db0

UClass * __cdecl UDS_InteractionProcessAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionProcessAbilityData",
               &Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_InteractionProcessAbilityData,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionProcessAbilityData>,
               InternalVTableHelperCtorCaller<UDS_InteractionProcessAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton;
}

// UDS_InteractionProcessAbilityData @ 14b4cb9d0

UDS_InteractionProcessAbilityData * __thiscall
UDS_InteractionProcessAbilityData::UDS_InteractionProcessAbilityData
          (UDS_InteractionProcessAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionProcessAbilityData__6B_;
  this->RequestedTargetEntityID = 0;
  this->ActivatedTargetEntityID = 0;
  this->InteractionID = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  this->InteractionRange = 0.0;
  this->ArrivedDist = 0.0;
  (this->DestRotator).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).Index = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Z = (double)uVar1;
  this->TamingStartIndex = 0;
  return this;
}

// UDS_InteractionProcessAbilityData @ 14b4cba90

UDS_InteractionProcessAbilityData * __thiscall
UDS_InteractionProcessAbilityData::UDS_InteractionProcessAbilityData
          (UDS_InteractionProcessAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionProcessAbilityData__6B_;
  this->RequestedTargetEntityID = 0;
  this->ActivatedTargetEntityID = 0;
  this->InteractionID = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  this->InteractionRange = 0.0;
  this->ArrivedDist = 0.0;
  (this->DestRotator).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).Index = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Z = (double)uVar1;
  this->TamingStartIndex = 0;
  return this;
}

// ~UDS_InteractionProcessAbilityData @ 14b4cc1a0

void __thiscall
UDS_InteractionProcessAbilityData::~UDS_InteractionProcessAbilityData
          (UDS_InteractionProcessAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionProcessAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd320

UClass * __cdecl UDS_InteractionProcessAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionProcessAbilityData",
               &Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_InteractionProcessAbilityData,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionProcessAbilityData>,
               InternalVTableHelperCtorCaller<UDS_InteractionProcessAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionProcessAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionProcessAbilityData @ 14b4cdc40

void __cdecl
UDS_InteractionProcessAbilityData::StaticRegisterNativesUDS_InteractionProcessAbilityData(void)

{
  return;
}

// ResetData @ 14ba18a80

void __thiscall
UDS_InteractionProcessAbilityData::ResetData(UDS_InteractionProcessAbilityData *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  uint uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  this->RequestedTargetEntityID = 0;
  this->ActivatedTargetEntityID = 0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestRotator).Yaw = dVar3;
  (this->DestRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotateSpeed = 0.0;
  this->InteractionRange = 0.0;
  this->ArrivedDist = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = (double)uVar1;
  (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uStack_24 = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  *(ulonglong *)&this->SelectedCampSeatInfo = (ulonglong)uStack_34 << 0x20;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X = (double)uVar1;
  *(undefined4 *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 8) = uStack_28;
  *(undefined4 *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0xc) = uStack_24;
  *(int *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0x10) = (int)uVar2;
  *(int *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar2 >> 0x20);
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  return;
}

