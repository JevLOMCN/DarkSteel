// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bd240

UClass * __cdecl UDS_InteractionAbilityData_NPCLingTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCLingTalk",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCLingTalk,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCLingTalk>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCLingTalk>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton;
}

// UDS_InteractionAbilityData_NPCLingTalk @ 14b4c09d0

UDS_InteractionAbilityData_NPCLingTalk * __thiscall
UDS_InteractionAbilityData_NPCLingTalk::UDS_InteractionAbilityData_NPCLingTalk
          (UDS_InteractionAbilityData_NPCLingTalk *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCLingTalk__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->SelectedCampSeatInfo).Index = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Y = (double)uVar1;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  return this;
}

// UDS_InteractionAbilityData_NPCLingTalk @ 14b4c0a30

UDS_InteractionAbilityData_NPCLingTalk * __thiscall
UDS_InteractionAbilityData_NPCLingTalk::UDS_InteractionAbilityData_NPCLingTalk
          (UDS_InteractionAbilityData_NPCLingTalk *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCLingTalk__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->SelectedCampSeatInfo).Index = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Y = (double)uVar1;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  return this;
}

// ~UDS_InteractionAbilityData_NPCLingTalk @ 14b4c2160

void __thiscall
UDS_InteractionAbilityData_NPCLingTalk::~UDS_InteractionAbilityData_NPCLingTalk
          (UDS_InteractionAbilityData_NPCLingTalk *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4120

UClass * __cdecl UDS_InteractionAbilityData_NPCLingTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCLingTalk",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCLingTalk,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCLingTalk>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCLingTalk>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCLingTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPCLingTalk @ 14b4c55c0

void __cdecl
UDS_InteractionAbilityData_NPCLingTalk::StaticRegisterNativesUDS_InteractionAbilityData_NPCLingTalk
          (void)

{
  return;
}

// ResetData @ 14ba18980

void __thiscall
UDS_InteractionAbilityData_NPCLingTalk::ResetData(UDS_InteractionAbilityData_NPCLingTalk *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
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

