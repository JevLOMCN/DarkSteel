// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b46c940

UClass * __cdecl UDS_ConditionChecker_Questing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Questing",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Questing,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Questing>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Questing>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton;
}

// UDS_ConditionChecker_Questing @ 14b470c70

UDS_ConditionChecker_Questing * __thiscall
UDS_ConditionChecker_Questing::UDS_ConditionChecker_Questing
          (UDS_ConditionChecker_Questing *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Questing__6B_;
  (this->TargetQuestData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetQuestData).WeakPtr,(FObjectPtr)local_res8);
  this->QuestState = -1;
  return this;
}

// UDS_ConditionChecker_Questing @ 14b470cc0

UDS_ConditionChecker_Questing * __thiscall
UDS_ConditionChecker_Questing::UDS_ConditionChecker_Questing
          (UDS_ConditionChecker_Questing *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Questing__6B_;
  (this->TargetQuestData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetQuestData).WeakPtr,(FObjectPtr)local_res8);
  this->QuestState = -1;
  return this;
}

// ~UDS_ConditionChecker_Questing @ 14b472660

void __thiscall
UDS_ConditionChecker_Questing::~UDS_ConditionChecker_Questing(UDS_ConditionChecker_Questing *this)

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

// GetPrivateStaticClass @ 14b475a10

UClass * __cdecl UDS_ConditionChecker_Questing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Questing",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Questing,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Questing>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Questing>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Questing.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_Questing @ 14b476d70

void __cdecl UDS_ConditionChecker_Questing::StaticRegisterNativesUDS_ConditionChecker_Questing(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ConditionChecker_Questing_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedQuestState @ 14b479190

void __cdecl
UDS_ConditionChecker_Questing::execOnChangedQuestState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedQuestState((UDS_ConditionChecker_Questing *)param_1,local_res10[0]);
  return;
}

// BindQuestStateEvent @ 14c06d4b0

void __thiscall
UDS_ConditionChecker_Questing::BindQuestStateEvent
          (UDS_ConditionChecker_Questing *this,TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_QuestData *pUVar2;
  FName *pFVar3;
  FWeakObjectPtr local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = (FName)param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_res18);
  if (bVar1) {
    pUVar2 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_res18);
    UDS_QuestData::UnbindQuestStateChangedEvent(pUVar2,(UObject *)this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res10);
    pFVar3 = ::FName::FName(local_res18,"OnChangedQuestState");
    UDS_QuestData::BindQuestStateChangedEvent(pUVar2,(UObject *)this,*pFVar3);
  }
  return;
}

// OnChangedQuestState @ 14c092a10

void __thiscall
UDS_ConditionChecker_Questing::OnChangedQuestState(UDS_ConditionChecker_Questing *this,int param_1)

{
  bool bVar1;
  
  this->QuestState = param_1;
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnCheckCondition @ 14c092cd0

bool __thiscall UDS_ConditionChecker_Questing::OnCheckCondition(UDS_ConditionChecker_Questing *this)

{
  return this->QuestState == 0;
}

// OnInit @ 14c095e60

void __thiscall UDS_ConditionChecker_Questing::OnInit(UDS_ConditionChecker_Questing *this)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 9;
  bVar2 = (bool)(**(code **)(lVar1 + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar2);
  return;
}

// OnUnInit @ 14c09c490

void __thiscall UDS_ConditionChecker_Questing::OnUnInit(UDS_ConditionChecker_Questing *this)

{
  bool bVar1;
  UDS_QuestData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (this->TargetQuestData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this_00 = (UDS_QuestData *)FWeakObjectPtr::Get(local_res8);
    UDS_QuestData::UnbindQuestStateChangedEvent(this_00,(UObject *)this);
  }
  (this->TargetQuestData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnUpdateTargetData @ 14c09dc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionChecker_Questing::OnUpdateTargetData
          (UDS_ConditionChecker_Questing *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_QuestData *pUVar3;
  FName *pFVar4;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_188 [32];
  FName local_158;
  FName local_150;
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    local_158 = *(FName *)&(this->TargetQuestData).WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_158);
    if (bVar1) {
      pUVar3 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_158);
      UDS_QuestData::UnbindQuestStateChangedEvent(pUVar3,(UObject *)this);
    }
    UDS_QuestData::GetData
              ((ulong64)&local_150,UDS_PlayerData::MainPlayerEntityID,SUB41((int)this->_padding_,0))
    ;
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_150);
    if (bVar1) {
      (this->TargetQuestData).WeakPtr = (FWeakObjectPtr)local_150;
      local_148[0] = local_150;
      local_158 = local_150;
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_158);
      if (bVar1) {
        pUVar3 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_158);
        UDS_QuestData::UnbindQuestStateChangedEvent(pUVar3,(UObject *)this);
      }
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_148);
      if (bVar1) {
        pUVar3 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_148);
        pFVar4 = ::FName::FName(&local_158,"OnChangedQuestState");
        UDS_QuestData::BindQuestStateChangedEvent(pUVar3,(UObject *)this,*pFVar4);
      }
    }
    else {
      this->QuestState = -1;
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
      UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
    }
    bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ConditionChecker_Questing::OnUpdateTargetData",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x34b,L"InTargetData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnBindQuestStateEvent @ 14c0ad940

void __thiscall
UDS_ConditionChecker_Questing::UnBindQuestStateEvent
          (UDS_ConditionChecker_Questing *this,TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_QuestData *this_00;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_QuestData *)FWeakObjectPtr::Get(local_res10);
    UDS_QuestData::UnbindQuestStateChangedEvent(this_00,(UObject *)this);
  }
  return;
}

// UpdateQuestData @ 14c0afc50

void __thiscall
UDS_ConditionChecker_Questing::UpdateQuestData
          (UDS_ConditionChecker_Questing *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UDS_QuestData *pUVar2;
  FName *pFVar3;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  
  local_res8 = *(FName *)&param_2->WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res8);
  if (bVar1) {
    pUVar2 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
    UDS_QuestData::UnbindQuestStateChangedEvent(pUVar2,(UObject *)this);
  }
  UDS_QuestData::GetData
            ((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,SUB41((int)this->_padding_,0))
  ;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res18);
  if (!bVar1) {
    this->QuestState = -1;
    bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
    UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
    return;
  }
  param_2->WeakPtr = (FWeakObjectPtr)local_res18;
  local_res20 = local_res18;
  local_res8 = local_res18;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res8);
  if (bVar1) {
    pUVar2 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
    UDS_QuestData::UnbindQuestStateChangedEvent(pUVar2,(UObject *)this);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res20);
  if (bVar1) {
    pUVar2 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res20);
    pFVar3 = ::FName::FName(&local_res8,"OnChangedQuestState");
    UDS_QuestData::BindQuestStateChangedEvent(pUVar2,(UObject *)this,*pFVar3);
  }
  return;
}

