// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetOptionColor_WrapperImpl @ 14b72e690

void __cdecl UDS_VM_W_GameOptionColor::SetOptionColor_WrapperImpl(void *param_1,void *param_2)

{
  FWeakObjectPtr *this;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_GameOptionDataBase *pUVar6;
  FWeakObjectPtr FStackX_8;
  UObject *pUStackX_18;
  FString FStack_38;
  FString FStack_28;
  
  this = (FWeakObjectPtr *)((longlong)param_1 + 0xc4);
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239085>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x2d,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bfdd152;
  }
  pUVar4 = FWeakObjectPtr::Get(this);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfdd0b9:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfdd0b9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  pUStackX_18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar2) {
    pUVar6 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this);
    iVar3 = UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar6);
    DS_Util::ToColorString(&FStack_28,param_2);
    pUVar6 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&FStackX_8);
    _Src.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = FStack_28.Data.ArrayNum;
    if (FStack_28.Data.ArrayNum == 0) {
      FStack_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_28.Data.ArrayNum,0,(ForAnyElementType *)&FStack_38,
                 FStack_28.Data.ArrayNum,&FStack_38.Data.ArrayMax);
      memcpy(FStack_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)FStack_28.Data.ArrayNum * 2);
    }
    UDS_M_GameOptionDataBase::SetGameOptionValueByIndex(pUVar6,iVar3,&FStack_38);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239088>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x30,"false");
    if (bVar2) {
code_r0x00014bfdd152:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetClickColorBlock_WrapperImpl @ 14b72e6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_GameOptionColor::SetClickColorBlock_WrapperImpl(void *param_1,void *param_2)

{
  FWeakObjectPtr *this;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_GameOptionManager *this_00;
  UDS_M_GameOptionDataBase *this_01;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_148;
  UObject *pUStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0xc4);
  bVar3 = FWeakObjectPtr::IsValid(this);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239098>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x3a,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfb8fb8;
  }
  pUVar4 = FWeakObjectPtr::Get(this);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfb8eee:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfb8eee;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStack_148.ObjectIndex = 0;
  FStack_148.ObjectSerialNumber = 0;
  pUStack_140 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStack_148,(FObjectPtr)&pUStack_140);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_148);
  if (bVar3) {
    this_00 = UDS_GameOptionManager::GetInst();
    if (this_00 == (UDS_GameOptionManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7561021983073239104>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                         ,0x40,"false");
      if (bVar3) goto code_r0x00014bfb8fb8;
    }
    else {
      this_01 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this);
      UDS_M_GameOptionDataBase::GetGameOptionValueIndex(this_01);
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_W_GameOptionColor::OnClickColorBlock",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Display,TStack_138.Ptr,0x43,
                   L"UDS_VM_W_GameOptionColor::OnClickColorBlock() - optionIndex : %d");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
      UDS_GameOptionManager::OpenGameOptionColorPicker
                (this_00,(TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>)FStack_148);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239101>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x3d,"false");
    if (bVar3) {
code_r0x00014bfb8fb8:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b72e6b0

UClass * __cdecl UDS_VM_W_GameOptionColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionColor",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionColor,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionColor>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionColor>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton;
}

// UDS_VM_W_GameOptionColor @ 14b7354f0

UDS_VM_W_GameOptionColor * __thiscall
UDS_VM_W_GameOptionColor::UDS_VM_W_GameOptionColor
          (UDS_VM_W_GameOptionColor *this,FVTableHelper *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionColor__6B_;
  *(undefined8 *)&(this->ClickColorBlock).Delegate = 0;
  *(undefined8 *)&(this->ClickColorBlock).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickColorBlock).Delegate.field_0x10 = 0;
  (this->ClickColorBlock)._padding_ = '\0';
  (this->ClickColorBlock).bIsCustomSelected = false;
  (this->ClickColorBlock).bIsLacked = false;
  (this->ClickColorBlock).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_GameOptionColor @ 14b735550

UDS_VM_W_GameOptionColor * __thiscall
UDS_VM_W_GameOptionColor::UDS_VM_W_GameOptionColor
          (UDS_VM_W_GameOptionColor *this,FObjectInitializer *param_1)

{
  UDS_VM_GameOptionData::UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionColor__6B_;
  *(undefined8 *)&(this->ClickColorBlock).Delegate = 0;
  *(undefined8 *)&(this->ClickColorBlock).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickColorBlock).Delegate.field_0x10 = 0;
  (this->ClickColorBlock)._padding_ = '\0';
  (this->ClickColorBlock).bIsCustomSelected = false;
  (this->ClickColorBlock).bIsLacked = false;
  (this->ClickColorBlock).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_GameOptionColor @ 14b7367f0

