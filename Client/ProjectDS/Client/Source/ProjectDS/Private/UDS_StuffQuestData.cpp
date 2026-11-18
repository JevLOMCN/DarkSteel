// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b5a5f20

UClass * __cdecl UDS_StuffQuestData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestData",
               &Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton,
               StaticRegisterNativesUDS_StuffQuestData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffQuestData>,
               InternalVTableHelperCtorCaller<UDS_StuffQuestData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton;
}

// UDS_StuffQuestData @ 14b5a9520

UDS_StuffQuestData * __thiscall
UDS_StuffQuestData::UDS_StuffQuestData(UDS_StuffQuestData *this,FVTableHelper *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->IsStuffActive = false;
  this->IsStuffActiveAnimaion = false;
  this->_padding_ = (longlong)&___7UDS_StuffQuestData__6B_;
  return this;
}

// ~UDS_StuffQuestData @ 14b5a99f0

void __thiscall UDS_StuffQuestData::~UDS_StuffQuestData(UDS_StuffQuestData *this)

{
  this->_padding_ = (longlong)&___7UDS_StuffQuestData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aace0

UClass * __cdecl UDS_StuffQuestData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestData",
               &Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton,
               StaticRegisterNativesUDS_StuffQuestData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffQuestData>,
               InternalVTableHelperCtorCaller<UDS_StuffQuestData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffQuestData @ 14b5ab030

void __cdecl UDS_StuffQuestData::StaticRegisterNativesUDS_StuffQuestData(void)

{
  return;
}

// UDS_StuffQuestData @ 14ba92210

UDS_StuffQuestData * __thiscall
UDS_StuffQuestData::UDS_StuffQuestData(UDS_StuffQuestData *this,FObjectInitializer *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->IsStuffActive = false;
  this->IsStuffActiveAnimaion = false;
  this->_padding_ = (longlong)&___7UDS_StuffQuestData__6B_;
  UDS_EntityData::ResetData((UDS_EntityData *)this);
  this->IsStuffActive = false;
  return this;
}

// Created @ 14ba9dbc0

void __thiscall UDS_StuffQuestData::Created(UDS_StuffQuestData *this)

{
  UDS_QuestEvent *pUVar1;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_StuffQuestData>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,(UDS_StuffQuestData *)&stack0x00000010,
               (pmf_8b968865)this);
  }
  return;
}

// Deleted @ 14ba9dd60

void __thiscall UDS_StuffQuestData::Deleted(UDS_StuffQuestData *this)

{
  UDS_QuestEvent *pUVar1;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
    return;
  }
  return;
}

// GetData @ 14baa83a0

TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr> __cdecl
UDS_StuffQuestData::GetData(ulong64 param_1)

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
  
  TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_StuffQuestData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa8443;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa8443:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab4f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffQuestData::InitByEntityInfo(UDS_StuffQuestData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffQuestTableRow *this_00;
  UDS_LogManager *pUVar3;
  UDS_QuestManager *this_01;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_StuffData::InitByEntityInfo((UDS_StuffData *)this);
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffQuestTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffQuestTableRow::IsValid(this_00);
  if (bVar1) {
    this_01 = UDS_QuestManager::GetInst();
    if (this_01 != (UDS_QuestManager *)0x0) {
      bVar1 = UDS_QuestManager::IsQuestCompleted(this_01,this_00->ActivationQuest);
      this->IsStuffActive = bVar1;
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffQuestData::UpdateStuffActive",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,100,L"FDS_StuffQuestTableRow is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// IsInteractionAvailable @ 14bab99a0

bool __thiscall UDS_StuffQuestData::IsInteractionAvailable(UDS_StuffQuestData *this,ulong64 param_1)

{
  return false;
}

// OnQuestComplete @ 14bac0dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffQuestData::OnQuestComplete(UDS_StuffQuestData *this,int param_1)

{
  bool bVar1;
  int iVar2;
  FDS_StuffQuestTableRow *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffQuestTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffQuestTableRow::IsValid(this_00);
  if (bVar1) {
    if (this_00->ActivationQuest == param_1) {
      this->IsStuffActiveAnimaion = true;
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffQuestData::OnQuestComplete",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x4a,L"FDS_StuffQuestTableRow is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// ResetData @ 14bac9ec0

void __thiscall UDS_StuffQuestData::ResetData(UDS_StuffQuestData *this)

{
  UDS_EntityData::ResetData((UDS_EntityData *)this);
  this->IsStuffActive = false;
  return;
}

// SetIsStuffActive @ 14bacd160

void __thiscall UDS_StuffQuestData::SetIsStuffActive(UDS_StuffQuestData *this,bool param_1)

{
  this->IsStuffActive = param_1;
  return;
}

// SetIsStuffActiveAnimaion @ 14bacd170

void __thiscall UDS_StuffQuestData::SetIsStuffActiveAnimaion(UDS_StuffQuestData *this,bool param_1)

{
  this->IsStuffActiveAnimaion = param_1;
  return;
}

// UpdateStuffActive @ 14badac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffQuestData::UpdateStuffActive(UDS_StuffQuestData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffQuestTableRow *this_00;
  UDS_LogManager *pUVar3;
  UDS_QuestManager *this_01;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffQuestTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffQuestTableRow::IsValid(this_00);
  if (bVar1) {
    this_01 = UDS_QuestManager::GetInst();
    if (this_01 != (UDS_QuestManager *)0x0) {
      bVar1 = UDS_QuestManager::IsQuestCompleted(this_01,this_00->ActivationQuest);
      this->IsStuffActive = bVar1;
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffQuestData::UpdateStuffActive",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,100,L"FDS_StuffQuestTableRow is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

