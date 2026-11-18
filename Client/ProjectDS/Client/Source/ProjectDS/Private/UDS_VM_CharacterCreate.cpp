// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b5fc460

UClass * __cdecl UDS_VM_CharacterCreate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterCreate",
               &Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterCreate,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterCreate>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterCreate>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton;
}

// UDS_VM_CharacterCreate @ 14b600f70

UDS_VM_CharacterCreate * __thiscall
UDS_VM_CharacterCreate::UDS_VM_CharacterCreate(UDS_VM_CharacterCreate *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->UIVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterCreate__6B_;
  (this->DetailButtonText).StringTableID = 0;
  (this->DetailButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DetailButtonText).StringEnumTableNameID.Number = 0;
  (this->DetailButtonText).DateTime.Ticks = 0;
  (this->DetailButtonText).TimeSpan.Ticks = 0;
  (this->DetailButtonText).TimeExpressionType = None;
  (this->DetailButtonText).IsExpression = false;
  (this->DetailButtonText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DetailButtonText).UniqueString.Data.ArrayNum = 0;
  (this->DetailButtonText).UniqueString.Data.ArrayMax = 0;
  (this->DetailButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetailButtonText).FormatArgs.ArrayNum = 0;
  (this->DetailButtonText).FormatArgs.ArrayMax = 0;
  (this->CreateButtonText).StringTableType = None;
  (this->CreateButtonText).StringTableID = 0;
  (this->CreateButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CreateButtonText).StringEnumTableNameID.Number = 0;
  (this->CreateButtonText).DateTime.Ticks = 0;
  (this->CreateButtonText).TimeSpan.Ticks = 0;
  (this->CreateButtonText).TimeExpressionType = None;
  (this->CreateButtonText).IsExpression = false;
  (this->CreateButtonText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CreateButtonText).UniqueString.Data.ArrayNum = 0;
  (this->CreateButtonText).UniqueString.Data.ArrayMax = 0;
  (this->CreateButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateButtonText).FormatArgs.ArrayNum = 0;
  (this->CreateButtonText).FormatArgs.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_DetailClick)._padding_ = '\0';
  (this->BtnEvent_DetailClick).bIsCustomSelected = false;
  (this->BtnEvent_DetailClick).bIsLacked = false;
  (this->BtnEvent_DetailClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_DetailClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_DetailClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_DetailClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_CreateClick)._padding_ = '\0';
  (this->BtnEvent_CreateClick).bIsCustomSelected = false;
  (this->BtnEvent_CreateClick).bIsLacked = false;
  (this->BtnEvent_CreateClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_CreateClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_CreateClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_CreateClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_BackClick)._padding_ = '\0';
  (this->BtnEvent_BackClick).bIsCustomSelected = false;
  (this->BtnEvent_BackClick).bIsLacked = false;
  (this->BtnEvent_BackClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_BackClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_BackClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_BackClick).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBox_UIBtnClick).Delegate = 0;
  *(undefined8 *)&(this->CheckBox_UIBtnClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBox_UIBtnClick).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBox_EyeClick).Delegate = 0;
  *(undefined8 *)&(this->CheckBox_EyeClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBox_EyeClick).Delegate.field_0x10 = 0;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->RenderRoom).WeakPtr = (FWeakObjectPtr)0x0;
  this->WeaponID = 0;
  this->bIsSendCreate = false;
  (this->DetailButtonText).StringTableType = None;
  return this;
}

// UDS_VM_CharacterCreate @ 14b601130

