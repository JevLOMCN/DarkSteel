// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b509110

UClass * __cdecl UDS_M_GameOptionDataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataBase",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataBase,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataBase>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataBase>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton;
}

// UDS_M_GameOptionDataBase @ 14b510ec0

UDS_M_GameOptionDataBase * __thiscall
UDS_M_GameOptionDataBase::UDS_M_GameOptionDataBase
          (UDS_M_GameOptionDataBase *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_GameOptionDataBase__6B_;
  (this->GameOptionData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GameOptionData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_GameOptionDataBase @ 14b510f10

UDS_M_GameOptionDataBase * __thiscall
UDS_M_GameOptionDataBase::UDS_M_GameOptionDataBase
          (UDS_M_GameOptionDataBase *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_GameOptionDataBase__6B_;
  (this->GameOptionData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GameOptionData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_GameOptionDataBase @ 14b512ea0

void __thiscall UDS_M_GameOptionDataBase::~UDS_M_GameOptionDataBase(UDS_M_GameOptionDataBase *this)

{
  this->_padding_ = (longlong)&___7UDS_M_GameOptionDataBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515a80

UClass * __cdecl UDS_M_GameOptionDataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GameOptionDataBase",
               &Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton,
               StaticRegisterNativesUDS_M_GameOptionDataBase,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GameOptionDataBase>,
               InternalVTableHelperCtorCaller<UDS_M_GameOptionDataBase>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GameOptionDataBase.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GameOptionDataBase @ 14b516c70

void __cdecl UDS_M_GameOptionDataBase::StaticRegisterNativesUDS_M_GameOptionDataBase(void)

{
  return;
}

// ChangedGameOptionData @ 14bd493e0

void __thiscall
UDS_M_GameOptionDataBase::ChangedGameOptionData
          (UDS_M_GameOptionDataBase *this,UDS_GameOptionData *param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// GetGameOptionBaseTable @ 14bd5c740

FDS_GameOptionBaseTableRow * __thiscall
UDS_M_GameOptionDataBase::GetGameOptionBaseTable(UDS_M_GameOptionDataBase *this)

{
  int iVar1;
  FDS_GameOptionBaseTableRow *pFVar2;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionID);
  pFVar2 = FDS_GameOptionBaseTableRow::Get((longlong)iVar1,true);
  return pFVar2;
}

// GetGameOptionID @ 14bd5c770

int __thiscall UDS_M_GameOptionDataBase::GetGameOptionID(UDS_M_GameOptionDataBase *this)

{
  int iVar1;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionID);
  return iVar1;
}

// GetGameOptionKeyValues @ 14bd5c790

TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_GameOptionDataBase::GetGameOptionKeyValues
          (UDS_M_GameOptionDataBase *this,
          TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EDS_GameOptionKeySettingIndex EVar1;
  UDS_GameOptionData *this_00;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (this_00 == (UDS_GameOptionData *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  EVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
  UDS_GameOptionData::GetGameOptionKeyValue(this_00,__return_storage_ptr__,EVar1);
  return __return_storage_ptr__;
}

// GetGameOptionStringValue @ 14bd5c810

FString * __thiscall
UDS_M_GameOptionDataBase::GetGameOptionStringValue
          (UDS_M_GameOptionDataBase *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_GameOptionData *this_00;
  FString *pFVar4;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
    UDS_GameOptionData::GetGameOptionStringValue(this_00,__return_storage_ptr__,iVar3);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647865>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0x47,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGameOptionStringValueByIndex @ 14bd5c8c0

FString * __thiscall
UDS_M_GameOptionDataBase::GetGameOptionStringValueByIndex
          (UDS_M_GameOptionDataBase *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameOptionData *this_00;
  FString *pFVar3;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    UDS_GameOptionData::GetGameOptionStringValue(this_00,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647849>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0x57,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGameOptionValue @ 14bd5c950

int __thiscall UDS_M_GameOptionDataBase::GetGameOptionValue(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_GameOptionData *this_00;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
    iVar3 = UDS_GameOptionData::GetGameOptionValue(this_00,iVar3);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647873>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0x3f,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetGameOptionValueByIndex @ 14bd5c9e0

int __thiscall
UDS_M_GameOptionDataBase::GetGameOptionValueByIndex(UDS_M_GameOptionDataBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_GameOptionData *this_00;
  
  this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    iVar3 = UDS_GameOptionData::GetGameOptionValue(this_00,param_1);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647857>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0x4f,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetGameOptionValueIndex @ 14bd5ca50

int __thiscall UDS_M_GameOptionDataBase::GetGameOptionValueIndex(UDS_M_GameOptionDataBase *this)

{
  int iVar1;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
  return iVar1;
}

// GetOptionValue1 @ 14bd5e710

int __thiscall UDS_M_GameOptionDataBase::GetOptionValue1(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionID);
  pFVar4 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar4 != (FDS_GameOptionBaseTableRow *)0x0) {
    return pFVar4->Value1;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647779>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0x9d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValue2 @ 14bd5e770

int __thiscall UDS_M_GameOptionDataBase::GetOptionValue2(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionID);
  pFVar4 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar4 != (FDS_GameOptionBaseTableRow *)0x0) {
    return pFVar4->Value2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647771>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0xa5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValue3 @ 14bd5e7d0

int __thiscall UDS_M_GameOptionDataBase::GetOptionValue3(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  
  iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                    ((FDS_DataContainer *)&this->_padding_,GameOptionID);
  pFVar4 = FDS_GameOptionBaseTableRow::Get((longlong)iVar3,true);
  if (pFVar4 != (FDS_GameOptionBaseTableRow *)0x0) {
    return pFVar4->Value3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5540522698196647763>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                     ,0xad,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValueText @ 14bd5e840

FDS_Text * __thiscall
UDS_M_GameOptionDataBase::GetOptionValueText
          (UDS_M_GameOptionDataBase *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bd649d0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_GameOptionDataBase::GetViewModelContext
          (UDS_M_GameOptionDataBase *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__,
          EDS_ViewModelTemplateKey param_1,FName param_2,FName param_3)

{
  UDS_ModelBase::GetViewModelContext
            ((UDS_ModelBase *)this,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bd64a00

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_GameOptionDataBase::GetViewModelContext
          (UDS_M_GameOptionDataBase *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnDeInit @ 14bd76860

void __thiscall UDS_M_GameOptionDataBase::OnDeInit(UDS_M_GameOptionDataBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[2].field_0x20,this);
    return;
  }
  return;
}

// OnInit @ 14bd78a80

void __thiscall UDS_M_GameOptionDataBase::OnInit(UDS_M_GameOptionDataBase *this)

{
  return;
}

// PreInitBindViewModel @ 14bd84c60

void __thiscall UDS_M_GameOptionDataBase::PreInitBindViewModel(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_GameOptionType EVar3;
  UObject *pUVar4;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *local_res8 [2];
  
  UDS_ModelBase::PreInitBindViewModel((UDS_ModelBase *)this);
  pUVar4 = FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    this_00 = UDS_GameOptionManager::GetInst();
    if (this_00 != (UDS_GameOptionManager *)0x0) {
      EVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                        ((FDS_DataContainer *)&this->_padding_,GameOptionID);
      local_res8[0] = UDS_GameOptionManager::GetGameOptionData(this_00,EVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8[0] != (UDS_GameOptionData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8[0]);
      }
      FWeakObjectPtr::operator=(&(this->GameOptionData).WeakPtr,(FObjectPtr)local_res8);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647842>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x5e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647891>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x2d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_GameOptionDataBase>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*),FDefaultDelegateUserPolicy>
                *)&pUVar4[2].field_0x20,(UDS_M_GameOptionDataBase *)(local_res8 + 1),
               (pmf_65537b49)this);
  }
  return;
}

// SetGameOptionData @ 14bd88790

void __thiscall UDS_M_GameOptionDataBase::SetGameOptionData(UDS_M_GameOptionDataBase *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_GameOptionType EVar3;
  UObject *pUVar4;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *local_res8;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    this_00 = UDS_GameOptionManager::GetInst();
    if (this_00 != (UDS_GameOptionManager *)0x0) {
      EVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                        ((FDS_DataContainer *)&this->_padding_,GameOptionID);
      local_res8 = UDS_GameOptionManager::GetGameOptionData(this_00,EVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8 != (UDS_GameOptionData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      FWeakObjectPtr::operator=(&(this->GameOptionData).WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647842>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x5e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetGameOptionValue @ 14bd88850

void __thiscall
UDS_M_GameOptionDataBase::SetGameOptionValue(UDS_M_GameOptionDataBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_GameOptionData *this_00;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  iVar3 = GetGameOptionValue(this);
  if (iVar3 != param_1) {
    this_00 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
    if (this_00 == (UDS_GameOptionData *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5540522698196647829>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                         ,0x6b,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar3 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                        ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
      UDS_GameOptionData::SetDataFromVM(this_00,iVar3,param_1);
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      (*pcVar1)(this,local_res18,0);
    }
  }
  return;
}

// SetGameOptionValue @ 14bd88930

void __thiscall
UDS_M_GameOptionDataBase::SetGameOptionValue(UDS_M_GameOptionDataBase *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_GameOptionData *pUVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FString local_38;
  
  pUVar5 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar5 == (UDS_GameOptionData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647865>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x47,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
  }
  else {
    iVar4 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                      ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
    UDS_GameOptionData::GetGameOptionStringValue(pUVar5,&local_38,iVar4);
  }
  iVar4 = (param_1->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar4) {
    if (local_38.Data.ArrayNum < 2) {
      bVar3 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
  }
  else {
    bVar3 = local_38.Data.ArrayNum + iVar4 == 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    pUVar5 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
    if (pUVar5 == (UDS_GameOptionData *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5540522698196647816>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                         ,0x78,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar4 = FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
                        ((FDS_DataContainer *)&this->_padding_,GameOptionValueIndex);
      UDS_GameOptionData::SetDataFromVM(pUVar5,iVar4,param_1);
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      pcVar2 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (*pcVar2)(this,local_res8,0);
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetGameOptionValueByIndex @ 14bd88ad0

void __thiscall
UDS_M_GameOptionDataBase::SetGameOptionValueByIndex
          (UDS_M_GameOptionDataBase *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_GameOptionData *pUVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  pUVar4 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar4 == (UDS_GameOptionData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647857>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x4f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = UDS_GameOptionData::GetGameOptionValue(pUVar4,param_1);
  }
  if (iVar3 != param_2) {
    pUVar4 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
    if (pUVar4 == (UDS_GameOptionData *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5540522698196647803>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                         ,0x85,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UDS_GameOptionData::SetDataFromVM(pUVar4,param_1,param_2);
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      (*pcVar1)(this,local_res8,0);
    }
  }
  return;
}

// SetGameOptionValueByIndex @ 14bd88be0

void __thiscall
UDS_M_GameOptionDataBase::SetGameOptionValueByIndex
          (UDS_M_GameOptionDataBase *this,int param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_GameOptionData *pUVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FString local_38;
  
  pUVar5 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
  if (pUVar5 == (UDS_GameOptionData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5540522698196647849>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                       ,0x57,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
  }
  else {
    UDS_GameOptionData::GetGameOptionStringValue(pUVar5,&local_38,param_1);
  }
  iVar4 = (param_2->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar4) {
    if (local_38.Data.ArrayNum < 2) {
      bVar3 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
  }
  else {
    bVar3 = local_38.Data.ArrayNum + iVar4 == 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    pUVar5 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&(this->GameOptionData).WeakPtr);
    if (pUVar5 == (UDS_GameOptionData *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5540522698196647790>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\GameOption\\DS_M_GameOptionDataBase.cpp"
                         ,0x92,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      UDS_GameOptionData::SetDataFromVM(pUVar5,param_1,param_2);
      UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = 0;
      pcVar2 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      (*pcVar2)(this,local_res8,0);
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

