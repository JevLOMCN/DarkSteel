// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b46c000

UClass * __cdecl UDS_ConditionChecker_Struck::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Struck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Struck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Struck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Struck>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton;
}

// UDS_ConditionChecker_Struck @ 14b470e10

UDS_ConditionChecker_Struck * __thiscall
UDS_ConditionChecker_Struck::UDS_ConditionChecker_Struck
          (UDS_ConditionChecker_Struck *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->MainPlayerEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Struck__6B_;
  return this;
}

// UDS_ConditionChecker_Struck @ 14b470e40

UDS_ConditionChecker_Struck * __thiscall
UDS_ConditionChecker_Struck::UDS_ConditionChecker_Struck
          (UDS_ConditionChecker_Struck *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->MainPlayerEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Struck__6B_;
  return this;
}

// ~UDS_ConditionChecker_Struck @ 14b472780

void __thiscall
UDS_ConditionChecker_Struck::~UDS_ConditionChecker_Struck(UDS_ConditionChecker_Struck *this)

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

// CheckStruckType @ 14b4747f0

bool __thiscall UDS_ConditionChecker_Struck::CheckStruckType(UDS_ConditionChecker_Struck *this)

{
  return false;
}

// GetPrivateStaticClass @ 14b475c50

UClass * __cdecl UDS_ConditionChecker_Struck::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Struck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Struck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Struck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Struck>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Struck.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_Struck @ 14b476e00

void __cdecl UDS_ConditionChecker_Struck::StaticRegisterNativesUDS_ConditionChecker_Struck(void)

{
  return;
}

// CheckNearOrFarStruck @ 14c06ec30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_ConditionChecker_Struck::CheckNearOrFarStruck
          (UDS_ConditionChecker_Struck *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *param_1,DamageEvent *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  char cVar3;
  UDS_DataBase *pUVar4;
  ulong64 uVar5;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  float local_res10 [4];
  ulong64 local_res20;
  ulong64 local_28 [2];
  
  bVar2 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar2) {
    pUVar4 = (UDS_DataBase *)FWeakObjectPtr::Get(&param_1->WeakPtr);
    uVar1 = (param_2->_impl_).defender_entity_id_;
    uVar5 = UDS_DataBase::GetEntityID(pUVar4);
    if (uVar5 == uVar1) {
      local_res20 = (param_2->_impl_).attacker_entity_id_;
      pFVar6 = FDS_EntityBase::GetEntityBase(&local_res20);
      pUVar4 = (UDS_DataBase *)FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_28[0] = UDS_DataBase::GetEntityID(pUVar4);
      pFVar7 = FDS_EntityBase::GetEntityBase(local_28);
      if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar7 != (FDS_EntityBase *)0x0)) {
        local_res10[0] = (float)(int)this->_padding_;
        bVar2 = DS_Util::IsCloseDist(pFVar6,pFVar7,local_res10);
        cVar3 = (**(code **)(this->_padding_ + 0x2d0))(this);
        return bVar2 == (bool)cVar3;
      }
    }
  }
  return false;
}

// OnGroupDamageEventCallback @ 14c095770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_Struck::OnGroupDamageEventCallback
          (UDS_ConditionChecker_Struck *this,GroupDamageEventResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulong64 uVar4;
  RepeatedPtrField<server_msg::DamageEvent> *pRVar5;
  bool bVar6;
  char cVar7;
  UDS_DataBase *pUVar8;
  ulong64 uVar9;
  FDS_EntityBase *pFVar10;
  FDS_EntityBase *pFVar11;
  Impl_ *pIVar12;
  float local_res10 [2];
  ulong64 local_res18;
  ulong64 local_res20;
  
  uVar2 = *(ulonglong *)&(param_1->_impl_).damage_events_;
  if ((uVar2 & 1) == 0) {
    pIVar12 = &param_1->_impl_;
  }
  else {
    pIVar12 = (Impl_ *)(uVar2 + 7);
  }
  iVar1 = *(int *)&(param_1->_impl_).damage_events_.field_0x8;
  pRVar5 = &pIVar12->damage_events_;
  do {
    if (pIVar12 == (Impl_ *)(&pRVar5->field_0x0 + (longlong)iVar1 * 8)) {
      return;
    }
    lVar3 = *(longlong *)&pIVar12->damage_events_;
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar6) {
      pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar4 = *(ulong64 *)(lVar3 + 0x30);
      uVar9 = UDS_DataBase::GetEntityID(pUVar8);
      if (uVar9 == uVar4) {
        local_res18 = *(ulong64 *)(lVar3 + 0x28);
        pFVar10 = FDS_EntityBase::GetEntityBase(&local_res18);
        pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res20 = UDS_DataBase::GetEntityID(pUVar8);
        pFVar11 = FDS_EntityBase::GetEntityBase(&local_res20);
        if ((pFVar10 != (FDS_EntityBase *)0x0) && (pFVar11 != (FDS_EntityBase *)0x0)) {
          local_res10[0] = (float)(int)this->_padding_;
          bVar6 = DS_Util::IsCloseDist(pFVar10,pFVar11,local_res10);
          cVar7 = (**(code **)(this->_padding_ + 0x2d0))(this);
          if (bVar6 == (bool)cVar7) {
            UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,true);
            UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,false);
            return;
          }
        }
      }
    }
    pIVar12 = (Impl_ *)&(pIVar12->damage_events_).field_0x8;
  } while( true );
}

// OnInit @ 14c095ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ConditionChecker_Struck::OnInit(UDS_ConditionChecker_Struck *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_DataBase *this_00;
  ulong64 uVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetData((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar2) {
    FWeakObjectPtr::Get(&local_158);
    UDS_CharInfoData::GetData((ulong64)&local_150);
    bVar2 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar2) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_150);
      uVar4 = UDS_DataBase::GetEntityID(this_00);
      this->MainPlayerEntityID = uVar4;
    }
    TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ConditionChecker_Struck>
              ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
                *)&FDS_BattleService::OnGroupDamageEventDelegate,
               (UDS_ConditionChecker_Struck *)local_148,(pmf_1cca72c3)this);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_ConditionChecker_Struck::OnInit",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x1e2,L"mainPlayerData is invalid.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8406762697911173603>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ConditionChecker.cpp"
                       ,0x1e3,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUnInit @ 14c09c580

void __thiscall UDS_ConditionChecker_Struck::OnUnInit(UDS_ConditionChecker_Struck *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnGroupDamageEventDelegate,this);
  return;
}

