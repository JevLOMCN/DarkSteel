// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b6e15f0

UClass * __cdecl UDS_VM_Status::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Status",
               &Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_Status,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Status>,InternalVTableHelperCtorCaller<UDS_VM_Status>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton;
}

// UDS_VM_Status @ 14b6e5f90

UDS_VM_Status * __thiscall UDS_VM_Status::UDS_VM_Status(UDS_VM_Status *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Status__6B_;
  return this;
}

// UDS_VM_Status @ 14b6e5fd0

UDS_VM_Status * __thiscall
UDS_VM_Status::UDS_VM_Status(UDS_VM_Status *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Status__6B_;
  return this;
}

// ~UDS_VM_Status @ 14b6e7360

void __thiscall UDS_VM_Status::~UDS_VM_Status(UDS_VM_Status *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Status__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9910

IClassDescriptor * __thiscall UDS_VM_Status::GetFieldNotificationDescriptor(UDS_VM_Status *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Status::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea480

UClass * __cdecl UDS_VM_Status::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Status",
               &Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_Status,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Status>,InternalVTableHelperCtorCaller<UDS_VM_Status>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Status.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Status @ 14b6eac60

void __cdecl UDS_VM_Status::StaticRegisterNativesUDS_VM_Status(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Status_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEmpty @ 14b6ec280

void __cdecl UDS_VM_Status::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmpty((UDS_VM_Status *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSocketName01 @ 14b6ec600

void __cdecl UDS_VM_Status::execSocketName01(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SocketName01((UDS_VM_Status *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
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

// execStatusName01 @ 14b6ec670

void __cdecl UDS_VM_Status::execStatusName01(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusName01((UDS_VM_Status *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
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

// execStatusName02 @ 14b6ec6e0

void __cdecl UDS_VM_Status::execStatusName02(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusName02((UDS_VM_Status *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
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

// execStatusValue01 @ 14b6ec750

void __cdecl UDS_VM_Status::execStatusValue01(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusValue01((UDS_VM_Status *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execStatusValue02 @ 14b6ec7a0

void __cdecl UDS_VM_Status::execStatusValue02(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusValue02((UDS_VM_Status *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execStatusValue03 @ 14b6ec7f0

void __cdecl UDS_VM_Status::execStatusValue03(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = StatusValue03((UDS_VM_Status *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execStyleIDStatusName02 @ 14b6ec840

void __cdecl UDS_VM_Status::execStyleIDStatusName02(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = StyleIDStatusName02((UDS_VM_Status *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execStyleIDStatusValue02 @ 14b6ec880

void __cdecl UDS_VM_Status::execStyleIDStatusValue02(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = StyleIDStatusValue02((UDS_VM_Status *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// IsEmpty @ 14be268a0

bool __thiscall UDS_VM_Status::IsEmpty(UDS_VM_Status *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_GemSocketStatus *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
      goto LAB_14be268ce;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be268ce:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357329>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x51,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_GemSocketStatus *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_GemSocketStatus::IsEmpty(this_01);
  return bVar2;
}

// SocketName01 @ 14be53750

FDS_Text * __thiscall
UDS_VM_Status::SocketName01(UDS_VM_Status *this,FDS_Text *__return_storage_ptr__)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->field_0xa0;
  pUVar5 = (UObject *)0x0;
  if (*(longlong *)this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
    }
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
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar5 + 800))(pUVar5,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<470594361122357273>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                     ,0x19,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// StatusName01 @ 14be53bf0

FDS_Text * __thiscall
UDS_VM_Status::StatusName01(UDS_VM_Status *this,FDS_Text *__return_storage_ptr__)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->field_0xa0;
  pUVar5 = (UObject *)0x0;
  if (*(longlong *)this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
    }
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
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar5 + 0x328))(pUVar5,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<470594361122357280>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                     ,0x20,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// StatusName02 @ 14be53d30

FDS_Text * __thiscall
UDS_VM_Status::StatusName02(UDS_VM_Status *this,FDS_Text *__return_storage_ptr__)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->field_0xa0;
  pUVar5 = (UObject *)0x0;
  if (*(longlong *)this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
    }
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
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar5 + 0x330))(pUVar5,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<470594361122357287>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                     ,0x27,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// StatusValue01 @ 14be53e70

FText * __thiscall UDS_VM_Status::StatusValue01(UDS_VM_Status *this,FText *__return_storage_ptr__)

{
  undefined1 *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UObject *pUVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
      goto LAB_14be53ea5;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14be53ea5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357294>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x2e,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
    return __return_storage_ptr__;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  (**(code **)(*(longlong *)pUVar6 + 0x338))(pUVar6,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StatusValue02 @ 14be53fa0

FText * __thiscall UDS_VM_Status::StatusValue02(UDS_VM_Status *this,FText *__return_storage_ptr__)

{
  undefined1 *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UObject *pUVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
      goto LAB_14be53fd5;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14be53fd5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357301>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x35,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
    return __return_storage_ptr__;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  (**(code **)(*(longlong *)pUVar6 + 0x340))(pUVar6,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StatusValue03 @ 14be540d0

FText * __thiscall UDS_VM_Status::StatusValue03(UDS_VM_Status *this,FText *__return_storage_ptr__)

{
  undefined1 *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UObject *pUVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
      goto LAB_14be54105;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14be54105:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357308>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x3c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
    return __return_storage_ptr__;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  (**(code **)(*(longlong *)pUVar6 + 0x348))(pUVar6,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StyleIDStatusName02 @ 14be543e0

int __thiscall UDS_VM_Status::StyleIDStatusName02(UDS_VM_Status *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
      goto LAB_14be5440e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be5440e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357315>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x43,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x350))(pUVar5);
  return iVar3;
}

// StyleIDStatusValue02 @ 14be544d0

int __thiscall UDS_VM_Status::StyleIDStatusValue02(UDS_VM_Status *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
      goto LAB_14be544fe;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be544fe:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<470594361122357322>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Status.cpp"
                       ,0x4a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  iVar3 = (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5);
  return iVar3;
}

// UpdateView @ 14be5aac0

void __thiscall
UDS_VM_Status::UpdateView
          (UDS_VM_Status *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::SocketName01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SocketName01.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StatusName01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusName01.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StatusName02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusName02.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StatusValue01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusValue01.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StatusValue02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusValue02.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StatusValue03.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatusValue03.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleIDStatusName02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleIDStatusName02.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleIDStatusValue02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleIDStatusValue02.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

