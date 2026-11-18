// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickEventField_WrapperImpl @ 14b626f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Common_Tab::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
  *this;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  UDS_UIEvent *pUVar10;
  longlong lVar11;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar12;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr aFStack_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x120));
  if (bVar4) {
    pUVar10 = UDS_UIEvent::GetEvent();
    if (pUVar10 != (UDS_UIEvent *)0x0) {
      aFStack_168[0] = *(FWeakObjectPtr *)((longlong)param_1 + 0x120);
      this = &(pUVar10->OnClickTabIndex).Subscriptions;
      iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)this,aFStack_168[0].ObjectSerialNumber ^ aFStack_168[0].ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)aFStack_168);
      if (iVar7 != -1) {
        lVar11 = (longlong)iVar7 * 0x50 + *(longlong *)&this->field_0x0;
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar11 + 8);
        if (lVar11 == 0) {
          this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)this_00);
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
          bVar4 = false;
          uVar12 = (this_00->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar12) {
            lVar11 = (longlong)(int)uVar12 << 4;
            bVar4 = false;
            do {
              uVar8 = 0;
              if ((int)uVar12 < (this_00->InvocationList).ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar1 + lVar11 + 8) == 0) ||
                  (plVar2 = *(longlong **)(pFVar1 + lVar11), plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar11 = lVar11 + -0x10;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (this_00,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
        }
      }
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_VM_Common_Tab::OnClickEventField",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,TStack_158.Ptr,0x71,L"TabGroup.IsValid() == false");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b626f30

void __cdecl UDS_VM_Common_Tab::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  SetIsSelected(param_1,*(bool *)param_2);
  return;
}

// SetbIsDisabled_WrapperImpl @ 14b626f40

void __cdecl UDS_VM_Common_Tab::SetbIsDisabled_WrapperImpl(void *param_1,void *param_2)

{
  SetIsDisabled(param_1,*(bool *)param_2);
  return;
}

// SetTabText_WrapperImpl @ 14b626f50

void __cdecl UDS_VM_Common_Tab::SetTabText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 200),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::TabText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TabText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b626f60

UClass * __cdecl UDS_VM_Common_Tab::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Tab",
               &Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Tab,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton;
}

// UDS_VM_Common_Tab @ 14b62cb50

UDS_VM_Common_Tab * __thiscall
UDS_VM_Common_Tab::UDS_VM_Common_Tab(UDS_VM_Common_Tab *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->TabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Tab__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  this->bIsSelected = false;
  this->bIsDisabled = false;
  (this->TabText).StringTableType = None;
  (this->TabText).StringTableID = 0;
  (this->TabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabText).StringEnumTableNameID.Number = 0;
  (this->TabText).DateTime.Ticks = 0;
  (this->TabText).TimeSpan.Ticks = 0;
  (this->TabText).TimeExpressionType = None;
  (this->TabText).IsExpression = false;
  (this->TabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).UniqueString.Data.ArrayNum = 0;
  (this->TabText).UniqueString.Data.ArrayMax = 0;
  (this->TabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).FormatArgs.ArrayNum = 0;
  (this->TabText).FormatArgs.ArrayMax = 0;
  (this->Reddot_VM).field0_0x0.DebugPtr = (UDS_ViewModelBase *)0x0;
  (this->TabGroup).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_Common_Tab @ 14b62cc20

UDS_VM_Common_Tab * __thiscall
UDS_VM_Common_Tab::UDS_VM_Common_Tab(UDS_VM_Common_Tab *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->TabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Tab__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  this->bIsSelected = false;
  this->bIsDisabled = false;
  (this->TabText).StringTableType = None;
  (this->TabText).StringTableID = 0;
  (this->TabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabText).StringEnumTableNameID.Number = 0;
  (this->TabText).DateTime.Ticks = 0;
  (this->TabText).TimeSpan.Ticks = 0;
  (this->TabText).TimeExpressionType = None;
  (this->TabText).IsExpression = false;
  (this->TabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).UniqueString.Data.ArrayNum = 0;
  (this->TabText).UniqueString.Data.ArrayMax = 0;
  (this->TabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).FormatArgs.ArrayNum = 0;
  (this->TabText).FormatArgs.ArrayMax = 0;
  (this->Reddot_VM).field0_0x0.DebugPtr = (UDS_ViewModelBase *)0x0;
  (this->TabGroup).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_Common_Tab @ 14b62ee00

void __thiscall UDS_VM_Common_Tab::~UDS_VM_Common_Tab(UDS_VM_Common_Tab *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Tab__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TabText).FormatArgs.AllocatorInstance.Data,
             (this->TabText).FormatArgs.ArrayNum);
  pFVar1 = (this->TabText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TabText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar2 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631910

IClassDescriptor * __thiscall
UDS_VM_Common_Tab::GetFieldNotificationDescriptor(UDS_VM_Common_Tab *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Tab::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632420

UClass * __cdecl UDS_VM_Common_Tab::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Tab",
               &Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Tab,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Tab.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Tab @ 14b632ff0

void __cdecl UDS_VM_Common_Tab::StaticRegisterNativesUDS_VM_Common_Tab(void)

{
  return;
}

// BindModel @ 14bdb12c0

void __thiscall UDS_VM_Common_Tab::BindModel(UDS_VM_Common_Tab *this)

{
  UDS_UIEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  FWeakObjectPtr local_res10 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    local_res10[0] = (this->TabGroup).WeakPtr;
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->OnSelectedTabIndex).Subscriptions,
                        local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Common_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )pTVar2,(UDS_VM_Common_Tab *)(local_res10 + 1),(pmf_21a72128 *)this);
    local_res10[0] = (this->TabGroup).WeakPtr;
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->OnChangedTabReddot).Subscriptions,
                        local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Common_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_Common_Tab *)(local_res10 + 1),(pmf_abea59c0 *)this);
    local_res10[0] = (this->TabGroup).WeakPtr;
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->OnChangedTabText).Subscriptions,
                        local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Common_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_Common_Tab *)(local_res10 + 1),(pmf_df372721 *)this);
  }
  return;
}