UDS_VM_CharacterCreate * __thiscall
UDS_VM_CharacterCreate::UDS_VM_CharacterCreate
          (UDS_VM_CharacterCreate *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->UIVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterCreate__6B_;
  (this->DetailButtonText).StringTableID = 0;
  (this->DetailButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DetailButtonText).StringEnumTableNameID.Number = 0;
  (this->DetailButtonText).DateTime.Ticks = 0;
  (this->DetailButtonText).TimeSpan.Ticks = 0;
  (this->DetailButtonText).TimeExpressionType = None;
  (this->DetailButtonText).IsExpression = false;
  (this->DetailButtonText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DetailButtonText).UniqueString.Data.ArrayNum = 0;
  (this->DetailButtonText).UniqueString.Data.ArrayMax = 0;
  (this->DetailButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetailButtonText).FormatArgs.ArrayNum = 0;
  (this->DetailButtonText).FormatArgs.ArrayMax = 0;
  (this->CreateButtonText).StringTableType = None;
  (this->CreateButtonText).StringTableID = 0;
  (this->CreateButtonText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CreateButtonText).StringEnumTableNameID.Number = 0;
  (this->CreateButtonText).DateTime.Ticks = 0;
  (this->CreateButtonText).TimeSpan.Ticks = 0;
  (this->CreateButtonText).TimeExpressionType = None;
  (this->CreateButtonText).IsExpression = false;
  (this->CreateButtonText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CreateButtonText).UniqueString.Data.ArrayNum = 0;
  (this->CreateButtonText).UniqueString.Data.ArrayMax = 0;
  (this->CreateButtonText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreateButtonText).FormatArgs.ArrayNum = 0;
  (this->CreateButtonText).FormatArgs.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->BtnEvent_DetailClick)._padding_ = '\0';
  (this->BtnEvent_DetailClick).bIsCustomSelected = false;
  (this->BtnEvent_DetailClick).bIsLacked = false;
  (this->BtnEvent_DetailClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_DetailClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_DetailClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_DetailClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_CreateClick)._padding_ = '\0';
  (this->BtnEvent_CreateClick).bIsCustomSelected = false;
  (this->BtnEvent_CreateClick).bIsLacked = false;
  (this->BtnEvent_CreateClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_CreateClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_CreateClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_CreateClick).Delegate.field_0x10 = 0;
  (this->BtnEvent_BackClick)._padding_ = '\0';
  (this->BtnEvent_BackClick).bIsCustomSelected = false;
  (this->BtnEvent_BackClick).bIsLacked = false;
  (this->BtnEvent_BackClick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BtnEvent_BackClick).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_BackClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_BackClick).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBox_UIBtnClick).Delegate = 0;
  *(undefined8 *)&(this->CheckBox_UIBtnClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBox_UIBtnClick).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBox_EyeClick).Delegate = 0;
  *(undefined8 *)&(this->CheckBox_EyeClick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBox_EyeClick).Delegate.field_0x10 = 0;
  (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = (UDS_VM_ViewportInteractionButton *)0x0
  ;
  (this->RenderRoom).WeakPtr = (FWeakObjectPtr)0x0;
  this->WeaponID = 0;
  this->bIsSendCreate = false;
  (this->DetailButtonText).StringTableType = None;
  return this;
}

// ~UDS_VM_CharacterCreate @ 14b602100

void __thiscall UDS_VM_CharacterCreate::~UDS_VM_CharacterCreate(UDS_VM_CharacterCreate *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterCreate__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBox_EyeClick).Delegate);
  pvVar1 = *(void **)&(this->CheckBox_EyeClick).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBox_EyeClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBox_UIBtnClick).Delegate);
  pvVar1 = *(void **)&(this->CheckBox_UIBtnClick).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBox_UIBtnClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_BackClick).Delegate);
  pvVar1 = *(void **)&(this->BtnEvent_BackClick).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_BackClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_CreateClick).Delegate);
  pvVar1 = *(void **)&(this->BtnEvent_CreateClick).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_CreateClick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_DetailClick).Delegate);
  pvVar1 = *(void **)&(this->BtnEvent_DetailClick).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_DetailClick).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CreateButtonText).FormatArgs.AllocatorInstance.Data,
             (this->CreateButtonText).FormatArgs.ArrayNum);
  pFVar2 = (this->CreateButtonText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateButtonText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DetailButtonText).FormatArgs.AllocatorInstance.Data,
             (this->DetailButtonText).FormatArgs.ArrayNum);
  pFVar2 = (this->DetailButtonText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DetailButtonText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603d80

IClassDescriptor * __thiscall
UDS_VM_CharacterCreate::GetFieldNotificationDescriptor(UDS_VM_CharacterCreate *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharacterCreate::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6046a0

UClass * __cdecl UDS_VM_CharacterCreate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterCreate",
               &Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterCreate,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterCreate>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterCreate>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterCreate.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharacterCreate @ 14b6049a0

void __cdecl UDS_VM_CharacterCreate::StaticRegisterNativesUDS_VM_CharacterCreate(void)

{
  return;
}

// BindModel @ 14bdb02c0

void __thiscall UDS_VM_CharacterCreate::BindModel(UDS_VM_CharacterCreate *this)

{
  UDS_UIEvent *pUVar1;
  UDS_LoginEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->EditorbleTextStringDel
               ,this);
    TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_CharacterCreate>
              ((TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy> *)
               &pUVar1->EditorbleTextStringDel,(UDS_VM_CharacterCreate *)&stack0x00000010,
               (pmf_4f736046 *)this);
  }
  pUVar2 = UDS_LoginEvent::GetEvent();
  if (pUVar2 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnErrorEvent,this);
    TMulticastDelegateRegistration<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CharacterCreate>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnErrorEvent,(UDS_VM_CharacterCreate *)&stack0x00000010,
               (pmf_baceaaed *)this);
  }
  return;
}

