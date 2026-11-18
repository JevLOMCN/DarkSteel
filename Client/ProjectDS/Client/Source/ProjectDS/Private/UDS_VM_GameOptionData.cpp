// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetFloatValue_WrapperImpl @ 14b64fab0

void __cdecl UDS_VM_GameOptionData::SetFloatValue_WrapperImpl(void *param_1,void *param_2)

{
  OnFloatChangedEvent(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b64fac0

UClass * __cdecl UDS_VM_GameOptionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionData",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GameOptionData>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionData>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton;
}

// UDS_VM_GameOptionData @ 14b651800

UDS_VM_GameOptionData * __thiscall
UDS_VM_GameOptionData::UDS_VM_GameOptionData(UDS_VM_GameOptionData *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionData__6B_;
  (this->GameOptionDataModel).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_GameOptionData @ 14b651850

UDS_VM_GameOptionData * __thiscall
UDS_VM_GameOptionData::UDS_VM_GameOptionData
          (UDS_VM_GameOptionData *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionData__6B_;
  (this->GameOptionDataModel).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_GameOptionData @ 14b654960

void __thiscall UDS_VM_GameOptionData::~UDS_VM_GameOptionData(UDS_VM_GameOptionData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionData__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6570b0

IClassDescriptor * __thiscall
UDS_VM_GameOptionData::GetFieldNotificationDescriptor(UDS_VM_GameOptionData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6576d0

UClass * __cdecl UDS_VM_GameOptionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionData",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GameOptionData>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionData>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GameOptionData @ 14b658210

void __cdecl UDS_VM_GameOptionData::StaticRegisterNativesUDS_VM_GameOptionData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_GameOptionData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetOptionValue1 @ 14b659710

void __cdecl
UDS_VM_GameOptionData::execGetOptionValue1(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetOptionValue1((UDS_VM_GameOptionData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetOptionValue2 @ 14b659750

void __cdecl
UDS_VM_GameOptionData::execGetOptionValue2(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetOptionValue2((UDS_VM_GameOptionData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetOptionValue3 @ 14b659790

void __cdecl
UDS_VM_GameOptionData::execGetOptionValue3(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetOptionValue3((UDS_VM_GameOptionData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetOptionValueBool @ 14b6597d0

void __cdecl
UDS_VM_GameOptionData::execGetOptionValueBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetOptionValueBool((UDS_VM_GameOptionData *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetOptionValueCheckBox @ 14b659810

void __cdecl
UDS_VM_GameOptionData::execGetOptionValueCheckBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  ECheckBoxState EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetOptionValueCheckBox((UDS_VM_GameOptionData *)param_1);
  *(ECheckBoxState *)param_3 = EVar1;
  return;
}

// execGetOptionValueFloat @ 14b659850

void __cdecl
UDS_VM_GameOptionData::execGetOptionValueFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetOptionValueFloat((UDS_VM_GameOptionData *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetOptionValueFloatNormalized @ 14b659890

void __cdecl
UDS_VM_GameOptionData::execGetOptionValueFloatNormalized
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetOptionValueFloatNormalized((UDS_VM_GameOptionData *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetOptionValueInt @ 14b6598d0

void __cdecl
UDS_VM_GameOptionData::execGetOptionValueInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetOptionValueInt((UDS_VM_GameOptionData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetStepSize @ 14b659910

void __cdecl UDS_VM_GameOptionData::execGetStepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetStepSize((UDS_VM_GameOptionData *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execOptionValueText @ 14b659a20

void __cdecl
UDS_VM_GameOptionData::execOptionValueText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  FDS_Text *pFVar4;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = OptionValueText((UDS_VM_GameOptionData *)param_1,&local_58);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x30);
  pFVar2 = &pFVar4->UniqueString;
  *(EDS_StringTableType *)param_3 = pFVar4->StringTableType;
  *(long64 *)((longlong)param_3 + 8) = pFVar4->StringTableID;
  *(FName *)((longlong)param_3 + 0x10) = pFVar4->StringEnumTableNameID;
  *(long64 *)((longlong)param_3 + 0x18) = (pFVar4->DateTime).Ticks;
  *(long64 *)((longlong)param_3 + 0x20) = (pFVar4->TimeSpan).Ticks;
  *(EDS_TimeExpression *)((longlong)param_3 + 0x28) = pFVar4->TimeExpressionType;
  *(bool *)((longlong)param_3 + 0x2c) = pFVar4->IsExpression;
  if ((FString *)puVar1 != pFVar2) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x38) = (pFVar4->UniqueString).Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x3c) = (pFVar4->UniqueString).Data.ArrayMax;
    (pFVar4->UniqueString).Data.ArrayNum = 0;
    (pFVar4->UniqueString).Data.ArrayMax = 0;
  }
  pTVar3 = &pFVar4->FormatArgs;
  puVar1 = (undefined8 *)((longlong)param_3 + 0x40);
  if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)puVar1 != pTVar3) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)*puVar1,*(int *)((longlong)param_3 + 0x48));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x48) = (pFVar4->FormatArgs).ArrayNum;
    *(int *)((longlong)param_3 + 0x4c) = (pFVar4->FormatArgs).ArrayMax;
    (pFVar4->FormatArgs).ArrayNum = 0;
    (pFVar4->FormatArgs).ArrayMax = 0;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// BroadCastFieldChanged @ 14be13bf0

void __thiscall UDS_VM_GameOptionData::BroadCastFieldChanged(UDS_VM_GameOptionData *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueInt.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueInt.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueFloat.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueFloat.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueCheckBox.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueCheckBox.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueBool.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueBool.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// GetGameOptionKeyValues @ 14be20ee0

TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_VM_GameOptionData::GetGameOptionKeyValues
          (UDS_VM_GameOptionData *this,
          TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *pTVar3;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    UDS_M_GameOptionDataBase::GetGameOptionKeyValues(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2344815898939883376>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                     ,0x90,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGameOptionValue @ 14be20f70

int __thiscall UDS_VM_GameOptionData::GetGameOptionValue(UDS_VM_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar3 = UDS_M_GameOptionDataBase::GetGameOptionValue(this_00);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2344815898939883383>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                     ,0x89,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValue1 @ 14be214d0

int __thiscall UDS_VM_GameOptionData::GetOptionValue1(UDS_VM_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar3 = UDS_M_GameOptionDataBase::GetOptionValue1(this_00);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2344815898939883424>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                     ,0x60,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValue2 @ 14be21540

int __thiscall UDS_VM_GameOptionData::GetOptionValue2(UDS_VM_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar3 = UDS_M_GameOptionDataBase::GetOptionValue2(this_00);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2344815898939883417>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                     ,0x67,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValue3 @ 14be215b0

int __thiscall UDS_VM_GameOptionData::GetOptionValue3(UDS_VM_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar3 = UDS_M_GameOptionDataBase::GetOptionValue3(this_00);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2344815898939883410>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                     ,0x6e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOptionValueBool @ 14be21620

bool __thiscall UDS_VM_GameOptionData::GetOptionValueBool(UDS_VM_GameOptionData *this)

{
  int iVar1;
  
  iVar1 = GetGameOptionValue(this);
  return 0 < iVar1;
}

// GetOptionValueCheckBox @ 14be21640

ECheckBoxState __thiscall UDS_VM_GameOptionData::GetOptionValueCheckBox(UDS_VM_GameOptionData *this)

{
  int iVar1;
  
  iVar1 = GetGameOptionValue(this);
  return 0 < iVar1;
}

// GetOptionValueFloat @ 14be21660

float __thiscall UDS_VM_GameOptionData::GetOptionValueFloat(UDS_VM_GameOptionData *this)

{
  bool bVar1;
  int iVar2;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar2 = UDS_M_GameOptionDataBase::GetGameOptionValue(this_00);
    return (float)iVar2;
  }
  iVar2 = GetGameOptionValue(this);
  return (float)iVar2;
}

// GetOptionValueFloatNormalized @ 14be216d0

float __thiscall UDS_VM_GameOptionData::GetOptionValueFloatNormalized(UDS_VM_GameOptionData *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar2 = UDS_M_GameOptionDataBase::GetGameOptionValue(this_00);
  }
  else {
    iVar2 = GetGameOptionValue(this);
  }
  iVar3 = GetOptionValue1(this);
  fVar6 = (float)iVar2 - (float)iVar3;
  iVar2 = GetOptionValue2(this);
  fVar4 = 0.0;
  fVar5 = (float)iVar2 - (float)iVar3;
  if ((0.0 < fVar5) && (0.0 <= fVar6)) {
    fVar4 = fVar6 / fVar5;
  }
  return fVar4;
}

// GetOptionValueInt @ 14be21780

int __thiscall UDS_VM_GameOptionData::GetOptionValueInt(UDS_VM_GameOptionData *this)

{
  bool bVar1;
  int iVar2;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar2 = UDS_M_GameOptionDataBase::GetGameOptionValue(this_00);
    return iVar2;
  }
  iVar2 = GetGameOptionValue(this);
  return iVar2;
}

// GetOptionValueText @ 14be217e0

FDS_Text * __thiscall
UDS_VM_GameOptionData::GetOptionValueText
          (UDS_VM_GameOptionData *this,FDS_Text *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x338))();
  return __return_storage_ptr__;
}

// GetOptionValueText @ 14be21810

FDS_Text * __thiscall
UDS_VM_GameOptionData::GetOptionValueText
          (UDS_VM_GameOptionData *this,FDS_Text *__return_storage_ptr__)

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

// GetStepSize @ 14be23140

float __thiscall UDS_VM_GameOptionData::GetStepSize(UDS_VM_GameOptionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UDS_M_GameOptionDataBase *this_00;
  float fVar6;
  
  iVar3 = GetOptionValue2(this);
  iVar4 = GetOptionValue1(this);
  if (iVar3 - iVar4 < 1) {
    return __real_3c23d70a;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    iVar5 = UDS_M_GameOptionDataBase::GetOptionValue3(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2344815898939883410>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                       ,0x6e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
    iVar5 = 0;
  }
  return (float)iVar5 / (float)(iVar3 - iVar4);
}

// OnFloatChangedEvent @ 14be30650

void __thiscall
UDS_VM_GameOptionData::OnFloatChangedEvent(UDS_VM_GameOptionData *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    UDS_M_GameOptionDataBase::SetGameOptionValue(this_00,(int)param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2344815898939883369>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                       ,0x97,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14be36b60

void __thiscall
UDS_VM_GameOptionData::OnSetViewModel
          (UDS_VM_GameOptionData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_18);
  if (this->_padding_ != 0) {
    pUVar2 = Z_Construct_UClass_UDS_M_GameOptionDataBase_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      local_res8 = (UObject *)this->_padding_;
      goto LAB_14be36bc6;
    }
  }
  local_res8 = (UObject *)0x0;
LAB_14be36bc6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->GameOptionDataModel).WeakPtr,(FObjectPtr)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OptionValueText @ 14be45dc0

FDS_Text * __thiscall
UDS_VM_GameOptionData::OptionValueText(UDS_VM_GameOptionData *this,FDS_Text *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x338))();
  return __return_storage_ptr__;
}

// SetDataFromSource @ 14be4aa40

void __thiscall
UDS_VM_GameOptionData::SetDataFromSource(UDS_VM_GameOptionData *this,UDS_GameOptionData *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueInt.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueInt.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueFloat.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueFloat.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueCheckBox.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueCheckBox.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionValueBool.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionValueBool.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// SetGameOptionValue @ 14be4b3e0

void __thiscall UDS_VM_GameOptionData::SetGameOptionValue(UDS_VM_GameOptionData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_GameOptionDataBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&(this->GameOptionDataModel).WeakPtr);
    UDS_M_GameOptionDataBase::SetGameOptionValue(this_00,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2344815898939883369>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionData.cpp"
                       ,0x97,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateView @ 14be59ef0

void __thiscall
UDS_VM_GameOptionData::UpdateView
          (UDS_VM_GameOptionData *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  return;
}

