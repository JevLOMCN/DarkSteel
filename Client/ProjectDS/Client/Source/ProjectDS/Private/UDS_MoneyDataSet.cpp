// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b4eeb20

UClass * __cdecl UDS_MoneyDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoneyDataSet",
               &Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MoneyDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MoneyDataSet>,
               InternalVTableHelperCtorCaller<UDS_MoneyDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton;
}

// UDS_MoneyDataSet @ 14b4f1770

UDS_MoneyDataSet * __thiscall
UDS_MoneyDataSet::UDS_MoneyDataSet(UDS_MoneyDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MoneyDataSet__6B_;
  return this;
}

// ~UDS_MoneyDataSet @ 14b4f1ab0

void __thiscall UDS_MoneyDataSet::~UDS_MoneyDataSet(UDS_MoneyDataSet *this)

{
  *(undefined ***)this = &___7UDS_MoneyDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f25f0

UClass * __cdecl UDS_MoneyDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoneyDataSet",
               &Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MoneyDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MoneyDataSet>,
               InternalVTableHelperCtorCaller<UDS_MoneyDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoneyDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_MoneyDataSet @ 14b4f2770

void __cdecl UDS_MoneyDataSet::StaticRegisterNativesUDS_MoneyDataSet(void)

{
  return;
}

// UDS_MoneyDataSet @ 14ba91ad0

UDS_MoneyDataSet * __thiscall
UDS_MoneyDataSet::UDS_MoneyDataSet(UDS_MoneyDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MoneyDataSet__6B_;
  return this;
}

// CheckEnoughMoney @ 14ba967b0

bool __cdecl UDS_MoneyDataSet::CheckEnoughMoney(EDS_MoneyType param_1,long64 param_2)

{
  bool bVar1;
  UDS_MoneyDataSet *this;
  UDS_MoneyData *this_00;
  long64 lVar2;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this = (UDS_MoneyDataSet *)FWeakObjectPtr::Get(&local_res18);
    GetMoneyData(this,(EDS_MoneyType)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_res20);
      lVar2 = UDS_MoneyData::GetTotalQuantity(this_00);
      return param_2 <= lVar2;
    }
  }
  return false;
}

// GetMoneyData @ 14baada90

TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> __thiscall
UDS_MoneyDataSet::GetMoneyData(UDS_MoneyDataSet *this,EDS_MoneyType param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  FObjectPtr_u_0 *this_01;
  char in_R8B;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  this_01 = *(FObjectPtr_u_0 **)&this->field_0x90;
  iVar2 = *(int *)&this->field_0x98;
  pFVar1 = this_01 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x98 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar1) {
      *(undefined8 *)this_00 = 0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
      return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)this_00;
    }
    pUVar5 = (UObject *)0x0;
    if (this_01->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar4);
      if (bVar3) {
        pUVar5 = this_01->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res20), pUVar5[2].field_0x8 == in_R8B))
    break;
    this_01 = this_01 + 1;
  }
  *(FWeakObjectPtr *)this_00 = local_res20;
  return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)this_00;
}

// GetMoneyQuantity @ 14baadc50

long64 __thiscall UDS_MoneyDataSet::GetMoneyQuantity(UDS_MoneyDataSet *this,EDS_MoneyType param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  GetMoneyData(this,(EDS_MoneyType)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  return *(long64 *)&pUVar2[2].field_0x10;
}

// UpdateData @ 14bad6de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MoneyDataSet::UpdateData(UDS_MoneyDataSet *this,DbWorkItem *param_1)

{
  int iVar1;
  bool bVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_MoneyBaseTableRow *pFVar6;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UClass *pUVar7;
  UDS_DataBase *this_01;
  SqlMoneyTableDefaultTypeInternal *pSVar8;
  undefined1 auStackY_1d8 [32];
  uint uVar9;
  FWeakObjectPtr local_198;
  UObject *local_190;
  SqlMoneyTable local_188;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 9) {
    pSVar8 = (SqlMoneyTableDefaultTypeInternal *)(param_1->_impl_).Item_.characterlevel_;
  }
  else {
    pSVar8 = &ds_game::_SqlMoneyTable_default_instance_;
  }
  ds_game::SqlMoneyTable::SqlMoneyTable(&local_188,(Arena *)0x0,&pSVar8->_instance);
  iVar1 = local_188._impl_.money_id_;
  local_188._padding_ = (longlong)&___7SqlMoneyTable_ds_game__6B_;
  if ((char)local_188._impl_.money_id_ == '\0') goto LAB_14bad7119;
  bVar2 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,(longlong)local_188._impl_.money_id_);
  if (bVar2) {
    this_00 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)local_158);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14bad6ff9:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) goto LAB_14bad6ff9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_198.ObjectIndex = 0;
    local_198.ObjectSerialNumber = 0;
    local_190 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_190);
    bVar2 = FWeakObjectPtr::IsValid(&local_198);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_198);
      *(long64 *)&pUVar5[2].field_0x10 = local_188._impl_.quantity_;
      this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_198);
      UDS_DataBase::SetIsDirty(this_01,true);
      goto LAB_14bad7107;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bad7119;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoneyDataSet::UpdateData",0x1c,Yes);
    uVar9 = 0x186;
  }
  else {
    uVar3 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
    UDS_MoneyData::GetData((ulong64)&local_198,uVar3,SUB41(local_188._impl_.money_id_,0));
    bVar2 = FWeakObjectPtr::IsValid(&local_198);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_198);
      (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
      pFVar6 = FDS_MoneyBaseTableRow::Get((ulonglong)(iVar1 & 0xff),true);
      if (pFVar6 == (FDS_MoneyBaseTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_MoneyData::InitMoney",0x18,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x107,L"MoneyBaseTableRow is nullptr. (%d)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        pUVar5[2].field_0x8 = pFVar6->ID;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_198);
      *(long64 *)&pUVar5[2].field_0x10 = local_188._impl_.quantity_;
LAB_14bad7107:
      UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
      goto LAB_14bad7119;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bad7119;
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MoneyDataSet::UpdateData",0x1c,Yes);
    uVar9 = 0x17a;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar9,L"UDS_MoneyData is nullptr. (%d)");
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bad7119:
  ds_game::SqlMoneyTable::~SqlMoneyTable(&local_188);
  return;
}