// CloseWidget @ 14bdb3600

void __cdecl UDS_VM_CharacterCreate::CloseWidget(void)

{
  UDS_ContentManager *this;
  EDS_ContentsTabFrameType local_res8 [8];
  
  this = UDS_ContentManager::GetInst();
  if (this != (UDS_ContentManager *)0x0) {
    local_res8[0] = CreateCharacter;
    UDS_ContentManager::CloseContent(this,local_res8);
  }
  return;
}

// InitViewModel @ 14bdc6450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_CharacterCreate::InitViewModel(UDS_VM_CharacterCreate *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_ViewportInteractionButton *pUVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  UDS_VM_CharacterCreate *local_f8 [2];
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FDestructionSentinel local_d8;
  undefined1 *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FDS_Text::SetTextFromStringTable(&this->DetailButtonText,StringUi,0x47eb);
  FDS_Text::SetTextFromStringTable(&this->CreateButtonText,StringUi,0x47ec);
  FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0x47e5);
  local_e8 = OnCreateClick;
  uStack_e0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_CreateClick).Delegate,(FWriteAccessScope *)&local_d8);
  local_c0 = &(this->BtnEvent_CreateClick).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_f8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_f8);
    puVar1[4] = local_e8;
    puVar1[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  uStack_e0 = 0;
  local_e8 = OnDetailClick;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_DetailClick).Delegate,(FWriteAccessScope *)&local_d8);
  local_c0 = &(this->BtnEvent_DetailClick).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_f8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_f8);
    puVar1[4] = local_e8;
    puVar1[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  uStack_e0 = 0;
  local_e8 = OnBackClick;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_BackClick).Delegate,(FWriteAccessScope *)&local_d8);
  local_c0 = &(this->BtnEvent_BackClick).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_f8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_f8);
    puVar1[4] = local_e8;
    puVar1[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  uStack_e0 = 0;
  local_e8 = OnUICheckBoxClick;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->CheckBox_UIBtnClick).Delegate,(FWriteAccessScope *)&local_d8);
  local_c0 = &(this->CheckBox_UIBtnClick).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_f8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_f8);
    puVar1[4] = local_e8;
    puVar1[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  uStack_e0 = 0;
  local_e8 = OnEyeCheckBoxClick;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->CheckBox_EyeClick).Delegate,(FWriteAccessScope *)&local_d8);
  local_c0 = &(this->CheckBox_EyeClick).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_f8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharacterCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_f8);
    puVar1[4] = local_e8;
    puVar1[5] = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if ((this->VM_ViewportInteractionButton).field0_0x0.DebugPtr ==
      (UDS_VM_ViewportInteractionButton *)0x0) {
    local_f8[0] = (UDS_VM_CharacterCreate *)0x0;
    pUVar3 = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar3);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar5 = (UDS_VM_ViewportInteractionButton *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar6 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_ViewportInteractionButton *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_ViewportInteractionButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr = pUVar5;
    pUVar5->ActionType = Customize;
    pUVar5->RotateActionInfo = 0.0;
  }
  return;
}

// OnBackClick @ 14bdca320

void __thiscall UDS_VM_CharacterCreate::OnBackClick(UDS_VM_CharacterCreate *this,UObject *param_1)

{
  bool bVar1;
  ADS_GameMode *this_00;
  UDS_NetworkManager *this_01;
  FWeakObjectPtr local_res18 [2];
  
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    this_00 = (ADS_GameMode *)FWeakObjectPtr::Get(local_res18);
    ADS_GameMode::RestartGameState(this_00);
  }
  this_01 = UDS_NetworkManager::GetInst();
  if (this_01 != (UDS_NetworkManager *)0x0) {
    UDS_NetworkManager::Disconnect(this_01,None);
  }
  ADS_CustomizeRenderRoom::DestroyRenderRoom();
  return;
}

// OnComponentInfoChanged @ 14bdcdd10

void __thiscall
UDS_VM_CharacterCreate::OnComponentInfoChanged
          (UDS_VM_CharacterCreate *this,int param_1,FDS_CustomizeComponentInfo *param_2)

{
  FDS_CustomizingComponentTableRow *pFVar1;
  
  pFVar1 = FDS_CustomizingComponentTableRow::GetRef((longlong)param_1,true);
  if (pFVar1->CustomizingType == ListWeapon) {
    this->WeaponID = param_2->IntValue;
  }
  return;
}

