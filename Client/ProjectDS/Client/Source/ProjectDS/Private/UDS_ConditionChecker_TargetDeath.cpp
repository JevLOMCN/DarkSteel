// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b46cd40

UClass * __cdecl UDS_ConditionChecker_TargetDeath::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_TargetDeath",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_TargetDeath,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_TargetDeath>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_TargetDeath>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton;
}

// UDS_ConditionChecker_TargetDeath @ 14b470e70

UDS_ConditionChecker_TargetDeath * __thiscall
UDS_ConditionChecker_TargetDeath::UDS_ConditionChecker_TargetDeath
          (UDS_ConditionChecker_TargetDeath *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TargetHpPersent = 0.0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_TargetDeath__6B_;
  return this;
}

// UDS_ConditionChecker_TargetDeath @ 14b470ea0

UDS_ConditionChecker_TargetDeath * __thiscall
UDS_ConditionChecker_TargetDeath::UDS_ConditionChecker_TargetDeath
          (UDS_ConditionChecker_TargetDeath *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TargetHpPersent = 0.0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_TargetDeath__6B_;
  return this;
}

// ~UDS_ConditionChecker_TargetDeath @ 14b4727e0

void __thiscall
UDS_ConditionChecker_TargetDeath::~UDS_ConditionChecker_TargetDeath
          (UDS_ConditionChecker_TargetDeath *this)

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

// GetPrivateStaticClass @ 14b475d10

UClass * __cdecl UDS_ConditionChecker_TargetDeath::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_TargetDeath",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_TargetDeath,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_TargetDeath>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_TargetDeath>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_TargetDeath.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_TargetDeath @ 14b476e10

void __cdecl
UDS_ConditionChecker_TargetDeath::StaticRegisterNativesUDS_ConditionChecker_TargetDeath(void)

{
  return;
}

// OnChangedCharState @ 14c092490

void __thiscall
UDS_ConditionChecker_TargetDeath::OnChangedCharState
          (UDS_ConditionChecker_TargetDeath *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  FDS_CharStateInfo *pFVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(local_res10);
    pFVar2 = UDS_CharStateData::GetCharStateInfo(&param_2->StateTag);
    if (pFVar2->State == Dead) {
      UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,true);
      UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,false);
    }
  }
  return;
}

// OnInit @ 14c096040

void __thiscall UDS_ConditionChecker_TargetDeath::OnInit(UDS_ConditionChecker_TargetDeath *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xc;
  return;
}

// OnUnInit @ 14c09c5a0

void __thiscall UDS_ConditionChecker_TargetDeath::OnUnInit(UDS_ConditionChecker_TargetDeath *this)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&this->_padding_,(void *)0x0
                    );
  if (!bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_DataBase::GetDataContainerKey(this_00);
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
  }
  return;
}

// OnUpdateTargetData @ 14c09e0a0

void __thiscall
UDS_ConditionChecker_TargetDeath::OnUpdateTargetData
          (UDS_ConditionChecker_TargetDeath *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    UDS_DataBase::GetDataContainerKey(this_00);
    UDS_CharStateData::GetData((ulong64)local_res18);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_ConditionChecker_TargetDeath>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar2[7].field_0x20,(UDS_ConditionChecker_TargetDeath *)(local_res18 + 1),
                 (pmf_9a437a22)this);
    }
  }
  return;
}

