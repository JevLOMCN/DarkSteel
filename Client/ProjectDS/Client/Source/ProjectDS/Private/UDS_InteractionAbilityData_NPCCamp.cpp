// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bcc80

UClass * __cdecl UDS_InteractionAbilityData_NPCCamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCCamp",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCCamp,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCCamp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCCamp>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton;
}

// UDS_InteractionAbilityData_NPCCamp @ 14b4c07f0

UDS_InteractionAbilityData_NPCCamp * __thiscall
UDS_InteractionAbilityData_NPCCamp::UDS_InteractionAbilityData_NPCCamp
          (UDS_InteractionAbilityData_NPCCamp *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCCamp__6B_;
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
  this->bReservedSendCampSeatSitDownRequest = false;
  this->bIsRemovedCamp = false;
  this->bUseChair = false;
  *(undefined8 *)&this->ReceiveCampSeatSitDownResponseDelegate = 0;
  *(undefined8 *)&(this->ReceiveCampSeatSitDownResponseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReceiveCampSeatSitDownResponseDelegate).field_0x10 = 0;
  return this;
}

// UDS_InteractionAbilityData_NPCCamp @ 14b4c0870

UDS_InteractionAbilityData_NPCCamp * __thiscall
UDS_InteractionAbilityData_NPCCamp::UDS_InteractionAbilityData_NPCCamp
          (UDS_InteractionAbilityData_NPCCamp *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCCamp__6B_;
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
  this->bReservedSendCampSeatSitDownRequest = false;
  this->bIsRemovedCamp = false;
  this->bUseChair = false;
  *(undefined8 *)&this->ReceiveCampSeatSitDownResponseDelegate = 0;
  *(undefined8 *)&(this->ReceiveCampSeatSitDownResponseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReceiveCampSeatSitDownResponseDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_InteractionAbilityData_NPCCamp @ 14b4c20b0

void __thiscall
UDS_InteractionAbilityData_NPCCamp::~UDS_InteractionAbilityData_NPCCamp
          (UDS_InteractionAbilityData_NPCCamp *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_NPCCamp__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->ReceiveCampSeatSitDownResponseDelegate);
  pvVar1 = *(void **)&(this->ReceiveCampSeatSitDownResponseDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReceiveCampSeatSitDownResponseDelegate);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3ee0

UClass * __cdecl UDS_InteractionAbilityData_NPCCamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_NPCCamp",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_NPCCamp,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_NPCCamp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_NPCCamp>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_NPCCamp.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_NPCCamp @ 14b4c5590

void __cdecl
UDS_InteractionAbilityData_NPCCamp::StaticRegisterNativesUDS_InteractionAbilityData_NPCCamp(void)

{
  return;
}

// ResetData @ 14ba188d0

void __thiscall
UDS_InteractionAbilityData_NPCCamp::ResetData(UDS_InteractionAbilityData_NPCCamp *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->bReservedSendCampSeatSitDownRequest = false;
  this->bIsRemovedCamp = false;
  uStack_28 = (undefined4)uVar2;
  uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
  this->bUseChair = false;
  *(ulonglong *)&this->SelectedCampSeatInfo = (ulonglong)uStack_34 << 0x20;
  (this->SelectedCampSeatInfo).Position.field0_0x0._s_0.X = (double)uVar1;
  *(undefined4 *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 8) = uStack_28;
  *(undefined4 *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0xc) = uStack_24;
  *(int *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0x10) = (int)uVar3;
  *(int *)((longlong)&(this->SelectedCampSeatInfo).Position.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar3 >> 0x20);
  (this->SelectedCampSeatInfo).OccupantEntityID = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->ReceiveCampSeatSitDownResponseDelegate);
  return;
}