void __thiscall UDS_VM_W_GameOptionColor::~UDS_VM_W_GameOptionColor(UDS_VM_W_GameOptionColor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOptionColor__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickColorBlock).Delegate);
  pvVar1 = *(void **)&(this->ClickColorBlock).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickColorBlock).Delegate);
  UDS_VM_GameOptionData::~UDS_VM_GameOptionData((UDS_VM_GameOptionData *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739750

IClassDescriptor * __thiscall
UDS_VM_W_GameOptionColor::GetFieldNotificationDescriptor(UDS_VM_W_GameOptionColor *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOptionColor::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a740

UClass * __cdecl UDS_VM_W_GameOptionColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOptionColor",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOptionColor,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOptionColor>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOptionColor>,local_res8,
               UDS_VM_GameOptionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOptionColor.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOptionColor @ 14b73b000

void __cdecl UDS_VM_W_GameOptionColor::StaticRegisterNativesUDS_VM_W_GameOptionColor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_GameOptionColor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetOptionColor @ 14b73c590

void __cdecl
UDS_VM_W_GameOptionColor::execGetOptionColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetOptionColor((UDS_VM_W_GameOptionColor *)param_1,&local_18);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// GetOptionColor @ 14bfab670

FLinearColor * __thiscall
UDS_VM_W_GameOptionColor::GetOptionColor
          (UDS_VM_W_GameOptionColor *this,FLinearColor *__return_storage_ptr__)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FLinearColor *pFVar5;
  UDS_M_GameOptionDataColor *this_01;
  atomic<unsigned_char> *paVar6;
  int iVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  FLinearColor_u_0 local_18;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar2) {
    iVar7 = 0x14;
    paVar6 = &bGEnsureHasExecuted<7561021983073239060>;
    goto LAB_14bfab73f;
  }
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 == (UObject *)0x0) {
LAB_14bfab6d5:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
    iVar7 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bfab6d5;
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
    this_01 = (UDS_M_GameOptionDataColor *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_GameOptionDataColor::GetOptionColor(this_01,(FLinearColor *)&local_18._s_0);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18._0_8_;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_18._8_8_;
    return __return_storage_ptr__;
  }
  iVar7 = 0x17;
  paVar6 = &bGEnsureHasExecuted<7561021983073239063>;
LAB_14bfab73f:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar6,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                     ,iVar7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLinearColor *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetOptionValueText @ 14bfaba80

FDS_Text * __thiscall
UDS_VM_W_GameOptionColor::GetOptionValueText
          (UDS_VM_W_GameOptionColor *this,FDS_Text *__return_storage_ptr__)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  FDS_Text *pFVar3;
  UObject *pUVar4;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(this_00);
    (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7561021983073239072>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                     ,0x20,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDS_Text *)(*pcVar1)();
    return pFVar3;
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

// OnClickColorBlock @ 14bfb8e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_GameOptionColor::OnClickColorBlock
          (UDS_VM_W_GameOptionColor *this,FDS_ButtonEventField *param_1)

{
  FWeakObjectPtr *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_GameOptionManager *this_01;
  UDS_M_GameOptionDataBase *this_02;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  UObject *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar3 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239098>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x3a,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfb8fb8;
  }
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfb8eee:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfb8eee;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar3 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar3) {
    this_01 = UDS_GameOptionManager::GetInst();
    if (this_01 == (UDS_GameOptionManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7561021983073239104>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                         ,0x40,"false");
      if (bVar3) goto code_r0x00014bfb8fb8;
    }
    else {
      this_02 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this_00);
      UDS_M_GameOptionDataBase::GetGameOptionValueIndex(this_02);
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_GameOptionColor::OnClickColorBlock",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Display,local_138.Ptr,0x43,
                   L"UDS_VM_W_GameOptionColor::OnClickColorBlock() - optionIndex : %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      UDS_GameOptionManager::OpenGameOptionColorPicker
                (this_01,(TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr>)local_148);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239101>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x3d,"false");
    if (bVar3) {
code_r0x00014bfb8fb8:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfcdea0

void __thiscall
UDS_VM_W_GameOptionColor::OnSetViewModel
          (UDS_VM_W_GameOptionColor *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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

// SetOptionColor @ 14bfdd020

void __thiscall
UDS_VM_W_GameOptionColor::SetOptionColor(UDS_VM_W_GameOptionColor *this,FLinearColor *param_1)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_GameOptionDataBase *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FString local_38;
  FString local_28;
  
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239085>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x2d,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bfdd152;
  }
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bfdd0b9:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bfdd0b9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar6 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(this_00);
    iVar3 = UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar6);
    DS_Util::ToColorString(&local_28,param_1);
    pUVar6 = (UDS_M_GameOptionDataBase *)FWeakObjectPtr::Get(&local_res8);
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
    UDS_M_GameOptionDataBase::SetGameOptionValueByIndex(pUVar6,iVar3,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561021983073239088>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOptionColor.cpp"
                       ,0x30,"false");
    if (bVar2) {
code_r0x00014bfdd152:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateView @ 14bfe69c0

void __thiscall
UDS_VM_W_GameOptionColor::UpdateView
          (UDS_VM_W_GameOptionColor *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.BitNumber;
  local_18 = UDS_VM_GameOptionData::FFieldNotificationClassDescriptor::OptionValueText.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GetOptionColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GetOptionColor.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

