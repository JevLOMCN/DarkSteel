// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5359b0

UClass * __cdecl UDS_NPCBattleData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBattleData",
               &Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton,
               StaticRegisterNativesUDS_NPCBattleData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCBattleData>,
               InternalVTableHelperCtorCaller<UDS_NPCBattleData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton;
}

// UDS_NPCBattleData @ 14b5380c0

UDS_NPCBattleData * __thiscall
UDS_NPCBattleData::UDS_NPCBattleData(UDS_NPCBattleData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->NpcBattleType = None;
  this->NpcBattleGrade = None;
  this->FactionType = BattleNpc;
  this->bIsAggressiveNPC = false;
  this->_padding_ = (longlong)&___7UDS_NPCBattleData__6B_;
  this->NpcRotationPlace = -1;
  this->NpcRotationDirection = Forward;
  return this;
}

// ~UDS_NPCBattleData @ 14b538dc0

void __thiscall UDS_NPCBattleData::~UDS_NPCBattleData(UDS_NPCBattleData *this)

{
  this->_padding_ = (longlong)&___7UDS_NPCBattleData__6B_;
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b539f10

UClass * __cdecl UDS_NPCBattleData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCBattleData",
               &Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton,
               StaticRegisterNativesUDS_NPCBattleData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCBattleData>,
               InternalVTableHelperCtorCaller<UDS_NPCBattleData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCBattleData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCBattleData @ 14b53a920

void __cdecl UDS_NPCBattleData::StaticRegisterNativesUDS_NPCBattleData(void)

{
  return;
}

// UDS_NPCBattleData @ 14ba91b00

UDS_NPCBattleData * __thiscall
UDS_NPCBattleData::UDS_NPCBattleData(UDS_NPCBattleData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->NpcBattleType = None;
  this->NpcBattleGrade = None;
  this->FactionType = BattleNpc;
  this->bIsAggressiveNPC = false;
  this->_padding_ = (longlong)&___7UDS_NPCBattleData__6B_;
  this->NpcRotationPlace = -1;
  this->NpcRotationDirection = Forward;
  return this;
}

// Created @ 14ba9d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCBattleData::Created(UDS_NPCBattleData *this)

{
  int iVar1;
  FDS_NpcBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_NpcBattleTableRow *pFVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_NpcBaseTableRow::Get((longlong)iVar1,true);
  if (pFVar2 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBattleData::Created",0x1a,Yes);
    pwVar6 = L"NpcBaseTableRow is nullptr";
    uVar5 = 0x22;
  }
  else {
    this->NpcBattleGrade = pFVar2->NpcBattleGrade;
    pFVar4 = FDS_NpcBattleTableRow::Get((longlong)pFVar2->ID_NpcBattle,true);
    if (pFVar4 != (FDS_NpcBattleTableRow *)0x0) {
      this->NpcBattleType = pFVar4->NpcBattleType;
      this->FactionType = pFVar4->FactionType;
      this->bIsAggressiveNPC = pFVar4->IsSearchingType == false;
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCBattleData::Created",0x1a,Yes);
    pwVar6 = L"NpcBattleTableRow is nullptr";
    uVar5 = 0x2b;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Deleted @ 14ba9dc90

void __thiscall UDS_NPCBattleData::Deleted(UDS_NPCBattleData *this)

{
  return;
}

// GetData @ 14baa7200

TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr> __cdecl UDS_NPCBattleData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCBattleData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa72a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa72a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitBattleNpcData @ 14bab4100

void __thiscall
UDS_NPCBattleData::InitBattleNpcData(UDS_NPCBattleData *this,FDS_NpcBattleTableRow *param_1)

{
  if (param_1 != (FDS_NpcBattleTableRow *)0x0) {
    this->NpcBattleType = param_1->NpcBattleType;
    this->FactionType = param_1->FactionType;
    this->bIsAggressiveNPC = param_1->IsSearchingType == false;
  }
  return;
}

// InitByEntityInfo @ 14bab4130

void __thiscall UDS_NPCBattleData::InitByEntityInfo(UDS_NPCBattleData *this)

{
  return;
}

// ResetData @ 14bac9a70

void __thiscall UDS_NPCBattleData::ResetData(UDS_NPCBattleData *this)

{
  return;
}

