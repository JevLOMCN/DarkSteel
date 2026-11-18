// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5b7d90

UClass * __cdecl UDS_TicketData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TicketData",
               &Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton,
               StaticRegisterNativesUDS_TicketData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TicketData>,InternalVTableHelperCtorCaller<UDS_TicketData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton;
}

// UDS_TicketData @ 14b5bd4e0

UDS_TicketData * __thiscall
UDS_TicketData::UDS_TicketData(UDS_TicketData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TicketData__6B_;
  this->TicketID = 0;
  this->CurrentTicketCount = 0;
  this->ChargeCount = 0;
  (this->LastUpdateTime).Ticks = 0;
  return this;
}

// ~UDS_TicketData @ 14b5be1a0

void __thiscall UDS_TicketData::~UDS_TicketData(UDS_TicketData *this)

{
  this->_padding_ = (longlong)&___7UDS_TicketData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfae0

UClass * __cdecl UDS_TicketData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TicketData",
               &Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton,
               StaticRegisterNativesUDS_TicketData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TicketData>,InternalVTableHelperCtorCaller<UDS_TicketData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TicketData.InnerSingleton;
}

// StaticRegisterNativesUDS_TicketData @ 14b5c00c0

void __cdecl UDS_TicketData::StaticRegisterNativesUDS_TicketData(void)

{
  return;
}

// UDS_TicketData @ 14ba922b0

UDS_TicketData * __thiscall
UDS_TicketData::UDS_TicketData(UDS_TicketData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TicketData__6B_;
  this->TicketID = 0;
  this->CurrentTicketCount = 0;
  this->ChargeCount = 0;
  (this->LastUpdateTime).Ticks = 0;
  return this;
}

// Created @ 14ba9dc20

void __thiscall UDS_TicketData::Created(UDS_TicketData *this)

{
  return;
}

// Deleted @ 14ba9dda0

void __thiscall UDS_TicketData::Deleted(UDS_TicketData *this)

{
  return;
}

// FindOrAddData @ 14baa10b0

TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> __cdecl
UDS_TicketData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa85a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> __cdecl
UDS_TicketData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_TicketDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa882f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa863b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_TicketData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa863b;
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
    bVar2 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_TicketDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa8705:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_TicketData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa8705;
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
      bVar2 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_TicketData_NoRegister();
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
          goto LAB_14baa8836;
        }
      }
    }
  }
LAB_14baa882f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa8836:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataByCharEntityID @ 14baa8fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> __cdecl
UDS_TicketData::GetDataByCharEntityID(ulong64 *param_1,EDS_TicketType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined8 in_R8;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  undefined8 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  GetData((ulong64)&local_168,*(undefined8 *)param_2,*(bool *)in_R8);
  bVar1 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_TicketData::GetDataByCharEntityID",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0x1c,
                 L"ticketData is nullptr. (PlayerEntityID: %llu, TicketType: %llu)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    *param_1 = 0;
    local_160 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_160);
  }
  else {
    *param_1 = (ulong64)local_168;
  }
  return (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetNextChargeTime @ 14baae4e0

void __thiscall UDS_TicketData::GetNextChargeTime(UDS_TicketData *this,FTimespan *param_1)

{
  FDS_PlayerTicketTableRow *pFVar1;
  FDS_TimeCoolDownTableRow *pFVar2;
  longlong lVar3;
  
  pFVar1 = FDS_PlayerTicketTableRow::GetRef((longlong)this->TicketID,true);
  if (pFVar1->IsMaxResetType == true) {
    param_1->Ticks = 0;
    return;
  }
  pFVar2 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)pFVar1->ChargeTerm,true);
  lVar3 = (longlong)(pFVar2->CoolTime * __real_4b189680);
  param_1->Ticks = lVar3 - (this->LastUpdateTime).Ticks % lVar3;
  return;
}

// GetPlayerMax @ 14baaeb40

int __thiscall UDS_TicketData::GetPlayerMax(UDS_TicketData *this)

{
  FDS_PlayerTicketTableRow *pFVar1;
  
  pFVar1 = FDS_PlayerTicketTableRow::GetRef((longlong)this->TicketID,true);
  return pFVar1->PlayerMax;
}

// GetSystemMax @ 14bab0a80

int __thiscall UDS_TicketData::GetSystemMax(UDS_TicketData *this)

{
  FDS_PlayerTicketTableRow *pFVar1;
  
  pFVar1 = FDS_PlayerTicketTableRow::GetRef((longlong)this->TicketID,true);
  return pFVar1->SystemMax;
}

// GetTicketName @ 14bab0ba0

FString * __thiscall
UDS_TicketData::GetTicketName(UDS_TicketData *this,FString *__return_storage_ptr__)

{
  FDS_PlayerTicketTableRow *pFVar1;
  FString *pFVar2;
  
  pFVar1 = FDS_PlayerTicketTableRow::GetRef((longlong)this->TicketID,true);
  pFVar2 = (FString *)(**(code **)((pFVar1->ID_Name)._padding_ + 8))(&pFVar1->ID_Name);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  return __return_storage_ptr__;
}

// InitByEntityInfo @ 14bab5070

void __thiscall UDS_TicketData::InitByEntityInfo(UDS_TicketData *this)

{
  return;
}

// ResetData @ 14bac9f00

void __thiscall UDS_TicketData::ResetData(UDS_TicketData *this)

{
  this->TicketID = 0;
  this->CurrentTicketCount = 0;
  this->ChargeCount = 0;
  return;
}

// SetData @ 14bacb2f0

void __thiscall
UDS_TicketData::SetData
          (UDS_TicketData *this,int *param_1,int *param_2,int *param_3,FDateTime *param_4)

{
  this->TicketID = *param_1;
  this->CurrentTicketCount = *param_2;
  this->ChargeCount = *param_3;
  (this->LastUpdateTime).Ticks = param_4->Ticks;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

