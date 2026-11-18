// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b46cc80

UClass * __cdecl UDS_ConditionChecker_TargetHp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_TargetHp",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_TargetHp,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_TargetHp>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_TargetHp>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton;
}

// UDS_ConditionChecker_TargetHp @ 14b470ed0

UDS_ConditionChecker_TargetHp * __thiscall
UDS_ConditionChecker_TargetHp::UDS_ConditionChecker_TargetHp
          (UDS_ConditionChecker_TargetHp *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TargetHpPersent = 0.0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_TargetHp__6B_;
  return this;
}

// UDS_ConditionChecker_TargetHp @ 14b470f00

UDS_ConditionChecker_TargetHp * __thiscall
UDS_ConditionChecker_TargetHp::UDS_ConditionChecker_TargetHp
          (UDS_ConditionChecker_TargetHp *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TargetHpPersent = 0.0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_TargetHp__6B_;
  return this;
}

// ~UDS_ConditionChecker_TargetHp @ 14b472840

void __thiscall
UDS_ConditionChecker_TargetHp::~UDS_ConditionChecker_TargetHp(UDS_ConditionChecker_TargetHp *this)

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

// GetPrivateStaticClass @ 14b475dd0

UClass * __cdecl UDS_ConditionChecker_TargetHp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_TargetHp",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_TargetHp,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_TargetHp>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_TargetHp>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_TargetHp.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_TargetHp @ 14b476e20

void __cdecl UDS_ConditionChecker_TargetHp::StaticRegisterNativesUDS_ConditionChecker_TargetHp(void)

{
  return;
}

// OnChangedHp @ 14c092600

void __thiscall
UDS_ConditionChecker_TargetHp::OnChangedHp
          (UDS_ConditionChecker_TargetHp *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < param_2) {
    fVar1 = (float)(int)this->_padding_;
    fVar2 = (param_1 / param_2) * __real_42c80000;
    if ((fVar1 < this->TargetHpPersent) && (fVar2 <= fVar1)) {
      UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,true);
      UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,false);
    }
    this->TargetHpPersent = fVar2;
  }
  return;
}

// OnInit @ 14c096050

void __thiscall UDS_ConditionChecker_TargetHp::OnInit(UDS_ConditionChecker_TargetHp *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xb;
  return;
}

// OnUnInit @ 14c09c620

void __thiscall UDS_ConditionChecker_TargetHp::OnUnInit(UDS_ConditionChecker_TargetHp *this)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UDS_CharStatusData *this_01;
  FDS_StatusInfo *pFVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&this->_padding_,(void *)0x0
                    );
  if (!bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_DataBase::GetEntityID(this_00);
    UDS_CharStatusData::GetData((ulong64)&local_res8);
    bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
    ;
    if (!bVar1) {
      this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      pFVar2 = UDS_CharStatusData::GetStatusInfo(this_01,Hp);
      if (pFVar2 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar2->ChangeStatusDelegate,this);
      }
    }
  }
  return;
}

// OnUpdateTargetData @ 14c09e140

void __thiscall
UDS_ConditionChecker_TargetHp::OnUpdateTargetData
          (UDS_ConditionChecker_TargetHp *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UDS_CharStatusData *this_01;
  FDS_StatusInfo *pFVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    UDS_DataBase::GetEntityID(this_00);
    UDS_CharStatusData::GetData((ulong64)local_res18);
    bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_res18,(void *)0x0)
    ;
    if (!bVar1) {
      this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res18);
      pFVar2 = UDS_CharStatusData::GetStatusInfo(this_01,Hp);
      if (pFVar2 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar2->ChangeStatusDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_ConditionChecker_TargetHp>
                  ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                    *)&pFVar2->ChangeStatusDelegate,
                   (UDS_ConditionChecker_TargetHp *)(local_res18 + 1),(pmf_b2b064db)this);
        if (pFVar2->MaxValue != 0.0) {
          this->TargetHpPersent = ((float)pFVar2->CurrentValue / pFVar2->MaxValue) * __real_42c80000
          ;
        }
      }
    }
  }
  return;
}

