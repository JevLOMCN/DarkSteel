// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4ee8c0

UClass * __cdecl UDS_MoneyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoneyData",
               &Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton,
               StaticRegisterNativesUDS_MoneyData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MoneyData>,InternalVTableHelperCtorCaller<UDS_MoneyData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton;
}

// UDS_MoneyData @ 14b4f1730

UDS_MoneyData * __thiscall UDS_MoneyData::UDS_MoneyData(UDS_MoneyData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->MoneyType = None;
  this->_padding_ = (longlong)&___7UDS_MoneyData__6B_;
  this->MoneyQuantity = 0;
  return this;
}

// ~UDS_MoneyData @ 14b4f1a90

void __thiscall UDS_MoneyData::~UDS_MoneyData(UDS_MoneyData *this)

{
  this->_padding_ = (longlong)&___7UDS_MoneyData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f2530

UClass * __cdecl UDS_MoneyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoneyData",
               &Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton,
               StaticRegisterNativesUDS_MoneyData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MoneyData>,InternalVTableHelperCtorCaller<UDS_MoneyData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoneyData.InnerSingleton;
}

// StaticRegisterNativesUDS_MoneyData @ 14b4f2760

void __cdecl UDS_MoneyData::StaticRegisterNativesUDS_MoneyData(void)

{
  return;
}

// UDS_MoneyData @ 14ba91a90

UDS_MoneyData * __thiscall
UDS_MoneyData::UDS_MoneyData(UDS_MoneyData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MoneyData__6B_;
  this->MoneyType = None;
  this->MoneyQuantity = 0;
  return this;
}

// CheckEnoughMoney @ 14ba96790

bool __thiscall UDS_MoneyData::CheckEnoughMoney(UDS_MoneyData *this,long64 param_1)

{
  long64 lVar1;
  
  lVar1 = GetTotalQuantity(this);
  return param_1 <= lVar1;
}

// FindOrAddData @ 14baa1050

TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> __cdecl
UDS_MoneyData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa6f00

TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> __cdecl UDS_MoneyData::GetData(EDS_MoneyType param_1)

{
  FWeakObjectPtr FVar1;
  undefined7 in_register_00000009;
  bool in_DL;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ObjectIndex._0_1_ = param_1;
  GetData(CONCAT71(in_register_00000009,param_1),UDS_PlayerData::MainPlayerEntityID,in_DL);
  return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)FVar1;
}

// GetData @ 14baa6f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> __cdecl
UDS_MoneyData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa71bf;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa6fcb:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa6fcb;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa7095:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa7095;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14baa71c6;
        }
      }
    }
  }
LAB_14baa71bf:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa71c6:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetTotalQuantity @ 14bab0d00

long64 __thiscall UDS_MoneyData::GetTotalQuantity(UDS_MoneyData *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> TVar2;
  UDS_MoneyDataSet *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [24];
  
  if (this->MoneyType == Gold) {
    UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    TVar2 = TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)local_res10);
    this_00 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar2.WeakPtr);
  }
  else {
    if (this->MoneyType != NotTradeGold) goto LAB_14bab0d74;
    UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
    TVar2 = TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)local_res10);
    this_00 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar2.WeakPtr);
  }
  UDS_MoneyDataSet::GetMoneyData(this_00,(EDS_MoneyType)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    return *(longlong *)&pUVar3[2].field_0x10 + this->MoneyQuantity;
  }
LAB_14bab0d74:
  return this->MoneyQuantity;
}

// InitMoney @ 14bab5340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MoneyData::InitMoney(UDS_MoneyData *this,EDS_MoneyType param_1)

{
  FDS_MoneyBaseTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(this->_padding_ + 0x2c8))();
  pFVar1 = FDS_MoneyBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar1 == (FDS_MoneyBaseTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MoneyData::InitMoney",0x18,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x107,L"MoneyBaseTableRow is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->MoneyType = pFVar1->ID;
  }
  return;
}

// ResetData @ 14bac9a50

void __thiscall UDS_MoneyData::ResetData(UDS_MoneyData *this)

{
  this->MoneyType = None;
  this->MoneyQuantity = 0;
  return;
}