// OnCreateCharacterSuccess @ 14bdcde40

void __thiscall UDS_VM_CharacterCreate::OnCreateCharacterSuccess(UDS_VM_CharacterCreate *this)

{
  return;
}

// OnCreateClick @ 14bdcde50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterCreate::OnCreateClick(UDS_VM_CharacterCreate *this,UObject *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FWeakObjectPtr local_res8;
  UDS_VM_CharacterCreate *local_res18 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  bVar1 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    (&this->RenderRoom,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->RenderRoom).WeakPtr);
    if (*(int *)&pUVar2[0x15].field_0x24 == 0) {
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x47e1,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_68);
    }
    else if (this->bIsSendCreate != true) {
      this_00 = UDS_WindowManager::GetInst();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_WindowManager *)0x0) {
          return;
        }
      }
      else {
        if (this_00 == (UDS_WindowManager *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        uStack_80 = 0;
        local_88 = OnOpenNickNameChangePopup;
        local_68 = (undefined1  [8])0x0;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_60.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_50);
        local_38 = &local_60;
        puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[2] = uVar4;
          *puVar3 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterCreate____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar3[3] = 0;
          local_res18[0] = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_res18);
          puVar3[4] = local_88;
          puVar3[5] = CONCAT44(uStack_7c,uStack_80);
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_88,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_68);
        UDS_WindowManager::OpenWindow(this_00,PopupInput,pTVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_88);
        if ((local_60.DelegateSize != 0) &&
           (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60,0,0,0x10);
          local_60.DelegateSize = 0;
        }
        if (local_78 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                     (FDestructionSentinel *)&local_88);
        }
        if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_68);
      }
    }
  }
  return;
}

// OnDetailClick @ 14bdce0a0

void __thiscall UDS_VM_CharacterCreate::OnDetailClick(UDS_VM_CharacterCreate *this,UObject *param_1)

{
  return;
}

// OnEyeCheckBoxClick @ 14bdced00

void __thiscall
UDS_VM_CharacterCreate::OnEyeCheckBoxClick
          (UDS_VM_CharacterCreate *this,UObject *param_1,bool param_2)

{
  return;
}

// OnNickNameChangeCallBack @ 14bdd0630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterCreate::OnNickNameChangeCallBack(UDS_VM_CharacterCreate *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_WindowManager *this_00;
  ADS_CustomizeRenderRoom *this_01;
  float local_res8 [2];
  uint local_res18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bdd0691;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bdd0691;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res8[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupInput,local_res18,local_res8);
