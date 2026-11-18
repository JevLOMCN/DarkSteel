// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4bc3b0

UClass * __cdecl UDS_InteractionAbilityData_LiftUp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_LiftUp",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_LiftUp,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_LiftUp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_LiftUp>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton;
}

// UDS_InteractionAbilityData_LiftUp @ 14b4c05b0

UDS_InteractionAbilityData_LiftUp * __thiscall
UDS_InteractionAbilityData_LiftUp::UDS_InteractionAbilityData_LiftUp
          (UDS_InteractionAbilityData_LiftUp *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_LiftUp__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->LiftUpEventDelegate = 0;
  *(undefined8 *)&(this->LiftUpEventDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LiftUpEventDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_ThrowReady = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_ThrowReady).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_ThrowReady).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_Throw = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_Throw).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_Throw).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_PutDown = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_PutDown).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_PutDown).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_ThrowCancel = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_ThrowCancel).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_ThrowCancel).field_0x10 = 0;
  *(undefined8 *)&this->RecvThrowStartSkillProcessDelegate = 0;
  *(undefined8 *)&(this->RecvThrowStartSkillProcessDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RecvThrowStartSkillProcessDelegate).field_0x10 = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->LiftUpState = LiftUp_Begin;
  this->bIsTargetAttached = false;
  this->bIsAbleMoveInput = false;
  this->ThrowDistanceMax = 0.0;
  this->ThrowDetachDelay = 0.0;
  this->PutDownDetachDelay = 0.0;
  this->bIsOnThrowProcess = false;
  this->bIsOnPutDownProcess = false;
  return this;
}

// UDS_InteractionAbilityData_LiftUp @ 14b4c06a0

UDS_InteractionAbilityData_LiftUp * __thiscall
UDS_InteractionAbilityData_LiftUp::UDS_InteractionAbilityData_LiftUp
          (UDS_InteractionAbilityData_LiftUp *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_LiftUp__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->LiftUpEventDelegate = 0;
  *(undefined8 *)&(this->LiftUpEventDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LiftUpEventDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_ThrowReady = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_ThrowReady).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_ThrowReady).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_Throw = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_Throw).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_Throw).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_PutDown = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_PutDown).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_PutDown).field_0x10 = 0;
  *(undefined8 *)&this->ExecuteProcessDelegate_ThrowCancel = 0;
  *(undefined8 *)&(this->ExecuteProcessDelegate_ThrowCancel).field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteProcessDelegate_ThrowCancel).field_0x10 = 0;
  *(undefined8 *)&this->RecvThrowStartSkillProcessDelegate = 0;
  *(undefined8 *)&(this->RecvThrowStartSkillProcessDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RecvThrowStartSkillProcessDelegate).field_0x10 = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->LiftUpState = LiftUp_Begin;
  this->bIsTargetAttached = false;
  this->bIsAbleMoveInput = false;
  this->ThrowDistanceMax = 0.0;
  this->ThrowDetachDelay = 0.0;
  this->PutDownDetachDelay = 0.0;
  this->bIsOnThrowProcess = false;
  this->bIsOnPutDownProcess = false;
  return this;
}

// ~UDS_InteractionAbilityData_LiftUp @ 14b4c1f60

void __thiscall
UDS_InteractionAbilityData_LiftUp::~UDS_InteractionAbilityData_LiftUp
          (UDS_InteractionAbilityData_LiftUp *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_LiftUp__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RecvThrowStartSkillProcessDelegate)
  ;
  pvVar1 = *(void **)&(this->RecvThrowStartSkillProcessDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RecvThrowStartSkillProcessDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExecuteProcessDelegate_ThrowCancel)
  ;
  pvVar1 = *(void **)&(this->ExecuteProcessDelegate_ThrowCancel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecuteProcessDelegate_ThrowCancel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExecuteProcessDelegate_PutDown);
  pvVar1 = *(void **)&(this->ExecuteProcessDelegate_PutDown).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecuteProcessDelegate_PutDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExecuteProcessDelegate_Throw);
  pvVar1 = *(void **)&(this->ExecuteProcessDelegate_Throw).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecuteProcessDelegate_Throw);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExecuteProcessDelegate_ThrowReady);
  pvVar1 = *(void **)&(this->ExecuteProcessDelegate_ThrowReady).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecuteProcessDelegate_ThrowReady);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LiftUpEventDelegate);
  pvVar1 = *(void **)&(this->LiftUpEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LiftUpEventDelegate);
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c3d60

UClass * __cdecl UDS_InteractionAbilityData_LiftUp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_LiftUp",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbilityData_LiftUp,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbilityData_LiftUp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_LiftUp>,local_res8,
               UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_LiftUp.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_LiftUp @ 14b4c5570

void __cdecl
UDS_InteractionAbilityData_LiftUp::StaticRegisterNativesUDS_InteractionAbilityData_LiftUp(void)

{
  return;
}

// IsAbleThrow @ 14b9f8f60

bool __thiscall
UDS_InteractionAbilityData_LiftUp::IsAbleThrow(UDS_InteractionAbilityData_LiftUp *this)

{
  if (this->ActionHandlingTable == (FDS_ActionHandlingTableRow *)0x0) {
    return false;
  }
  return 0 < this->ActionHandlingTable->ID_ThrowSkillReady;
}

// ResetData @ 14ba18870

void __thiscall
UDS_InteractionAbilityData_LiftUp::ResetData(UDS_InteractionAbilityData_LiftUp *this)

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
  this->LiftUpState = LiftUp_Begin;
  this->bIsTargetAttached = false;
  this->bIsAbleMoveInput = false;
  this->ThrowDistanceMax = 0.0;
  this->ThrowDetachDelay = 0.0;
  this->PutDownDetachDelay = 0.0;
  this->bIsOnThrowProcess = false;
  this->bIsOnPutDownProcess = false;
  return;
}

// SetLiftUpState @ 14ba1cfe0

void __thiscall
UDS_InteractionAbilityData_LiftUp::SetLiftUpState
          (UDS_InteractionAbilityData_LiftUp *this,EDS_LiftUpState *param_1)

{
  EDS_LiftUpState EVar1;
  
  EVar1 = *param_1;
  this->LiftUpState = EVar1;
  this->bIsTargetAttached = false;
  switch(EVar1) {
  case LiftUp_Attach:
  case LiftUp_Complete:
  case PreThrow_Begin:
  case PreThrow_Complete:
  case PreThrow_End:
  case Throw_Begin:
  case PutDown_Begin:
    this->bIsTargetAttached = true;
  }
  this->bIsAbleMoveInput = EVar1 == LiftUp_Complete;
  return;
}

