// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b46cb00

UClass * __cdecl UDS_ConditionChecker_QuestComplete::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_QuestComplete",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_QuestComplete,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_QuestComplete>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_QuestComplete>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton;
}

// UDS_ConditionChecker_QuestComplete @ 14b470c10

UDS_ConditionChecker_QuestComplete * __thiscall
UDS_ConditionChecker_QuestComplete::UDS_ConditionChecker_QuestComplete
          (UDS_ConditionChecker_QuestComplete *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_QuestComplete__6B_;
  return this;
}

// UDS_ConditionChecker_QuestComplete @ 14b470c40

UDS_ConditionChecker_QuestComplete * __thiscall
UDS_ConditionChecker_QuestComplete::UDS_ConditionChecker_QuestComplete
          (UDS_ConditionChecker_QuestComplete *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_QuestComplete__6B_;
  return this;
}

// ~UDS_ConditionChecker_QuestComplete @ 14b472600

void __thiscall
UDS_ConditionChecker_QuestComplete::~UDS_ConditionChecker_QuestComplete
          (UDS_ConditionChecker_QuestComplete *this)

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

// GetPrivateStaticClass @ 14b475950

UClass * __cdecl UDS_ConditionChecker_QuestComplete::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_QuestComplete",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_QuestComplete,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_QuestComplete>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_QuestComplete>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_QuestComplete.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_QuestComplete @ 14b476d60

void __cdecl
UDS_ConditionChecker_QuestComplete::StaticRegisterNativesUDS_ConditionChecker_QuestComplete(void)

{
  return;
}

// BindQuestUpdateEvent @ 14c06d540

void __thiscall
UDS_ConditionChecker_QuestComplete::BindQuestUpdateEvent(UDS_ConditionChecker_QuestComplete *this)

{
  UDS_QuestEvent *pUVar1;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ConditionChecker_QuestComplete>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,
               (UDS_ConditionChecker_QuestComplete *)&stack0x00000010,(pmf_9ca971c7)this);
  }
  return;
}

// OnCheckCondition @ 14c092ca0

bool __thiscall
UDS_ConditionChecker_QuestComplete::OnCheckCondition(UDS_ConditionChecker_QuestComplete *this)

{
  bool bVar1;
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar1 = UDS_QuestManager::IsQuestCompleted(this_00,*(int *)&this->field_0x38);
    return bVar1;
  }
  return false;
}

// OnInit @ 14c095df0

void __thiscall UDS_ConditionChecker_QuestComplete::OnInit(UDS_ConditionChecker_QuestComplete *this)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  *(undefined4 *)&this->field_0x3c = 9;
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ConditionChecker_QuestComplete>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,
               (UDS_ConditionChecker_QuestComplete *)&stack0x00000008,(pmf_9ca971c7)this);
  }
  bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))(this);
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnUnInit @ 14c09c460

void __thiscall
UDS_ConditionChecker_QuestComplete::OnUnInit(UDS_ConditionChecker_QuestComplete *this)

{
  UDS_QuestEvent *pUVar1;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    return;
  }
  return;
}

// OnUpdateQuestData @ 14c09d7e0

void __thiscall
UDS_ConditionChecker_QuestComplete::OnUpdateQuestData
          (UDS_ConditionChecker_QuestComplete *this,int param_1)

{
  bool bVar1;
  
  if (*(int *)&this->field_0x38 == param_1) {
    bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))();
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
    return;
  }
  return;
}

// OnUpdateTargetData @ 14c09db80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_QuestComplete::OnUpdateTargetData
          (UDS_ConditionChecker_QuestComplete *this,
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
                (&local_138,"UDS_ConditionChecker_QuestComplete::OnUpdateTargetData",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x39d,L"InTargetData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnBindQuestUpdateEvent @ 14c0ad980

void __thiscall
UDS_ConditionChecker_QuestComplete::UnBindQuestUpdateEvent(UDS_ConditionChecker_QuestComplete *this)

{
  UDS_QuestEvent *pUVar1;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    return;
  }
  return;
}

