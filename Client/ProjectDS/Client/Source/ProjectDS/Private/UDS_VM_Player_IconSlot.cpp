// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 39

// SetHoveredEvent_WrapperImpl @ 14b6b9b80

void __cdecl UDS_VM_Player_IconSlot::SetHoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FStack_18;
  int iStack_10;
  
  if (*(longlong **)((longlong)param_1 + 0x150) == (longlong *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392354>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x5e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x150) + 0x2f0))();
    iStack_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetUnhoveredEvent_WrapperImpl @ 14b6b9b90

void __cdecl UDS_VM_Player_IconSlot::SetUnhoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FStack_18;
  int iStack_10;
  
  if (*(longlong **)((longlong)param_1 + 0x150) == (longlong *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392346>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x66,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x150) + 0x2f8))();
    iStack_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetClickedEvent_WrapperImpl @ 14b6b9ba0

void __cdecl UDS_VM_Player_IconSlot::SetClickedEvent_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName FStack_18;
  int iStack_10;
  
  if (*(longlong **)((longlong)param_1 + 0x150) == (longlong *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392338>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x6e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x150) + 0x300))();
    iStack_10 = FFieldNotificationClassDescriptor::SelectedVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::SelectedVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6b9bb0

UClass * __cdecl UDS_VM_Player_IconSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Player_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Player_IconSlot,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Player_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Player_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton;
}

// UDS_VM_Player_IconSlot @ 14b6bde10

UDS_VM_Player_IconSlot * __thiscall
UDS_VM_Player_IconSlot::UDS_VM_Player_IconSlot(UDS_VM_Player_IconSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Player_IconSlot__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnhoveredEvent)._padding_ = '\0';
  (this->UnhoveredEvent).bIsCustomSelected = false;
  (this->UnhoveredEvent).bIsLacked = false;
  (this->UnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnhoveredEvent).Delegate.field_0x10 = 0;
  (this->ClickedEvent)._padding_ = '\0';
  (this->ClickedEvent).bIsCustomSelected = false;
  (this->ClickedEvent).bIsLacked = false;
  (this->ClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Possession).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Possession).StringEnumTableNameID.Number = 0;
  (this->FixedText_Possession).DateTime.Ticks = 0;
  (this->FixedText_Possession).TimeSpan.Ticks = 0;
  (this->FixedText_Possession).TimeExpressionType = None;
  (this->FixedText_Possession).IsExpression = false;
  (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Possession).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).FormatArgs.ArrayNum = 0;
  (this->FixedText_Possession).FormatArgs.ArrayMax = 0;
  (this->Implementation).field0_0x0.DebugPtr = (UDS_PlayerIconSlotImplBase *)0x0;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  (this->FixedText_Possession).StringTableType = StringUi;
  (this->FixedText_Possession).StringTableID = 0x6c;
  return this;
}

// UDS_VM_Player_IconSlot @ 14b6bdf00

UDS_VM_Player_IconSlot * __thiscall
UDS_VM_Player_IconSlot::UDS_VM_Player_IconSlot
          (UDS_VM_Player_IconSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Player_IconSlot__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnhoveredEvent)._padding_ = '\0';
  (this->UnhoveredEvent).bIsCustomSelected = false;
  (this->UnhoveredEvent).bIsLacked = false;
  (this->UnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnhoveredEvent).Delegate.field_0x10 = 0;
  (this->ClickedEvent)._padding_ = '\0';
  (this->ClickedEvent).bIsCustomSelected = false;
  (this->ClickedEvent).bIsLacked = false;
  (this->ClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Possession).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Possession).StringEnumTableNameID.Number = 0;
  (this->FixedText_Possession).DateTime.Ticks = 0;
  (this->FixedText_Possession).TimeSpan.Ticks = 0;
  (this->FixedText_Possession).TimeExpressionType = None;
  (this->FixedText_Possession).IsExpression = false;
  (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Possession).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Possession).FormatArgs.ArrayNum = 0;
  (this->FixedText_Possession).FormatArgs.ArrayMax = 0;
  (this->Implementation).field0_0x0.DebugPtr = (UDS_PlayerIconSlotImplBase *)0x0;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  (this->FixedText_Possession).StringTableType = StringUi;
  (this->FixedText_Possession).StringTableID = 0x6c;
  return this;
}

