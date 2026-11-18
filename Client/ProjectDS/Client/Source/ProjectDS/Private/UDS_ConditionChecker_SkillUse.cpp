// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b46c470

UClass * __cdecl UDS_ConditionChecker_SkillUse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_SkillUse",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_SkillUse,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_SkillUse>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_SkillUse>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton;
}

// UDS_ConditionChecker_SkillUse @ 14b470d90

UDS_ConditionChecker_SkillUse * __thiscall
UDS_ConditionChecker_SkillUse::UDS_ConditionChecker_SkillUse
          (UDS_ConditionChecker_SkillUse *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_SkillUse__6B_;
  (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetSkillData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_ConditionChecker_SkillUse @ 14b470dd0

UDS_ConditionChecker_SkillUse * __thiscall
UDS_ConditionChecker_SkillUse::UDS_ConditionChecker_SkillUse
          (UDS_ConditionChecker_SkillUse *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_SkillUse__6B_;
  (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetSkillData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_ConditionChecker_SkillUse @ 14b472720

void __thiscall
UDS_ConditionChecker_SkillUse::~UDS_ConditionChecker_SkillUse(UDS_ConditionChecker_SkillUse *this)

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

// GetPrivateStaticClass @ 14b475b90

UClass * __cdecl UDS_ConditionChecker_SkillUse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_SkillUse",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_SkillUse,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_SkillUse>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_SkillUse>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_SkillUse.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_SkillUse @ 14b476df0

void __cdecl UDS_ConditionChecker_SkillUse::StaticRegisterNativesUDS_ConditionChecker_SkillUse(void)

{
  return;
}

// BindSkillActivateEvent @ 14c06d590

void __thiscall
UDS_ConditionChecker_SkillUse::BindSkillActivateEvent
          (UDS_ConditionChecker_SkillUse *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    local_res18[0] = local_res10;
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
    }
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ConditionChecker_SkillUse>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar2[10].field_0x10,(UDS_ConditionChecker_SkillUse *)local_res18,
               (pmf_bd9743e0)this);
  }
  return;
}

// OnActivateSkill @ 14c091e90

void __thiscall
UDS_ConditionChecker_SkillUse::OnActivateSkill
          (UDS_ConditionChecker_SkillUse *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,
          bool param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  }
  return;
}

// OnCheckCondition @ 14c092d20

bool __thiscall UDS_ConditionChecker_SkillUse::OnCheckCondition(UDS_ConditionChecker_SkillUse *this)

{
  bool bVar1;
  UDS_SkillData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TargetSkillData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->TargetSkillData).WeakPtr);
    bVar1 = UDS_SkillData::IsSkillActive(this_00);
    return bVar1;
  }
  return false;
}

// OnInit @ 14c095ea0

void __thiscall UDS_ConditionChecker_SkillUse::OnInit(UDS_ConditionChecker_SkillUse *this)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 5;
  bVar2 = (bool)(**(code **)(lVar1 + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar2);
  return;
}

// OnUnInit @ 14c09c530

void __thiscall UDS_ConditionChecker_SkillUse::OnUnInit(UDS_ConditionChecker_SkillUse *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (this->TargetSkillData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
  }
  (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnUpdateTargetData @ 14c09df70

void __thiscall
UDS_ConditionChecker_SkillUse::OnUpdateTargetData
          (UDS_ConditionChecker_SkillUse *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_DataBase *this_00;
  ulong64 uVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  local_res8 = (this->TargetSkillData).WeakPtr;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x10,this);
  }
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    lVar1 = this->_padding_;
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    uVar4 = UDS_DataBase::GetDataContainerKey(this_00);
    UDS_SkillData::GetData((ulong64)&local_res18,uVar4,SUB41((int)lVar1,0));
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      (this->TargetSkillData).WeakPtr = local_res18;
      local_res8 = local_res18;
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar2) {
        local_res20 = local_res8;
        bVar2 = FWeakObjectPtr::IsValid(&local_res20);
        if (bVar2) {
          pUVar3 = FWeakObjectPtr::Get(&local_res20);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x10,
                     this);
        }
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ConditionChecker_SkillUse>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                    *)&pUVar3[10].field_0x10,(UDS_ConditionChecker_SkillUse *)&local_res20,
                   (pmf_bd9743e0)this);
      }
    }
  }
  else {
    (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  bVar2 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar2);
  return;
}

// UnBindSkillActivateEvent @ 14c0ad9b0

void __thiscall
UDS_ConditionChecker_SkillUse::UnBindSkillActivateEvent
          (UDS_ConditionChecker_SkillUse *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
  }
  return;
}

// UpdateSkillData @ 14c0afd60

void __thiscall
UDS_ConditionChecker_SkillUse::UpdateSkillData
          (UDS_ConditionChecker_SkillUse *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_2)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_DataBase *this_00;
  ulong64 uVar4;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  
  local_res18 = param_2->WeakPtr;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&stack0x00000018);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&stack0x00000018);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x10,this);
  }
  bVar2 = FWeakObjectPtr::IsValid(&stack0x00000010);
  if (!bVar2) {
    param_2->WeakPtr = (FWeakObjectPtr)0x0;
    return;
  }
  lVar1 = this->_padding_;
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&stack0x00000010);
  uVar4 = UDS_DataBase::GetDataContainerKey(this_00);
  UDS_SkillData::GetData((ulong64)&stack0x00000020,uVar4,SUB41((int)lVar1,0));
  bVar2 = FWeakObjectPtr::IsValid(&stack0x00000020);
  if (bVar2) {
    param_2->WeakPtr = local_res20;
    local_res18 = local_res20;
    bVar2 = FWeakObjectPtr::IsValid(&stack0x00000018);
    if (bVar2) {
      local_28 = local_res18;
      bVar2 = FWeakObjectPtr::IsValid(&stack0xffffffffffffffd8);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get(&stack0xffffffffffffffd8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x10,this
                  );
      }
      pUVar3 = FWeakObjectPtr::Get(&stack0x00000018);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_ConditionChecker_SkillUse>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                  *)&pUVar3[10].field_0x10,(UDS_ConditionChecker_SkillUse *)&stack0xffffffffffffffd8
                 ,(pmf_bd9743e0)this);
    }
  }
  return;
}