// InitViewModel @ 14bdc6ac0

void __thiscall UDS_VM_Common_Tab::InitViewModel(UDS_VM_Common_Tab *this)

{
  UClass *pUVar1;
  UDS_ViewModelBase *pUVar2;
  
  if ((this->Reddot_VM).field0_0x0.DebugPtr == (UDS_ViewModelBase *)0x0) {
    pUVar1 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
    pUVar2 = NewObject<UDS_ViewModelBase>
                       ((UObject *)this,pUVar1,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (pUVar2 != (UDS_ViewModelBase *)0x0) {
      pUVar2->bIsCloseInit = false;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_ViewModelBase *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Reddot_VM).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// OnChangedTabReddot @ 14bdcaab0

void __thiscall
UDS_VM_Common_Tab::OnChangedTabReddot(UDS_VM_Common_Tab *this,int param_1,bool param_2)

{
  if (this->TabIndex == param_1) {
    SetIsReddot(this,param_2);
    return;
  }
  return;
}

// OnChangedTabText @ 14bdcaad0

void __thiscall
UDS_VM_Common_Tab::OnChangedTabText(UDS_VM_Common_Tab *this,int param_1,FDS_Text *param_2)

{
  FName local_18;
  int local_10;
  
  if (this->TabIndex == param_1) {
    FDS_Text::operator=(&this->TabText,param_2);
    local_10 = FFieldNotificationClassDescriptor::TabText.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TabText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickEventField @ 14bdcc760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_Tab::OnClickEventField(UDS_VM_Common_Tab *this,FDS_ButtonEventField *param_1)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  UDS_UIEvent *pUVar10;
  longlong lVar11;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  uint uVar12;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar4 = FWeakObjectPtr::IsValid(&(this->TabGroup).WeakPtr);
  if (bVar4) {
    pUVar10 = UDS_UIEvent::GetEvent();
    if (pUVar10 != (UDS_UIEvent *)0x0) {
      local_168[0] = (this->TabGroup).WeakPtr;
      this_00 = &(pUVar10->OnClickTabIndex).Subscriptions;
      iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)this_00,local_168[0].ObjectSerialNumber ^ local_168[0].ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_168);
      if (iVar7 != -1) {
        lVar11 = (longlong)iVar7 * 0x50 + *(longlong *)&this_00->field_0x0;
        this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar11 + 8);
        if (lVar11 == 0) {
          this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_01 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)this_01);
          this_01->InvocationListLockCount = this_01->InvocationListLockCount + 1;
          bVar4 = false;
          uVar12 = (this_01->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar12) {
            lVar11 = (longlong)(int)uVar12 << 4;
            bVar4 = false;
            do {
              uVar8 = 0;
              if ((int)uVar12 < (this_01->InvocationList).ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar1 = (this_01->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar1 + lVar11 + 8) == 0) ||
                  (plVar2 = *(longlong **)(pFVar1 + lVar11), plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar11 = lVar11 + -0x10;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          this_01->InvocationListLockCount = this_01->InvocationListLockCount + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (this_01,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
        }
      }
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Common_Tab::OnClickEventField",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0x71,L"TabGroup.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// OnSelectedTabIndex @ 14bdd1eb0

void __thiscall
UDS_VM_Common_Tab::OnSelectedTabIndex(UDS_VM_Common_Tab *this,int param_1,int param_2)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  bVar1 = this->TabIndex == param_1;
  if (this->bIsSelected != bVar1) {
    this->bIsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bdd8520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_Tab::OnSetViewModel
          (UDS_VM_Common_Tab *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_3f8 [32];
  TSharedPtr<FDS_ViewModelContext_Tab,1> local_3c8;
  FName local_3b8;
  int local_3b0;
  FName local_3a8;
  int local_3a0;
  TSharedPtr<FDS_ViewModelContext,1> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_398.Object = param_1->Object;
  local_398.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Tab>(&local_3c8,&local_398);
  if (local_3c8.Object == (FDS_ViewModelContext_Tab *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_Common_Tab::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_388.Ptr,0x13,L"tabContext.IsValid() == false")
      ;
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_3c8.Object == (FDS_ViewModelContext_Tab *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((local_3c8.Object)->TabIndex < 0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_Common_Tab::OnSetViewModel",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_268.Ptr,0x19,L"tabContext->TabIndex < 0");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3c8.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar4 = FWeakObjectPtr::IsValid(&((local_3c8.Object)->TabGroup).WeakPtr);
      if (bVar4) {
        (this->TabGroup).WeakPtr = ((local_3c8.Object)->TabGroup).WeakPtr;
        this->TabIndex = (local_3c8.Object)->TabIndex;
        SetTabText(this,&(local_3c8.Object)->TabText);
        FVar3 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        if (this->bIsSelected != (local_3c8.Object)->IsSelected) {
          local_3b0 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
          this->bIsSelected = (local_3c8.Object)->IsSelected;
          local_3b8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3b8);
        }
        FVar3 = FFieldNotificationClassDescriptor::bIsDisabled.FieldName;
        if (this->bIsDisabled != (local_3c8.Object)->IsDisabled) {
          local_3a0 = FFieldNotificationClassDescriptor::bIsDisabled.BitNumber;
          this->bIsDisabled = (local_3c8.Object)->IsDisabled;
          local_3a8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
        }
        SetIsReddot(this,(local_3c8.Object)->IsReddot);
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_Common_Tab::OnSetViewModel",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x1f,L"tabContext->TabGroup.IsValid() == false")
          ;
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3c8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsDisabled @ 14bde6690

void __thiscall UDS_VM_Common_Tab::SetIsDisabled(UDS_VM_Common_Tab *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsDisabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDisabled.FieldName;
  if (this->bIsDisabled != param_1) {
    this->bIsDisabled = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsReddot @ 14bde69d0

void __thiscall UDS_VM_Common_Tab::SetIsReddot(UDS_VM_Common_Tab *this,bool param_1)

{
  UDS_ViewModelBase *pUVar1;
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  pUVar1 = (this->Reddot_VM).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ViewModelBase *)0x0) {
    if (param_1) {
      if (pUVar1->Visibility == SelfHitTestInvisible) {
        return;
      }
      pUVar1->Visibility = SelfHitTestInvisible;
    }
    else {
      if (pUVar1->Visibility == Collapsed) {
        return;
      }
      pUVar1->Visibility = Collapsed;
    }
    (**(code **)(pUVar1->_padding_ + 0x38))(&pUVar1->_padding_,&local_18);
  }
  return;
}

// SetIsSelected @ 14bde6ca0

void __thiscall UDS_VM_Common_Tab::SetIsSelected(UDS_VM_Common_Tab *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != param_1) {
    this->bIsSelected = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTabText @ 14bde95d0

void __thiscall UDS_VM_Common_Tab::SetTabText(UDS_VM_Common_Tab *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->TabText,param_1);
  local_10 = FFieldNotificationClassDescriptor::TabText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bdec970

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_Tab::UnbindModel(UDS_VM_Common_Tab *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_UIEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_Common_Tab>(&pUVar2->OnSelectedTabIndex,this);
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,bool_const_>::
    Remove<UDS_VM_Common_Tab>(&pUVar2->OnChangedTabReddot,this);
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,FDS_Text_const_&>::
    Remove<UDS_VM_Common_Tab>(&pUVar2->OnChangedTabText,this);
  }
  return;
}

