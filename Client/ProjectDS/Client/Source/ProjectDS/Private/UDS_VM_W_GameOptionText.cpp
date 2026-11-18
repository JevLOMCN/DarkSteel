// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetCommitOptionText_WrapperImpl @ 14b730370

void __cdecl UDS_VM_W_GameOptionText::SetCommitOptionText_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_GameOptionDataBase *this;
  FString *pFVar6;
  FWeakObjectPtr FStackX_8;
  UObject *apUStackX_18 [2];
  FString FStack_18;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0xc4));
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3604357492768767953>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                       ,0x2f,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbc166;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xc4));
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfbc0dd:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataText_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfbc0dd;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar3) {
    this = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&FStackX_8);
    pFVar6 = FText::ToString(param_2);
    pFVar6 = ::FString::FString(&FStack_18,pFVar6);
    UDS_M_GameOptionDataBase::SetGameOptionValue(this,pFVar6);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3604357492768767950>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                       ,0x32,"false");
    if (bVar3) {
code_r0x00014bfbc166:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b730380

UClass * __cdecl UDS_VM_W_GameOptionText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionText",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionText,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionText>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionText>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton;
}

// UDS_VM_W_GameOptionText @ 14b735a70

UDS_VM_W_GameOptionText * __thiscall
UDS_VM_W_GameOptionText::UDS_VM_W_GameOptionText
          (UDS_VM_W_GameOptionText *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionText__6B_;
  FText::FText(&(this->CommitOptionText).NewText);
  return this;
}

// UDS_VM_W_GameOptionText @ 14b735ac0

UDS_VM_W_GameOptionText * __thiscall
UDS_VM_W_GameOptionText::UDS_VM_W_GameOptionText
          (UDS_VM_W_GameOptionText *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionText__6B_;
  FText::FText(&(this->CommitOptionText).NewText);
  return this;
}

// ~UDS_VM_W_GameOptionText @ 14b736a70

void __thiscall UDS_VM_W_GameOptionText::~UDS_VM_W_GameOptionText(UDS_VM_W_GameOptionText *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionText__6B_;
  pIVar1 = (this->CommitOptionText).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739a60

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionText::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73ac80

UClass * __cdecl UDS_VM_W_GameOptionText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionText",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionText,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionText>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionText>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionText.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionText @ 14b73b0a0

void __cdecl UDS_VM_W_GameOptionText::StaticRegisterNativesUDS_VM_W_GameOptionText(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_GameOptionText_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetOptionHintText @ 14b73c5d0

void __cdecl
UDS_VM_W_GameOptionText::execGetOptionHintText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  FDS_Text *pFVar4;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = GetOptionHintText((UDS_VM_W_GameOptionText *)param_1,&local_58);
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

// execGetOptionText @ 14b73c700

void __cdecl
UDS_VM_W_GameOptionText::execGetOptionText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetOptionText((UDS_VM_W_GameOptionText *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// GetOptionHintText @ 14bfab7b0

FDS_Text * __thiscall
UDS_VM_W_GameOptionText::GetOptionHintText
          (UDS_VM_W_GameOptionText *this,FDS_Text *__return_storage_ptr__)

{
  FWeakObjectPtr *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_Text *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_M_GameOptionDataText *this_01;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar3 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3604357492768767969>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                       ,0x1f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDS_Text *)(*pcVar2)();
      return pFVar4;
    }
    __return_storage_ptr__->StringTableType = None;
    goto LAB_14bfab802;
  }
  pUVar5 = FWeakObjectPtr::Get(this_00);
  if (pUVar5 == (UObject *)0x0) {
LAB_14bfab871:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_M_GameOptionDataText_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bfab871;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this_01 = (UDS_M_GameOptionDataText *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_GameOptionDataText::GetDefaultOptionValueText(this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3604357492768767966>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                     ,0x22,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDS_Text *)(*pcVar2)();
    return pFVar4;
  }
  __return_storage_ptr__->StringTableType = None;
LAB_14bfab802:
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

// GetOptionText @ 14bfab930

FText * __thiscall
UDS_VM_W_GameOptionText::GetOptionText(UDS_VM_W_GameOptionText *this,FText *__return_storage_ptr__)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UDS_M_GameOptionDataText *this_01;
  FString *pFVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  FString local_18;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar2) {
    iVar8 = 0x15;
    paVar7 = &bGEnsureHasExecuted<_3604357492768767979>;
    goto LAB_14bfab9ff;
  }
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 == (UObject *)0x0) {
LAB_14bfab995:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_M_GameOptionDataText_NoRegister();
    iVar8 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bfab995;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_GameOptionDataText *)FWeakObjectPtr::Get(&local_res8);
    pFVar6 = UDS_M_GameOptionDataText::GetCurrentOptionValueText(this_01,&local_18);
    FText::FromString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  iVar8 = 0x18;
  paVar7 = &bGEnsureHasExecuted<_3604357492768767976>;
LAB_14bfab9ff:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                     ,iVar8,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar1)();
    return pFVar5;
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnCommitOptionText @ 14bfbc050

void __thiscall
UDS_VM_W_GameOptionText::OnCommitOptionText
          (UDS_VM_W_GameOptionText *this,FDS_TextCommittedEventField *param_1)

{
  FWeakObjectPtr *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_GameOptionDataBase *this_01;
  FString *pFVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  FString local_18;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar3 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3604357492768767953>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                       ,0x2f,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbc166;
  }
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfbc0dd:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataText_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfbc0dd;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    this_01 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&local_res8);
    pFVar6 = FText::ToString(&param_1->NewText);
    pFVar6 = ::FString::FString(&local_18,pFVar6);
    UDS_M_GameOptionDataBase::SetGameOptionValue(this_01,pFVar6);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3604357492768767950>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionText.cpp"
                       ,0x32,"false");
    if (bVar3) {
code_r0x00014bfbc166:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfce6d0

void __thiscall
UDS_VM_W_GameOptionText::OnSetViewModel
          (UDS_VM_W_GameOptionText *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
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
  UDS_VM_GameOptionData::OnSetViewModel((UDS_VM_GameOptionData *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateView @ 14bfe6e20

void __thiscall
UDS_VM_W_GameOptionText::UpdateView
          (UDS_VM_W_GameOptionText *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::GetOptionText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionHintText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionHintText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

