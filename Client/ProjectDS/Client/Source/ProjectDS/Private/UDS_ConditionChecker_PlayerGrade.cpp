// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b46cbc0

UClass * __cdecl UDS_ConditionChecker_PlayerGrade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_PlayerGrade",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_PlayerGrade,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_PlayerGrade>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_PlayerGrade>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton;
}

// UDS_ConditionChecker_PlayerGrade @ 14b470bb0

UDS_ConditionChecker_PlayerGrade * __thiscall
UDS_ConditionChecker_PlayerGrade::UDS_ConditionChecker_PlayerGrade
          (UDS_ConditionChecker_PlayerGrade *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_PlayerGrade__6B_;
  return this;
}

// UDS_ConditionChecker_PlayerGrade @ 14b470be0

UDS_ConditionChecker_PlayerGrade * __thiscall
UDS_ConditionChecker_PlayerGrade::UDS_ConditionChecker_PlayerGrade
          (UDS_ConditionChecker_PlayerGrade *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_PlayerGrade__6B_;
  return this;
}

// ~UDS_ConditionChecker_PlayerGrade @ 14b4725a0

void __thiscall
UDS_ConditionChecker_PlayerGrade::~UDS_ConditionChecker_PlayerGrade
          (UDS_ConditionChecker_PlayerGrade *this)

{
  *(undefined ***)this = &___7UDS_ConditionChecker__6B_;
  UDS_ConditionChecker::UnInit((UDS_ConditionChecker *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x50,
             *(int *)&this->field_0x58);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b475890

UClass * __cdecl UDS_ConditionChecker_PlayerGrade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_PlayerGrade",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_PlayerGrade,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_PlayerGrade>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_PlayerGrade>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_PlayerGrade.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_PlayerGrade @ 14b476d50

void __cdecl
UDS_ConditionChecker_PlayerGrade::StaticRegisterNativesUDS_ConditionChecker_PlayerGrade(void)

{
  return;
}

// BindPlayerLevelChangedEvent @ 14c06d440

void __thiscall
UDS_ConditionChecker_PlayerGrade::BindPlayerLevelChangedEvent
          (UDS_ConditionChecker_PlayerGrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ConditionChecker_PlayerGrade>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2[2].field_0x8,(UDS_ConditionChecker_PlayerGrade *)(local_res10 + 1),
               (pmf_a604844c)this);
  }
  return;
}

// OnCheckCondition @ 14c092c50

bool __thiscall
UDS_ConditionChecker_PlayerGrade::OnCheckCondition(UDS_ConditionChecker_PlayerGrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    return *(int *)&pUVar2[6].field_0x10 < *(int *)&this->field_0x38;
  }
  return false;
}

// OnInit @ 14c095d60

void __thiscall UDS_ConditionChecker_PlayerGrade::OnInit(UDS_ConditionChecker_PlayerGrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  *(undefined4 *)&this->field_0x3c = 10;
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ConditionChecker_PlayerGrade>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2[2].field_0x8,(UDS_ConditionChecker_PlayerGrade *)(local_res8 + 1),
               (pmf_a604844c)this);
  }
  bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))(this);
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnUnInit @ 14c09c410

void __thiscall UDS_ConditionChecker_PlayerGrade::OnUnInit(UDS_ConditionChecker_PlayerGrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
  }
  return;
}

// OnUpdatePlayerGradetData @ 14c09d010

void __thiscall
UDS_ConditionChecker_PlayerGrade::OnUpdatePlayerGradetData
          (UDS_ConditionChecker_PlayerGrade *this,int param_1)

{
  bool bVar1;
  undefined4 in_register_00000014;
  
  bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))
                          (this,CONCAT44(in_register_00000014,param_1));
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnUpdateTargetData @ 14c09da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_PlayerGrade::OnUpdateTargetData
          (UDS_ConditionChecker_PlayerGrade *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))(this);
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ConditionChecker_PlayerGrade::OnUpdateTargetData",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x3db,L"InTargetData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnBindPlayerLevelChangedEvent @ 14c0ad8f0

void __thiscall
UDS_ConditionChecker_PlayerGrade::UnBindPlayerLevelChangedEvent
          (UDS_ConditionChecker_PlayerGrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
  }
  return;
}

