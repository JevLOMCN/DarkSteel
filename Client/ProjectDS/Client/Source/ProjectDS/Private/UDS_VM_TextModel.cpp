// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6ef5d0

UClass * __cdecl UDS_VM_TextModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TextModel",
               &Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton,
               StaticRegisterNativesUDS_VM_TextModel,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_TextModel>,
               InternalVTableHelperCtorCaller<UDS_VM_TextModel>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton;
}

// UDS_VM_TextModel @ 14b6f23f0

UDS_VM_TextModel * __thiscall
UDS_VM_TextModel::UDS_VM_TextModel(UDS_VM_TextModel *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_TextModel__6B_;
  return this;
}

// UDS_VM_TextModel @ 14b6f2430

UDS_VM_TextModel * __thiscall
UDS_VM_TextModel::UDS_VM_TextModel(UDS_VM_TextModel *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_TextModel__6B_;
  return this;
}

// ~UDS_VM_TextModel @ 14b6f4240

void __thiscall UDS_VM_TextModel::~UDS_VM_TextModel(UDS_VM_TextModel *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_TextModel__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6bd0

IClassDescriptor * __thiscall
UDS_VM_TextModel::GetFieldNotificationDescriptor(UDS_VM_TextModel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TextModel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f74e0

UClass * __cdecl UDS_VM_TextModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TextModel",
               &Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton,
               StaticRegisterNativesUDS_VM_TextModel,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_TextModel>,
               InternalVTableHelperCtorCaller<UDS_VM_TextModel>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TextModel.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TextModel @ 14b6f83b0

void __cdecl UDS_VM_TextModel::StaticRegisterNativesUDS_VM_TextModel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_TextModel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execText @ 14b6f9a60

void __cdecl UDS_VM_TextModel::execText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  FDS_Text *pFVar4;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = Text((UDS_VM_TextModel *)param_1,&local_58);
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

// Text @ 14bdeaa90

FDS_Text * __thiscall
UDS_VM_TextModel::Text(UDS_VM_TextModel *this,FDS_Text *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDS_Text *pFVar6;
  FName FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FString local_18;
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
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
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_TextData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,pwVar9);
    FDS_Text::SetTextFromUniqueString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_553968270567276528>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_TextModel.cpp"
                     ,0x10,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FDS_Text *)(*pcVar3)();
    return pFVar6;
  }
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

// UpdateView @ 14bdfa1c0

void __thiscall
UDS_VM_TextModel::UpdateView
          (UDS_VM_TextModel *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Text.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Text.FieldName;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_18);
  return;
}