LAB_14bdd0691:
  bVar3 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    (&this->RenderRoom,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_431584216849841943>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterCreate.cpp"
                       ,0xe9,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this->bIsSendCreate = true;
    this_01 = (ADS_CustomizeRenderRoom *)FWeakObjectPtr::Get(&(this->RenderRoom).WeakPtr);
    ADS_CustomizeRenderRoom::CreateCharacter(this_01,param_1);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenNickNameChangePopup @ 14bdd0720

void __thiscall
UDS_VM_CharacterCreate::OnOpenNickNameChangePopup
          (UDS_VM_CharacterCreate *this,UDS_UserWidget *param_1)

{
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> local_78;
  FDS_Text local_68;
  
  MakeContext<FDS_ViewModelContext_CommonEditorblePopup>(&local_78);
  if (local_78.Object != (FDS_ViewModelContext_CommonEditorblePopup *)0x0) {
    *(undefined4 *)&(local_78.Object)->_padding_ = 0x199;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    local_68.StringTableType = None;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x47e7);
    FDS_Text::operator=(&(local_78.Object)->TitleText,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x47e8);
    FDS_Text::operator=(&(local_78.Object)->ContextText,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x47e9);
    FDS_Text::operator=(&(local_78.Object)->HintText,&local_68);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,
               (TSharedPtr<FDS_ViewModelContext,1> *)&local_78,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return;
}

// OnPacketError @ 14bdd1490

void __thiscall
UDS_VM_CharacterCreate::OnPacketError(UDS_VM_CharacterCreate *this,FDS_ErrorMessageInfo *param_1)

{
  if ((param_1->ErrorCode == DuplicatedNickname) || (param_1->ErrorCode == InvalidNickname)) {
    this->bIsSendCreate = false;
  }
  return;
}

// OnSetViewModel @ 14bdd5460

void __thiscall
UDS_VM_CharacterCreate::OnSetViewModel
          (UDS_VM_CharacterCreate *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  UObject *pUVar5;
  TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *pTVar6;
  UClass *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_res18;
  UObject *local_res20;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pFVar1 = &param_1->SharedReferenceCount;
  pTVar3 = pFVar1->ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) goto LAB_14bdd5578;
  bVar4 = TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>::UEOpEquals
                    (&(local_38.Object)->ContentArguments,(void *)0x0);
  if (bVar4) goto LAB_14bdd5578;
  pUVar5 = FWeakObjectPtr::Get(&((local_38.Object)->ContentArguments).WeakPtr);
  ::FName::FName(&local_res18,"RenderRoom");
  pTVar6 = TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)(pUVar5 + 0xf),local_res18);
  if (pTVar6 == (TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
  }
  else {
    local_res10.ObjectIndex = *(int *)&pTVar6->field_0x8;
    local_res10.ObjectSerialNumber = *(int *)&pTVar6->field_0xc;
  }
  local_res20 = FWeakObjectPtr::Get(&local_res10);
  if (local_res20 == (UObject *)0x0) {
LAB_14bdd554a:
    local_res20 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_ADS_CustomizeRenderRoom_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&local_res20->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res20->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bdd554a;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&(this->RenderRoom).WeakPtr,(FObjectPtr)&local_res20);
LAB_14bdd5578:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// OnUICheckBoxClick @ 14bddefb0

void __thiscall
UDS_VM_CharacterCreate::OnUICheckBoxClick
          (UDS_VM_CharacterCreate *this,UObject *param_1,bool param_2)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  EVar1 = SelfHitTestInvisible;
  if (!param_2) {
    EVar1 = Collapsed;
  }
  this->UIVisibility = EVar1;
  local_10 = FFieldNotificationClassDescriptor::UIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OpenWidgetAsync @ 14bde1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UDS_VM_CharacterCreate::OpenWidgetAsync
          (TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  UDS_ContentManager *this;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8;
  undefined1 auStack_e8 [32];
  TPairInitializer<FName_const_&,UObject_*_&> local_c8;
  FName local_b8;
  FName *local_b0;
  UObject ***local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_res8 = param_1.WeakPtr;
  this = UDS_ContentManager::GetInst();
  if (this != (UDS_ContentManager *)0x0) {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    local_c8.Value = (UObject **)FWeakObjectPtr::Get(&local_res8);
    ::FName::FName(&local_b8,"RenderRoom");
    uVar2 = ::GetTypeHash(local_b8.ComparisonIndex.Value);
    if (*(int *)&pUVar4[0xf].field_0x8 != *(int *)&pUVar4[0x10].field_0xc) {
      puVar7 = *(undefined1 **)&pUVar4[0x10].field_0x18;
      if (*(undefined1 **)&pUVar4[0x10].field_0x18 == (undefined1 *)0x0) {
        puVar7 = &pUVar4[0x10].field_0x10;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&pUVar4[0x10].field_0x20 - 1U & local_b8.Number + uVar2) *
                                4);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)
                 &((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)(pUVar4 + 0xf))->Elements;
        do {
          if (*(FName *)(lVar1 + (longlong)iVar3 * 0x18) == local_b8) goto LAB_14bde1ebe;
          iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    local_b0 = &local_b8;
    local_a8 = &local_c8.Value;
    TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UObject_*_&>_>
              ((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)(pUVar4 + 0xf),&local_c8,(bool *)&local_b0);
LAB_14bde1ebe:
    local_c8.Value = (UObject **)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_c8.Key._0_4_ = 100;
    UDS_ContentManager::OpenContent
              (this,(EDS_ContentsTabFrameType *)&local_c8,
               (TObjectPtr<UDS_ContentArguments>)&local_c8.Value);
  }
  return;
}

// UnbindModel @ 14bdebf50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharacterCreate::UnbindModel(UDS_VM_CharacterCreate *this)

{
  UDS_VM_ViewportInteractionButton *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_CharacterUIEvent *pUVar3;
  UDS_LoginEvent *pUVar4;
  UDS_LanguageManager *pUVar5;
  
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->EditorbleTextStringDel
               ,this);
  }
  pUVar3 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar3 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnCustomizeComponentInfoChanged,this);
  }
  pUVar4 = UDS_LoginEvent::GetEvent();
  if (pUVar4 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnErrorEvent,this);
  }
  pUVar1 = (this->VM_ViewportInteractionButton).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_VM_ViewportInteractionButton *)0x0) {
    pUVar1->ActionType = None;
    pUVar1->RotateActionInfo = 0.0;
  }
  pUVar5 = UDS_LanguageManager::GetInst();
  if (pUVar5 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLanguageChanged,this
              );
  }
  return;
}

