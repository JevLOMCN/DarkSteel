// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b46b9a0

UClass * __cdecl UDS_ConditionChecker_GiveAbnormal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_GiveAbnormal",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_GiveAbnormal,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_GiveAbnormal>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_GiveAbnormal>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton;
}

// UDS_ConditionChecker_GiveAbnormal @ 14b470990

UDS_ConditionChecker_GiveAbnormal * __thiscall
UDS_ConditionChecker_GiveAbnormal::UDS_ConditionChecker_GiveAbnormal
          (UDS_ConditionChecker_GiveAbnormal *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_GiveAbnormal__6B_;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AbnormalAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_ConditionChecker_GiveAbnormal @ 14b4709d0

UDS_ConditionChecker_GiveAbnormal * __thiscall
UDS_ConditionChecker_GiveAbnormal::UDS_ConditionChecker_GiveAbnormal
          (UDS_ConditionChecker_GiveAbnormal *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_GiveAbnormal__6B_;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AbnormalAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_ConditionChecker_GiveAbnormal @ 14b4723c0

void __thiscall
UDS_ConditionChecker_GiveAbnormal::~UDS_ConditionChecker_GiveAbnormal
          (UDS_ConditionChecker_GiveAbnormal *this)

{
  this->_padding_ = (longlong)&___7UDS_ConditionChecker__6B_;
  UDS_ConditionChecker::UnInit((UDS_ConditionChecker *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4754d0

UClass * __cdecl UDS_ConditionChecker_GiveAbnormal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_GiveAbnormal",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_GiveAbnormal,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_GiveAbnormal>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_GiveAbnormal>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_GiveAbnormal.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_GiveAbnormal @ 14b476cd0

void __cdecl
UDS_ConditionChecker_GiveAbnormal::StaticRegisterNativesUDS_ConditionChecker_GiveAbnormal(void)

{
  return;
}

// BindAbnormalAbilityData @ 14c06c270

void __thiscall
UDS_ConditionChecker_GiveAbnormal::BindAbnormalAbilityData
          (UDS_ConditionChecker_GiveAbnormal *this,
          TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  local_res8 = (this->AbnormalAbilityData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
  }
  (this->AbnormalAbilityData).WeakPtr = param_1.WeakPtr;
  pUVar2 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_ConditionChecker_GiveAbnormal>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
              *)&pUVar2[6].field_0x10,(UDS_ConditionChecker_GiveAbnormal *)&local_res8,
             (pmf_342dda5d)this);
  return;
}

// GetAbnormalAbilityData @ 14c084f80

TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> __thiscall
UDS_ConditionChecker_GiveAbnormal::GetAbnormalAbilityData
          (UDS_ConditionChecker_GiveAbnormal *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  ulong64 local_18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar1) {
    *(undefined8 *)param_1.WeakPtr = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)param_1.WeakPtr;
  }
  local_res20 = CONCAT71(local_res20._1_7_,0x30);
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
  local_18[0] = UDS_DataBase::GetEntityID(this_00);
  UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
            ((ulong64 *)param_1.WeakPtr,(EDS_AbilityTagType *)local_18);
  return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)param_1.WeakPtr;
}

// OnChangedAbnormalInfoEventCallback @ 14c092130

void __thiscall
UDS_ConditionChecker_GiveAbnormal::OnChangedAbnormalInfoEventCallback
          (UDS_ConditionChecker_GiveAbnormal *this,FDS_AbnormalInfo *param_1,bool param_2)

{
  bool bVar1;
  
  if ((uint)param_1->AbnormalType == (uint)this->_padding_) {
    bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
    return;
  }
  return;
}

// OnCheckCondition @ 14c092ba0

bool __thiscall
UDS_ConditionChecker_GiveAbnormal::OnCheckCondition(UDS_ConditionChecker_GiveAbnormal *this)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  EDS_AbnormalType local_res8 [32];
  
  local_res8[0] = (EDS_AbnormalType)this->_padding_;
  bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  bVar1 = UDS_AbnormalAbilityData::HasAbnormalInfo(this_00,local_res8);
  return bVar1;
}

// OnInit @ 14c095c70

void __thiscall UDS_ConditionChecker_GiveAbnormal::OnInit(UDS_ConditionChecker_GiveAbnormal *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return;
}

// OnUnInit @ 14c09c2f0

void __thiscall UDS_ConditionChecker_GiveAbnormal::OnUnInit(UDS_ConditionChecker_GiveAbnormal *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (this->AbnormalAbilityData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
  }
  return;
}

// OnUpdateTargetData @ 14c09d820

void __thiscall
UDS_ConditionChecker_GiveAbnormal::OnUpdateTargetData
          (UDS_ConditionChecker_GiveAbnormal *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UDS_DataBase *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  local_res18 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    local_res8.ObjectIndex._0_1_ = 0x30;
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
    local_res20 = UDS_DataBase::GetEntityID(this_00);
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&local_res20);
  }
  else {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  }
  FVar1 = local_res10;
  local_res8 = (this->AbnormalAbilityData).WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x10,this);
  }
  (this->AbnormalAbilityData).WeakPtr = FVar1;
  pUVar3 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_ConditionChecker_GiveAbnormal>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
              *)&pUVar3[6].field_0x10,(UDS_ConditionChecker_GiveAbnormal *)&local_res8,
             (pmf_342dda5d)this);
  bVar2 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar2);
  return;
}

// UnBindAbnormalAbilityData @ 14c0ad800

void __thiscall
UDS_ConditionChecker_GiveAbnormal::UnBindAbnormalAbilityData
          (UDS_ConditionChecker_GiveAbnormal *this,
          TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x10,this);
  }
  return;
}

