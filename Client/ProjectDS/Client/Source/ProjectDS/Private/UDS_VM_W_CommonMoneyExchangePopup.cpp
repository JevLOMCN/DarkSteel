// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b7234d0

UClass * __cdecl UDS_VM_W_CommonMoneyExchangePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonMoneyExchangePopup",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonMoneyExchangePopup,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CommonMoneyExchangePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonMoneyExchangePopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton;
}

// UDS_VM_W_CommonMoneyExchangePopup @ 14b727a70

UDS_VM_W_CommonMoneyExchangePopup * __thiscall
UDS_VM_W_CommonMoneyExchangePopup::UDS_VM_W_CommonMoneyExchangePopup
          (UDS_VM_W_CommonMoneyExchangePopup *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonMoneyExchangePopup__6B_;
  (this->ModelMoneyExchange).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_W_CommonMoneyExchangePopup @ 14b727ac0

UDS_VM_W_CommonMoneyExchangePopup * __thiscall
UDS_VM_W_CommonMoneyExchangePopup::UDS_VM_W_CommonMoneyExchangePopup
          (UDS_VM_W_CommonMoneyExchangePopup *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonMoneyExchangePopup__6B_;
  (this->ModelMoneyExchange).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_W_CommonMoneyExchangePopup @ 14b729110

void __thiscall
UDS_VM_W_CommonMoneyExchangePopup::~UDS_VM_W_CommonMoneyExchangePopup
          (UDS_VM_W_CommonMoneyExchangePopup *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonMoneyExchangePopup__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72af10

IClassDescriptor * __thiscall
UDS_VM_W_CommonMoneyExchangePopup::GetFieldNotificationDescriptor
          (UDS_VM_W_CommonMoneyExchangePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CommonMoneyExchangePopup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b6a0

UClass * __cdecl UDS_VM_W_CommonMoneyExchangePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonMoneyExchangePopup",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonMoneyExchangePopup,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CommonMoneyExchangePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonMoneyExchangePopup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonMoneyExchangePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CommonMoneyExchangePopup @ 14b72be00

void __cdecl
UDS_VM_W_CommonMoneyExchangePopup::StaticRegisterNativesUDS_VM_W_CommonMoneyExchangePopup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_CommonMoneyExchangePopup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsVisibleFirst @ 14b72ce80

void __cdecl
UDS_VM_W_CommonMoneyExchangePopup::execIsVisibleFirst
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsVisibleFirst((UDS_VM_W_CommonMoneyExchangePopup *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsVisibleSecond @ 14b72cec0

void __cdecl
UDS_VM_W_CommonMoneyExchangePopup::execIsVisibleSecond
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsVisibleSecond((UDS_VM_W_CommonMoneyExchangePopup *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// IsVisibleFirst @ 14be27df0

bool __thiscall
UDS_VM_W_CommonMoneyExchangePopup::IsVisibleFirst(UDS_VM_W_CommonMoneyExchangePopup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_M_CommonMoneyExchangePopup *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ModelMoneyExchange).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_CommonMoneyExchangePopup *)
              FWeakObjectPtr::Get(&(this->ModelMoneyExchange).WeakPtr);
    bVar2 = UDS_M_CommonMoneyExchangePopup::IsVisible(this_00,EDS_MoneyExchange_First);
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5092225848770035734>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_CommonMoneyExchangePopup.cpp"
                     ,0x16,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsVisibleSecond @ 14be27e60

bool __thiscall
UDS_VM_W_CommonMoneyExchangePopup::IsVisibleSecond(UDS_VM_W_CommonMoneyExchangePopup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_M_CommonMoneyExchangePopup *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ModelMoneyExchange).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_CommonMoneyExchangePopup *)
              FWeakObjectPtr::Get(&(this->ModelMoneyExchange).WeakPtr);
    bVar2 = UDS_M_CommonMoneyExchangePopup::IsVisible(this_00,EDS_MoneyExchange_Second);
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5092225848770035740>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_CommonMoneyExchangePopup.cpp"
                     ,0x1c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// OnSetViewModel @ 14be41660

void __thiscall
UDS_VM_W_CommonMoneyExchangePopup::OnSetViewModel
          (UDS_VM_W_CommonMoneyExchangePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
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
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5092225848770035727>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_CommonMoneyExchangePopup.cpp"
                       ,0xf,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_M_CommonMoneyExchangePopup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      local_res8 = (UObject *)this->_padding_;
    }
    else {
      local_res8 = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->ModelMoneyExchange).WeakPtr,(FObjectPtr)&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

