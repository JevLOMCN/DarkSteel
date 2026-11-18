// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bbff0

UClass * __cdecl UDS_InteractionAbilityData_Hold::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_Hold",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_Hold,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_Hold>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_Hold>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton;
}

// UDS_InteractionAbilityData_Hold @ 14b4c04d0

UDS_InteractionAbilityData_Hold * __thiscall
UDS_InteractionAbilityData_Hold::UDS_InteractionAbilityData_Hold
          (UDS_InteractionAbilityData_Hold *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Hold__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->ExecuteProcessDelegate_HoldCancel = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_HoldCancel).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_HoldCancel).field_0x10 = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->ControlRigHandHeightOnHold = 0.0;
  return this;
}

// UDS_InteractionAbilityData_Hold @ 14b4c0540

UDS_InteractionAbilityData_Hold * __thiscall
UDS_InteractionAbilityData_Hold::UDS_InteractionAbilityData_Hold
          (UDS_InteractionAbilityData_Hold *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Hold__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->ExecuteProcessDelegate_HoldCancel = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_HoldCancel).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_HoldCancel).field_0x10 = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->ControlRigHandHeightOnHold = 0.0;
  return this;
}

// ~UDS_InteractionAbilityData_Hold @ 14b4c1ef0

void __thiscall
UDS_InteractionAbilityData_Hold::~UDS_InteractionAbilityData_Hold
          (UDS_InteractionAbilityData_Hold *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Hold__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExecuteProcessDelegate_HoldCancel);
  pvVar1 = *(void **)&(this->ExecuteProcessDelegate_HoldCancel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecuteProcessDelegate_HoldCancel);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3ca0

UClass * __cdecl UDS_InteractionAbilityData_Hold::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_Hold",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_Hold,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_Hold>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_Hold>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_Hold.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_Hold @ 14b4c5560

void __cdecl
UDS_InteractionAbilityData_Hold::StaticRegisterNativesUDS_InteractionAbilityData_Hold(void)

{
  return;
}

// ResetData @ 14ba18830

void __thiscall UDS_InteractionAbilityData_Hold::ResetData(UDS_InteractionAbilityData_Hold *this)

{
  undefined8 uVar1;
  
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->ControlRigHandHeightOnHold = 0.0;
  return;
}

