// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5c3210

UClass * __cdecl UDS_UIEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UIEvent",
               &Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton,
               StaticRegisterNativesUDS_UIEvent,0x278,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_UIEvent>,InternalVTableHelperCtorCaller<UDS_UIEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton;
}

// UDS_UIEvent @ 14b5c78a0

UDS_UIEvent * __thiscall UDS_UIEvent::UDS_UIEvent(UDS_UIEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UIEvent__6B_;
  (this->OnClickTabIndex)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__6B_;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnClickTabIndex);
  }
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions = 0;
  (this->OnSelectedTabIndex)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CBH__6B_
  ;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnSelectedTabIndex);
  }
  *(undefined8 *)&(this->OnErrorTab).Subscriptions = 0;
  (this->OnErrorTab)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBW4EDS_TabErrorType____CBH__CBH__6B_
  ;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(pUVar1,(FDS_IDelegateCleanable *)&this->OnErrorTab);
  }
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions = 0;
  (this->OnChangedTabReddot)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CB_N__6B_
  ;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedTabReddot);
  }
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions = 0;
  (this->OnChangedTabText)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBHAEBUFDS_Text____6B_
  ;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedTabText);
  }
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions = 0;
  (this->OnSelectedIconSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ViewModelTemplateKey____CBH__CBH__6B_;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnSelectedIconSlot);
  }
  return this;
}

// UDS_UIEvent @ 14b5c7af0

UDS_UIEvent * __thiscall UDS_UIEvent::UDS_UIEvent(UDS_UIEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UIEvent__6B_;
  (this->OnClickTabIndex)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__6B_;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnClickTabIndex).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnClickTabIndex);
  }
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions = 0;
  (this->OnSelectedTabIndex)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CBH__6B_
  ;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnSelectedTabIndex);
  }
  *(undefined8 *)&(this->OnErrorTab).Subscriptions = 0;
  (this->OnErrorTab)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBW4EDS_TabErrorType____CBH__CBH__6B_
  ;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnErrorTab).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate(pUVar1,(FDS_IDelegateCleanable *)&this->OnErrorTab);
  }
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions = 0;
  (this->OnChangedTabReddot)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CB_N__6B_
  ;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedTabReddot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedTabReddot);
  }
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions = 0;
  (this->OnChangedTabText)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBHAEBUFDS_Text____6B_
  ;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedTabText).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedTabText);
  }
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions = 0;
  (this->OnSelectedIconSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ViewModelTemplateKey____CBH__CBH__6B_;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActionProgressFlicker).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->EditorbleTextStringDel).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnSelectedIconSlot);
  }
  return this;
}

// ~UDS_UIEvent @ 14b5c8e80

void __thiscall UDS_UIEvent::~UDS_UIEvent(UDS_UIEvent *this)

{
  void *pvVar1;
  UDS_EventManager *pUVar2;
  
  this->_padding_ = (longlong)&___7UDS_UIEvent__6B_;
  (this->OnSelectedIconSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ViewModelTemplateKey____CBH__CBH__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnSelectedIconSlot);
  }
  TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnSelectedIconSlot).Subscriptions);
  *(undefined4 *)&(this->OnSelectedIconSlot).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnSelectedIconSlot).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnSelectedIconSlot).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EditorbleTextStringDel).Delegate.field_0x8,
             *(int *)&(this->EditorbleTextStringDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->EditorbleTextStringDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EditorbleTextStringDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActionProgressFlicker).Delegate.field_0x8,
             *(int *)&(this->OnActionProgressFlicker).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnActionProgressFlicker).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActionProgressFlicker);
  (this->OnChangedTabText)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBHAEBUFDS_Text____6B_
  ;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnChangedTabText);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnChangedTabText).Subscriptions);
  *(undefined4 *)&(this->OnChangedTabText).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedTabText).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnChangedTabText).Subscriptions);
  (this->OnChangedTabReddot)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CB_N__6B_
  ;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnChangedTabReddot);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnChangedTabReddot).Subscriptions);
  *(undefined4 *)&(this->OnChangedTabReddot).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedTabReddot).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnChangedTabReddot).Subscriptions);
  (this->OnErrorTab)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBW4EDS_TabErrorType____CBH__CBH__6B_
  ;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnErrorTab);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnErrorTab).Subscriptions);
  *(undefined4 *)&(this->OnErrorTab).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnErrorTab).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnErrorTab).Subscriptions);
  (this->OnSelectedTabIndex)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__CBH__6B_
  ;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnSelectedTabIndex);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnSelectedTabIndex).Subscriptions);
  *(undefined4 *)&(this->OnSelectedTabIndex).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnSelectedTabIndex).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnSelectedTabIndex).Subscriptions);
  (this->OnClickTabIndex)._padding_ =
       (longlong)
       &___7__FDS_FilteredEventDelegate_U__TWeakObjectPtr_VUObject__UFWeakObjectPtr______CBH__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnClickTabIndex);
  }
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnClickTabIndex).Subscriptions);
  *(undefined4 *)&(this->OnClickTabIndex).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnClickTabIndex).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnClickTabIndex).Subscriptions);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc9c0

UClass * __cdecl UDS_UIEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UIEvent",
               &Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton,
               StaticRegisterNativesUDS_UIEvent,0x278,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_UIEvent>,InternalVTableHelperCtorCaller<UDS_UIEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UIEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_UIEvent @ 14b5ce130

void __cdecl UDS_UIEvent::StaticRegisterNativesUDS_UIEvent(void)

{
  return;
}

// GetEvent @ 14bd5c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_UIEvent * __cdecl UDS_UIEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_UIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_UIEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_UIEvent *)0x0;
}

