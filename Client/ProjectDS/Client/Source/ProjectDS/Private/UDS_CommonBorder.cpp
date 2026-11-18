// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetContentID_WrapperImpl @ 14b457e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_CommonBorder::SetContentID_WrapperImpl(void *param_1,void *param_2)

{
  FDS_ContentLock *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_ContentManager *this;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr FStack_148;
  FWeakObjectPtr FStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *(undefined4 *)((longlong)param_1 + 0x3b0) = *(undefined4 *)param_2;
  if (*(int *)param_2 < 1) {
    return;
  }
  pFVar1 = (FDS_ContentLock *)((longlong)param_1 + 0x3a8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FStack_140.ObjectIndex = 0;
  FStack_140.ObjectSerialNumber = 0;
  FStack_148 = (FWeakObjectPtr)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&FStack_140,(FObjectPtr)&FStack_148);
  FStack_148 = FStack_140;
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&FStack_148,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
    pwVar5 = L"InUserWidget is nullptr";
    uVar4 = 0x13;
LAB_14bcc5877:
    UDS_LogManager::PrintLog(pUVar3,1,Display,TStack_138.Ptr,uVar4,pwVar5);
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  else {
    this = UDS_ContentManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (UDS_ContentManager *)0x0) goto LAB_14bcc582c;
    }
    else {
      if (this == (UDS_ContentManager *)0x0) {
LAB_14bcc582c:
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
        pwVar5 = L"contentManager is nullptr";
        uVar4 = 0x1a;
        goto LAB_14bcc5877;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    UDS_ContentManager::OnRegisterContentLock
              (this,(TWeakObjectPtr<UObject,FWeakObjectPtr>)FStack_148,pFVar1);
    (**(code **)*pFVar1)(pFVar1);
  }
  return;
}

// StaticClass @ 14b457e90

UClass * __cdecl UDS_CommonBorder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonBorder",
               &Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton,
               StaticRegisterNativesUDS_CommonBorder,0x3c0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UDS_CommonBorder>,
               InternalVTableHelperCtorCaller<UDS_CommonBorder>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton;
}

// UDS_CommonBorder @ 14b45cb90

UDS_CommonBorder * __thiscall
UDS_CommonBorder::UDS_CommonBorder(UDS_CommonBorder *this,FVTableHelper *param_1)

{
  UCommonBorder::UCommonBorder((UCommonBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x3a8 = &___7UDS_CommonBorder__6B_;
  return this;
}

// ~UDS_CommonBorder @ 14b45d1c0

void __thiscall UDS_CommonBorder::~UDS_CommonBorder(UDS_CommonBorder *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x3a8 = &___7UDS_CommonBorder__6B_;
  UCommonBorder::~UCommonBorder((UCommonBorder *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b45e270

IClassDescriptor * __thiscall
UDS_CommonBorder::GetFieldNotificationDescriptor(UDS_CommonBorder *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonBorder::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b45ef80

UClass * __cdecl UDS_CommonBorder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonBorder",
               &Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton,
               StaticRegisterNativesUDS_CommonBorder,0x3c0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UDS_CommonBorder>,
               InternalVTableHelperCtorCaller<UDS_CommonBorder>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonBorder.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonBorder @ 14b45f2c0

void __cdecl UDS_CommonBorder::StaticRegisterNativesUDS_CommonBorder(void)

{
  return;
}

// UDS_CommonBorder @ 14bc83490

UDS_CommonBorder * __thiscall
UDS_CommonBorder::UDS_CommonBorder(UDS_CommonBorder *this,FObjectInitializer *param_1)

{
  UCommonBorder::UCommonBorder((UCommonBorder *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x3a8 = &___7UDS_CommonBorder__6B_;
  return this;
}

// OnEventContentLock @ 14bcb4c90

void __thiscall UDS_CommonBorder::OnEventContentLock(UDS_CommonBorder *this)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  UDS_ContentManager *this_00;
  UDS_DataSetBase *this_01;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined8 uVar6;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  uVar1 = *(undefined4 *)&this->field_0x8;
  this_00 = UDS_ContentManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_ContentManager *)0x0) goto LAB_14bcb4ced;
    local_res8 = (UObject *)CONCAT44(local_res8._4_4_,uVar1);
    bVar3 = UDS_ContentManager::HasContentLock(this_00,(EDS_ContentsBaseType *)&local_res8);
LAB_14bcb4dcb:
    if (bVar3 != false) {
      uVar6 = 0;
      goto LAB_14bcb4dd5;
    }
  }
  else {
    if (this_00 != (UDS_ContentManager *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
      local_res8 = (UObject *)CONCAT44(local_res8._4_4_,uVar1);
      bVar3 = UDS_ContentManager::HasContentLock(this_00,(EDS_ContentsBaseType *)&local_res8);
      goto LAB_14bcb4dcb;
    }
LAB_14bcb4ced:
    TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_res18);
    bVar3 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0
                      );
    if (!bVar3) {
      this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
      UDS_DataSetBase::GetData(this_01,(ulong64)&local_res20);
      bVar3 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_res20);
        if (pUVar4 == (UObject *)0x0) {
LAB_14bcb4d75:
          pUVar4 = (UObject *)0x0;
        }
        else {
          pUVar5 = Z_Construct_UClass_UDS_ContentData_NoRegister();
          iVar2 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar5->_padding_)) goto LAB_14bcb4d75;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res8 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
        bVar3 = FWeakObjectPtr::IsValid(&local_res10);
        goto LAB_14bcb4dcb;
      }
    }
  }
  uVar6 = 1;
LAB_14bcb4dd5:
                    /* WARNING: Could not recover jumptable at 0x00014bcb4de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0x18 + 0x2b8))(&this[-1].field_0x18,uVar6);
  return;
}

// SetContentID @ 14bcc56e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonBorder::SetContentID(UDS_CommonBorder *this,int *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_ContentManager *this_00;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->ContentID = *param_1;
  if (*param_1 < 1) {
    return;
  }
  puVar1 = &this->field_0x3a8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_140.ObjectIndex = 0;
  local_140.ObjectSerialNumber = 0;
  local_148 = (FWeakObjectPtr)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_148);
  local_148 = local_140;
  bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_148,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
    pwVar5 = L"InUserWidget is nullptr";
    uVar4 = 0x13;
LAB_14bcc5877:
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_138.Ptr,uVar4,pwVar5);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    this_00 = UDS_ContentManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_ContentManager *)0x0) goto LAB_14bcc582c;
    }
    else {
      if (this_00 == (UDS_ContentManager *)0x0) {
LAB_14bcc582c:
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ContentLock::OnRegisterContentLock",0x26,Yes);
        pwVar5 = L"contentManager is nullptr";
        uVar4 = 0x1a;
        goto LAB_14bcc5877;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_ContentManager::OnRegisterContentLock
              (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_148,(FDS_ContentLock *)puVar1);
    (*(code *)**(undefined8 **)puVar1)(puVar1);
  }
  return;
}

