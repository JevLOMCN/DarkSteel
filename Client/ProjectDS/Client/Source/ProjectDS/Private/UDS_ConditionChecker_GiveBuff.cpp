// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b46bd30

UClass * __cdecl UDS_ConditionChecker_GiveBuff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_GiveBuff",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_GiveBuff,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_GiveBuff>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_GiveBuff>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton;
}

// UDS_ConditionChecker_GiveBuff @ 14b470a10

UDS_ConditionChecker_GiveBuff * __thiscall
UDS_ConditionChecker_GiveBuff::UDS_ConditionChecker_GiveBuff
          (UDS_ConditionChecker_GiveBuff *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_GiveBuff__6B_;
  (this->TargetBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetBuffData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_ConditionChecker_GiveBuff @ 14b470a50

UDS_ConditionChecker_GiveBuff * __thiscall
UDS_ConditionChecker_GiveBuff::UDS_ConditionChecker_GiveBuff
          (UDS_ConditionChecker_GiveBuff *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_GiveBuff__6B_;
  (this->TargetBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetBuffData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_ConditionChecker_GiveBuff @ 14b472420

void __thiscall
UDS_ConditionChecker_GiveBuff::~UDS_ConditionChecker_GiveBuff(UDS_ConditionChecker_GiveBuff *this)

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

// GetPrivateStaticClass @ 14b475590

UClass * __cdecl UDS_ConditionChecker_GiveBuff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_GiveBuff",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_GiveBuff,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_GiveBuff>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_GiveBuff>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_GiveBuff.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_GiveBuff @ 14b476ce0

void __cdecl UDS_ConditionChecker_GiveBuff::StaticRegisterNativesUDS_ConditionChecker_GiveBuff(void)

{
  return;
}

// BindBuffEvent @ 14c06c300

void __thiscall
UDS_ConditionChecker_GiveBuff::BindBuffEvent
          (UDS_ConditionChecker_GiveBuff *this,
          TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ConditionChecker_GiveBuff>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[6].field_0x8,(UDS_ConditionChecker_GiveBuff *)(local_res10 + 1),
               (pmf_dcacf96e)this);
  }
  return;
}

// HasBuffID @ 14c08a4f0

bool __thiscall
UDS_ConditionChecker_GiveBuff::HasBuffID
          (UDS_ConditionChecker_GiveBuff *this,
          TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1,int param_2)

{
  bool bVar1;
  UDS_CharBuffData *this_00;
  FWeakObjectPtr local_res10;
  int local_res18 [4];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res10);
    bVar1 = UDS_CharBuffData::HasBuffInfo(this_00,local_res18);
    return bVar1;
  }
  return false;
}

// OnChangedBuffList @ 14c092460

void __thiscall
UDS_ConditionChecker_GiveBuff::OnChangedBuffList
          (UDS_ConditionChecker_GiveBuff *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnCheckCondition @ 14c092bf0

bool __thiscall UDS_ConditionChecker_GiveBuff::OnCheckCondition(UDS_ConditionChecker_GiveBuff *this)

{
  bool bVar1;
  UDS_CharBuffData *this_00;
  int local_res8 [2];
  FWeakObjectPtr local_res10 [3];
  
  local_res8[0] = (int)this->_padding_;
  local_res10[0] = (this->TargetBuffData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_CharBuffData::HasBuffInfo(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// OnInit @ 14c095c80

void __thiscall UDS_ConditionChecker_GiveBuff::OnInit(UDS_ConditionChecker_GiveBuff *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return;
}

// OnUnInit @ 14c09c340

void __thiscall UDS_ConditionChecker_GiveBuff::OnUnInit(UDS_ConditionChecker_GiveBuff *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (this->TargetBuffData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  (this->TargetBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnUpdateTargetData @ 14c09d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_GiveBuff::OnUpdateTargetData
          (UDS_ConditionChecker_GiveBuff *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_DataBase *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  undefined1 local_140 [264];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158 = (this->TargetBuffData).WeakPtr;
  local_150 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_158);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_150);
    UDS_DataBase::GetDataContainerKey(this_00);
    UDS_CharBuffData::GetData((ulong64)&local_158);
    bVar1 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar1) {
      (this->TargetBuffData).WeakPtr = local_158;
      local_148 = local_158;
      bVar1 = FWeakObjectPtr::IsValid(&local_148);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_148);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ConditionChecker_GiveBuff>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar2[6].field_0x8,(UDS_ConditionChecker_GiveBuff *)local_140,
                   (pmf_dcacf96e)this);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_140 + 8),
                   "UDS_ConditionChecker_GiveBuff::UpdateBuffData",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x1b4,L"buffData is invalid");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  else {
    (this->TargetBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// UnBindBuffEvent @ 14c0ad840

void __thiscall
UDS_ConditionChecker_GiveBuff::UnBindBuffEvent
          (UDS_ConditionChecker_GiveBuff *this,
          TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  return;
}

// UpdateBuffData @ 14c0aeac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_GiveBuff::UpdateBuffData
          (UDS_ConditionChecker_GiveBuff *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_DataBase *this_00;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158 = param_2->WeakPtr;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_158);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
    UDS_DataBase::GetDataContainerKey(this_00);
    UDS_CharBuffData::GetData((ulong64)&local_158);
    bVar1 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar1) {
      param_2->WeakPtr = local_158;
      local_150 = local_158;
      bVar1 = FWeakObjectPtr::IsValid(&local_150);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_150);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ConditionChecker_GiveBuff>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar2[6].field_0x8,(UDS_ConditionChecker_GiveBuff *)local_148,
                   (pmf_dcacf96e)this);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                   "UDS_ConditionChecker_GiveBuff::UpdateBuffData",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x1b4,L"buffData is invalid");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  else {
    param_2->WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