// ~UDS_VM_Player_IconSlot @ 14b6bf490

void __thiscall UDS_VM_Player_IconSlot::~UDS_VM_Player_IconSlot(UDS_VM_Player_IconSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Player_IconSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Possession).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Possession).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Possession).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Possession).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickedEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickedEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UnhoveredEvent).Delegate);
  pvVar2 = *(void **)&(this->UnhoveredEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UnhoveredEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HoveredEvent).Delegate);
  pvVar2 = *(void **)&(this->HoveredEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoveredEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0ee0

IClassDescriptor * __thiscall
UDS_VM_Player_IconSlot::GetFieldNotificationDescriptor(UDS_VM_Player_IconSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Player_IconSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c15e0

UClass * __cdecl UDS_VM_Player_IconSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Player_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Player_IconSlot,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Player_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Player_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Player_IconSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Player_IconSlot @ 14b6c1a20

void __cdecl UDS_VM_Player_IconSlot::StaticRegisterNativesUDS_VM_Player_IconSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Player_IconSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execChangePanelVisibility @ 14b6c2790

void __cdecl
UDS_VM_Player_IconSlot::execChangePanelVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = ChangePanelVisibility((UDS_VM_Player_IconSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execIconID @ 14b6c2a30

void __cdecl UDS_VM_Player_IconSlot::execIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = IconID((UDS_VM_Player_IconSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsHave @ 14b6c2a70

void __cdecl UDS_VM_Player_IconSlot::execIsHave(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsHave((UDS_VM_Player_IconSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execNotHaveVisibility @ 14b6c2b30

void __cdecl
UDS_VM_Player_IconSlot::execNotHaveVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = NotHaveVisibility((UDS_VM_Player_IconSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execPlayerIconID @ 14b6c3010

void __cdecl
UDS_VM_Player_IconSlot::execPlayerIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = PlayerIconID((UDS_VM_Player_IconSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSelected @ 14b6c3050

void __cdecl UDS_VM_Player_IconSlot::execSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Selected((UDS_VM_Player_IconSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSelectedVisibility @ 14b6c3090

void __cdecl
UDS_VM_Player_IconSlot::execSelectedVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = SelectedVisibility((UDS_VM_Player_IconSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execUnLockVisibility @ 14b6c33f0

void __cdecl
UDS_VM_Player_IconSlot::execUnLockVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = UnLockVisibility((UDS_VM_Player_IconSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execUnlockable @ 14b6c3430

void __cdecl UDS_VM_Player_IconSlot::execUnlockable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Unlockable((UDS_VM_Player_IconSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execUsingVisibility @ 14b6c3470

void __cdecl
UDS_VM_Player_IconSlot::execUsingVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = UsingVisibility((UDS_VM_Player_IconSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// BindModel @ 14bf416a0

void __thiscall UDS_VM_Player_IconSlot::BindModel(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  UDS_PlayerEvent *pUVar2;
  
  pUVar2 = UDS_PlayerEvent::GetEvent();
  if (pUVar2 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnPlayerIconUpdate,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerIconSlotType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Player_IconSlot>
              (&pUVar2->OnPlayerIconUpdate,(UDS_VM_Player_IconSlot *)&stack0x00000008,
               (pmf_636e7966 *)this);
  }
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf4171b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
    return;
  }
  return;
}

// ChangePanelVisibility @ 14bf43f20

ESlateVisibility __thiscall
UDS_VM_Player_IconSlot::ChangePanelVisibility(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  char cVar5;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    cVar5 = (**(code **)(pUVar1->_padding_ + 0x2c8))();
    EVar4 = Collapsed;
    if (cVar5 != '\0') {
      EVar4 = SelfHitTestInvisible;
    }
    return EVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392283>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xa5,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

// IconID @ 14bf59bd0

int __thiscall UDS_VM_Player_IconSlot::IconID(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    return pUVar1->IconID;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392289>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0x9f,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return 0;
}

// IsHave @ 14bf5d160

bool __thiscall UDS_VM_Player_IconSlot::IsHave(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf5d1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(pUVar1->_padding_ + 0x2e0))();
    return (bool)uVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392247>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xc9,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// NotHaveVisibility @ 14bf5e420

ESlateVisibility __thiscall UDS_VM_Player_IconSlot::NotHaveVisibility(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  char cVar5;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    cVar5 = (**(code **)(pUVar1->_padding_ + 0x2e0))();
    EVar4 = SelfHitTestInvisible;
    if (cVar5 != '\0') {
      EVar4 = Collapsed;
    }
    return EVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392265>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xb7,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

// OnClickedEvent @ 14bf63070

void __thiscall
UDS_VM_Player_IconSlot::OnClickedEvent(UDS_VM_Player_IconSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerIconSlotImplBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392338>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x6e,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(pUVar1->_padding_ + 0x300))();
    local_10 = FFieldNotificationClassDescriptor::SelectedVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SelectedVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnHoveredEvent @ 14bf64190

void __thiscall
UDS_VM_Player_IconSlot::OnHoveredEvent(UDS_VM_Player_IconSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerIconSlotImplBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392354>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x5e,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(pUVar1->_padding_ + 0x2f0))();
    local_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnOpenPlayerIconPopup @ 14bf65a10

void __thiscall
UDS_VM_Player_IconSlot::OnOpenPlayerIconPopup(UDS_VM_Player_IconSlot *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_28.Object)->ViewModelTemplateKey = PlayerIcon_Popup;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14bf6a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_Player_IconSlot::OnSetViewModel
          (UDS_VM_Player_IconSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_PlayerIconSlotType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_PlayerIconSlotImplBase *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_448 [32];
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_418;
  TSharedPtr<FDS_ViewModelContext,1> local_408;
  FDS_ViewModelContext *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  undefined1 local_3e8 [128];
  undefined1 local_368 [128];
  undefined1 local_2e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_408.Object = param_1->Object;
  local_408.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PlayerIconSlot>(&local_418,&local_408);
  if (local_418.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_Player_IconSlot::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_268.Ptr,0x19,L"PlayerIconSlotType is Invalid.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    goto LAB_14bf6a482;
  }
  if (local_418.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar1 = (local_418.Object)->PlayerIconSlotType;
  this->PlayerIconSlotType = EVar1;
  if (EVar1 == Base) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PlayerIconSlotImplBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2e8,pUVar7);
    local_2e8._8_8_ = pUVar6;
    pUVar8 = (UDS_PlayerIconSlotImplBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
    if (local_2e8._64_8_ != 0) {
      plVar9 = (longlong *)(local_2e8 + 0x50);
      local_3e8._104_8_ = local_2e8._104_8_;
LAB_14bf6a41c:
      if ((longlong *)local_3e8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_3e8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else if (EVar1 == Changeable) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PlayerIconSlotImplChangeable_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_368,pUVar7);
    local_368._8_8_ = pUVar6;
    pUVar8 = (UDS_PlayerIconSlotImplBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_368);
    if (local_368._64_8_ != 0) {
      plVar9 = (longlong *)(local_368 + 0x50);
      local_3e8._104_8_ = local_368._104_8_;
      goto LAB_14bf6a41c;
    }
  }
  else {
    if (EVar1 != Selectable) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_Player_IconSlot::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_148.Ptr,0x35,L"PlayerIconSlotType is Invalid.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      goto LAB_14bf6a482;
    }
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PlayerIconSlotImplSelectable_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_3e8,pUVar7);
    local_3e8._8_8_ = pUVar6;
    pUVar8 = (UDS_PlayerIconSlotImplBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3e8);
    if (local_3e8._64_8_ != 0) {
      plVar9 = (longlong *)(local_3e8 + 0x50);
      goto LAB_14bf6a41c;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UDS_PlayerIconSlotImplBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->Implementation).field0_0x0.DebugPtr = pUVar8;
  if (pUVar8 != (UDS_PlayerIconSlotImplBase *)0x0) {
    pcVar3 = *(code **)(pUVar8->_padding_ + 0x2b0);
    local_3f8 = param_1->Object;
    local_3f0 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_3f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3f0->SharedReferenceCount = (atomic<int>)((int)local_3f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(pUVar8,&local_3f8);
    UpdateSlot(this);
  }
LAB_14bf6a482:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnhoveredEvent @ 14bf71c90

void __thiscall
UDS_VM_Player_IconSlot::OnUnhoveredEvent(UDS_VM_Player_IconSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerIconSlotImplBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5550909634220392346>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                       ,0x66,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(pUVar1->_padding_ + 0x2f8))();
    local_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdateEvent @ 14bf726f0

void __thiscall
UDS_VM_Player_IconSlot::OnUpdateEvent(UDS_VM_Player_IconSlot *this,EDS_PlayerIconSlotType param_1)

{
  longlong *plVar1;
  FName FStack_18;
  int iStack_10;
  
  if (this->PlayerIconSlotType != param_1) {
    return;
  }
  plVar1 = &this->_padding_;
  iStack_10 = FFieldNotificationClassDescriptor::PlayerIconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::SelectedVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectedVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::UnLockVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::UnLockVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::NotHaveVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotHaveVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::UsingVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::UsingVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::Selected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Selected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::IsHave.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsHave.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  return;
}

// PlayerIconID @ 14bf73fe0

int __thiscall UDS_VM_Player_IconSlot::PlayerIconID(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    return pUVar1->PlayerIconID;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392295>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0x99,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return 0;
}

// Selected @ 14bf792e0

bool __thiscall UDS_VM_Player_IconSlot::Selected(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf7932b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    return (bool)uVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392253>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xc3,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// SelectedVisibility @ 14bf79340

ESlateVisibility __thiscall UDS_VM_Player_IconSlot::SelectedVisibility(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  char cVar5;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    cVar5 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    EVar4 = Collapsed;
    if (cVar5 != '\0') {
      EVar4 = SelfHitTestInvisible;
    }
    return EVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392277>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xab,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

// UnLockVisibility @ 14bf84610

ESlateVisibility __thiscall UDS_VM_Player_IconSlot::UnLockVisibility(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  char cVar5;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    cVar5 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    EVar4 = Collapsed;
    if (cVar5 != '\0') {
      EVar4 = SelfHitTestInvisible;
    }
    return EVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392271>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xb1,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

// UnbindModel @ 14bf850d0

void __thiscall UDS_VM_Player_IconSlot::UnbindModel(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  UDS_PlayerEvent *pUVar2;
  
  pUVar2 = UDS_PlayerEvent::GetEvent();
  if (pUVar2 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnPlayerIconUpdate,
               this);
  }
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf85103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
    return;
  }
  return;
}

// Unlockable @ 14bf85d70

bool __thiscall UDS_VM_Player_IconSlot::Unlockable(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bf85dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    return (bool)uVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392241>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xcf,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// UpdateSlot @ 14bf8a4c0

void __thiscall UDS_VM_Player_IconSlot::UpdateSlot(UDS_VM_Player_IconSlot *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::PlayerIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ChangePanelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChangePanelVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SelectedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectedVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::UnLockVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UnLockVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::NotHaveVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotHaveVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::UsingVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UsingVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::Selected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Selected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsHave.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHave.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UsingVisibility @ 14bf8b540

ESlateVisibility __thiscall UDS_VM_Player_IconSlot::UsingVisibility(UDS_VM_Player_IconSlot *this)

{
  UDS_PlayerIconSlotImplBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  char cVar5;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerIconSlotImplBase *)0x0) {
    cVar5 = (**(code **)(pUVar1->_padding_ + 0x2e8))();
    EVar4 = Collapsed;
    if (cVar5 != '\0') {
      EVar4 = SelfHitTestInvisible;
    }
    return EVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5550909634220392259>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_Player_IconSlot.cpp"
                     ,0xbd,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

