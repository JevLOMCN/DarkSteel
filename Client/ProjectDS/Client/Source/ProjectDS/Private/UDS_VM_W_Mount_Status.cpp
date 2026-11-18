// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetClickChangeMountNickname_WrapperImpl @ 14b74a720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Mount_Status::SetClickChangeMountNickname_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WindowManager *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr FStackX_10;
  void *apvStackX_18 [2];
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool bStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStackX_10);
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_10);
  if (bVar1) {
    pcStack_88 = OnOpenNickNameChangePopup;
    uStack_80 = 0;
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    pFStack_38 = &FStack_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Mount_Status____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar2[3] = 0;
      apvStackX_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)apvStackX_18);
      puVar2[4] = pcStack_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_68);
    UDS_WindowManager::OpenWindow(this,PopupInput,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&pcStack_88);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (bStack_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&pcStack_88);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
  }
  return;
}

// StaticClass @ 14b74a730

UClass * __cdecl UDS_VM_W_Mount_Status::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Mount_Status",
               &Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Mount_Status,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Mount_Status>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Mount_Status>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton;
}

// UDS_VM_W_Mount_Status @ 14b74cd60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_Mount_Status * __thiscall
UDS_VM_W_Mount_Status::UDS_VM_W_Mount_Status(UDS_VM_W_Mount_Status *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Status__6B_;
  *(undefined8 *)&(this->ClickChangeMountNickname).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeMountNickname).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeMountNickname).Delegate.field_0x10 = 0;
  (this->CurMountData).field0_0x0.DebugPtr = (UDS_VM_MountData *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->MountStatusTitleText).StringTableType = None;
  (this->MountStatusTitleText).StringTableID = 0;
  (this->MountStatusTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountStatusTitleText).StringEnumTableNameID.Number = 0;
  (this->MountStatusTitleText).DateTime.Ticks = 0;
  (this->MountStatusTitleText).TimeSpan.Ticks = 0;
  (this->MountStatusTitleText).TimeExpressionType = None;
  (this->MountStatusTitleText).IsExpression = false;
  (this->MountStatusTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountStatusTitleText).UniqueString.Data.ArrayNum = 0;
  (this->MountStatusTitleText).UniqueString.Data.ArrayMax = 0;
  (this->MountStatusTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountStatusTitleText).FormatArgs.ArrayNum = 0;
  (this->MountStatusTitleText).FormatArgs.ArrayMax = 0;
  (this->MountGearTitleText).StringTableType = None;
  (this->MountGearTitleText).StringTableID = 0;
  (this->MountGearTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountGearTitleText).StringEnumTableNameID.Number = 0;
  (this->MountGearTitleText).DateTime.Ticks = 0;
  (this->MountGearTitleText).TimeSpan.Ticks = 0;
  (this->MountGearTitleText).TimeExpressionType = None;
  (this->MountGearTitleText).IsExpression = false;
  (this->MountGearTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountGearTitleText).UniqueString.Data.ArrayNum = 0;
  (this->MountGearTitleText).UniqueString.Data.ArrayMax = 0;
  (this->MountGearTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountGearTitleText).FormatArgs.ArrayNum = 0;
  (this->MountGearTitleText).FormatArgs.ArrayMax = 0;
  this->IsShowMountGear = false;
  this->CurMountUID = 0;
  this->NickNameMaxLength = 0;
  this->NickNameMinLength = 0;
  this->TargetEntityID = 0;
  this->IsCoolTimeNickName = false;
  (this->ClickChangeMountNickname)._padding_ = '\0';
  (this->ClickChangeMountNickname).bIsCustomSelected = false;
  (this->ClickChangeMountNickname).bIsLacked = false;
  (this->ClickChangeMountNickname).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_Mount_Status @ 14b74ce80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_Mount_Status * __thiscall
UDS_VM_W_Mount_Status::UDS_VM_W_Mount_Status
          (UDS_VM_W_Mount_Status *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Status__6B_;
  *(undefined8 *)&(this->ClickChangeMountNickname).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeMountNickname).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeMountNickname).Delegate.field_0x10 = 0;
  (this->CurMountData).field0_0x0.DebugPtr = (UDS_VM_MountData *)0x0;
  (this->VM_MountEquipItemList).field0_0x0.DebugPtr = (UDS_VM_MountEquipItemList *)0x0;
  (this->MountStatusTitleText).StringTableType = None;
  (this->MountStatusTitleText).StringTableID = 0;
  (this->MountStatusTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountStatusTitleText).StringEnumTableNameID.Number = 0;
  (this->MountStatusTitleText).DateTime.Ticks = 0;
  (this->MountStatusTitleText).TimeSpan.Ticks = 0;
  (this->MountStatusTitleText).TimeExpressionType = None;
  (this->MountStatusTitleText).IsExpression = false;
  (this->MountStatusTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountStatusTitleText).UniqueString.Data.ArrayNum = 0;
  (this->MountStatusTitleText).UniqueString.Data.ArrayMax = 0;
  (this->MountStatusTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountStatusTitleText).FormatArgs.ArrayNum = 0;
  (this->MountStatusTitleText).FormatArgs.ArrayMax = 0;
  (this->MountGearTitleText).StringTableType = None;
  (this->MountGearTitleText).StringTableID = 0;
  (this->MountGearTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MountGearTitleText).StringEnumTableNameID.Number = 0;
  (this->MountGearTitleText).DateTime.Ticks = 0;
  (this->MountGearTitleText).TimeSpan.Ticks = 0;
  (this->MountGearTitleText).TimeExpressionType = None;
  (this->MountGearTitleText).IsExpression = false;
  (this->MountGearTitleText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountGearTitleText).UniqueString.Data.ArrayNum = 0;
  (this->MountGearTitleText).UniqueString.Data.ArrayMax = 0;
  (this->MountGearTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountGearTitleText).FormatArgs.ArrayNum = 0;
  (this->MountGearTitleText).FormatArgs.ArrayMax = 0;
  this->IsShowMountGear = false;
  this->CurMountUID = 0;
  this->NickNameMaxLength = 0;
  this->NickNameMinLength = 0;
  this->TargetEntityID = 0;
  this->IsCoolTimeNickName = false;
  (this->ClickChangeMountNickname)._padding_ = '\0';
  (this->ClickChangeMountNickname).bIsCustomSelected = false;
  (this->ClickChangeMountNickname).bIsLacked = false;
  (this->ClickChangeMountNickname).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_Mount_Status @ 14b74ee70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::~UDS_VM_W_Mount_Status(UDS_VM_W_Mount_Status *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Mount_Status__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountGearTitleText).FormatArgs.AllocatorInstance.Data,
             (this->MountGearTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->MountGearTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountGearTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MountStatusTitleText).FormatArgs.AllocatorInstance.Data,
             (this->MountStatusTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->MountStatusTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountStatusTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChangeMountNickname).Delegate
            );
  pvVar2 = *(void **)&(this->ClickChangeMountNickname).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChangeMountNickname).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_Mount_Status::GetFieldNotificationDescriptor(UDS_VM_W_Mount_Status *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Mount_Status::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7519c0

UClass * __cdecl UDS_VM_W_Mount_Status::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Mount_Status",
               &Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Mount_Status,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Mount_Status>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Mount_Status>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Mount_Status.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Mount_Status @ 14b7523a0

void __cdecl UDS_VM_W_Mount_Status::StaticRegisterNativesUDS_VM_W_Mount_Status(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Mount_Status_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnActionCooltimeEnd @ 14b7533e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Mount_Status::execOnActionCooltimeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  EDS_CoolDownType local_res20 [2];
  FWeakObjectPtr local_28 [2];
  
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_28[0].ObjectIndex = 0;
  local_28[0].ObjectSerialNumber = 0;
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActionCooltimeEnd((UDS_VM_W_Mount_Status *)param_1,local_res20[0],bVar2,
                      (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_28[0]);
  return;
}

// BindModel @ 14c003130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::BindModel(UDS_VM_W_Mount_Status *this)

{
  FDS_EventDelegate<__int64_const_> *this_00;
  UDS_MountEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_TimeCoolDownManager *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  FTimespan local_18;
  
  local_18.Ticks = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    this_00 = &pUVar1->MountDataSlotSelectedChangeDel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_158._8_4_ = 0;
    local_158._0_8_ = SetCurMountUID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
    local_158._16_8_ = local_158._0_8_;
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_Mount_Status>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_VM_W_Mount_Status *)local_158,(pmf_e6f06c2c *)this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    local_158._8_4_ = 0;
    local_158._0_8_ = OnNickNameChangeCallBack;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->EditorbleTextStringDel
               ,this);
    local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
    local_158._16_8_ = local_158._0_8_;
    TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_Mount_Status>
              ((TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy> *)
               &pUVar2->EditorbleTextStringDel,(UDS_VM_W_Mount_Status *)local_158,
               (pmf_f0cd55f9 *)this);
  }
  pUVar3 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar3 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_VM_W_Mount_Status::BindModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x7d,L"timeCoolDownManager is nullptr.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangedTimeCoolDownEvent,this);
    local_158._8_4_ = 0;
    local_158._0_8_ = OnActionCooltimeEnd;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = OnActionCooltimeEnd;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_Mount_Status>
              (&pUVar3->OnChangedTimeCoolDownEvent,(UDS_VM_W_Mount_Status *)local_158,
               (pmf_d74bc000 *)this);
  }
  return;
}

// InitViewModel @ 14c01ebb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::InitViewModel(UDS_VM_W_Mount_Status *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_VM_MountData *pUVar4;
  
  if ((this->CurMountData).field0_0x0.DebugPtr == (UDS_VM_MountData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UDS_VM_MountData *)0x0))
    {
      (this->CurMountData).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UDS_VM_MountData *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8677150109173022621>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Mount_Status.cpp"
                           ,99,"false");
        if (!bVar2) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->CurMountData).field0_0x0.DebugPtr = pUVar4;
    }
  }
  iVar3 = DS_CommonDataHelper::MountNickMaxLength();
  this->NickNameMaxLength = iVar3;
  iVar3 = DS_CommonDataHelper::MountNickMinLength();
  this->NickNameMinLength = iVar3;
  return;
}

// OnActionCooltimeEnd @ 14c024d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Status::OnActionCooltimeEnd
          (UDS_VM_W_Mount_Status *this,EDS_CoolDownType param_1,bool param_2,
          TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> param_3)

{
  if ((!param_2) && (param_1 == ChangeMountNameCoolTime)) {
    this->IsCoolTimeNickName = false;
  }
  return;
}

// OnClickChangeMountNickname @ 14c026220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Status::OnClickChangeMountNickname
          (UDS_VM_W_Mount_Status *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr FStackX_10;
  UDS_VM_W_Mount_Status *apUStackX_18 [2];
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool bStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
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
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&FStackX_10);
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_10);
  if (bVar1) {
    pcStack_88 = OnOpenNickNameChangePopup;
    uStack_80 = 0;
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    pFStack_38 = &FStack_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Mount_Status____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_Mount_Status *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      apUStackX_18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_Mount_Status *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)apUStackX_18);
      puVar2[4] = pcStack_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_68);
    UDS_WindowManager::OpenWindow(this_00,PopupInput,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&pcStack_88);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (bStack_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&pcStack_88);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
  }
  return;
}

// OnNickNameChangeCallBack @ 14c02d0c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Status::OnNickNameChangeCallBack(UDS_VM_W_Mount_Status *this,FString *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<unsigned___int64_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_WindowManager *this_01;
  UDS_MountEvent *pUVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_88;
  FString local_80;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_70;
  FDestructionSentinel local_58;
  
  this_01 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14c02d126;
  }
  else {
    if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14c02d126;
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_01,PopupInput,local_res20,local_res18);
LAB_14c02d126:
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = FWeakObjectPtr::IsValid(&local_88);
  if (bVar6) {
    if (this->IsCoolTimeNickName == true) {
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      local_70._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x55746,Alert_System_01,&local_70);
    }
    else {
      local_80.Data.ArrayNum = (param_1->Data).ArrayNum;
      lVar13 = (longlong)local_80.Data.ArrayNum;
      pFVar4 = (param_1->Data).AllocatorInstance.Data;
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_80.Data.ArrayNum == 0) {
        local_80.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_80,
                   local_80.Data.ArrayNum,&local_80.Data.ArrayMax);
        memcpy(local_80.Data.AllocatorInstance.Data,pFVar4,lVar13 * 2);
      }
      pUVar10 = UDS_MountEvent::GetEvent();
      if (pUVar10 != (UDS_MountEvent *)0x0) {
        this_00 = &pUVar10->CurChangeNameMountUIDDel;
        bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar6) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_58);
          puVar1 = &(pUVar10->CurChangeNameMountUIDDel).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar6 = false;
          uVar12 = *(int *)&(pUVar10->CurChangeNameMountUIDDel).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar12) {
            lVar13 = (longlong)(int)uVar12 << 4;
            bVar6 = false;
            do {
              uVar9 = 0;
              if ((int)uVar12 < *(int *)&(pUVar10->CurChangeNameMountUIDDel).Delegate.field_0x10) {
                uVar9 = ~uVar12 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar2 = *(longlong *)&(pUVar10->CurChangeNameMountUIDDel).Delegate.field_0x8;
              if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
                  (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
                 (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
                bVar6 = true;
              }
              lVar13 = lVar13 + -0x10;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          puVar1 = &(pUVar10->CurChangeNameMountUIDDel).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar6) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
          }
        }
      }
      if (this->TargetEntityID != 0) {
        this->IsCoolTimeNickName = true;
        UDS_TimeCoolDownManager::StartCoolDown(ChangeMountNameCoolTime,0,0.0);
        pUVar11 = FWeakObjectPtr::Get(&local_88);
        FDS_MountService::RequestMountChangeNickName
                  (&this->TargetEntityID,&this->CurMountUID,&local_80,*(int *)&pUVar11[9].field_0x10
                  );
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// OnOpenNickNameChangePopup @ 14c02d8c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Status::OnOpenNickNameChangePopup
          (UDS_VM_W_Mount_Status *this,UDS_UserWidget *param_1)

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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x5574f);
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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x55753);
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

// OnSetViewModel @ 14c032d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_Mount_Status::OnSetViewModel
          (UDS_VM_W_Mount_Status *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FDS_EntityBase *this_00;
  undefined1 auStackY_308 [32];
  TSharedPtr<FDS_VMContext_MountManagement,1> local_2c8;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  (**(code **)(this->_padding_ + 0x2f8))(this);
  local_288.Object = param_1->Object;
  local_288.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_MountManagement>(&local_2c8,&local_288);
  if (local_2c8.Object == (FDS_VMContext_MountManagement *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8677150109173022683>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Mount_Status.cpp"
                       ,0x25,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_W_Mount_Status::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_278.Ptr,0x26,L"context is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
  }
  else {
    this_00 = FDS_EntityBase::GetEntityBase(&(local_2c8.Object)->TargetEntityID);
    if (this_00 == (FDS_EntityBase *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_Mount_Status::OnSetViewModel",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_158.Ptr,0x2d,
                   L"entityBase is nullptr. TargetEntityID : %llu");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
    }
    else {
      this->TargetEntityID = (local_2c8.Object)->TargetEntityID;
      bVar4 = FDS_EntityBase::IsMountNPC(this_00);
      this->IsShowMountGear = bVar4;
      local_2b0 = FFieldNotificationClassDescriptor::IsShowMountGear.BitNumber;
      local_2b8 = FFieldNotificationClassDescriptor::IsShowMountGear.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      this->IsCoolTimeNickName = false;
      (this->MountStatusTitleText).StringTableType = StringUi;
      (this->MountStatusTitleText).StringTableID = 0x55740;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(this->MountStatusTitleText).FormatArgs.AllocatorInstance.Data
                 ,(this->MountStatusTitleText).FormatArgs.ArrayNum);
      piVar1 = &(this->MountStatusTitleText).FormatArgs.ArrayMax;
      (this->MountStatusTitleText).FormatArgs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->MountStatusTitleText).FormatArgs.AllocatorInstance,0,piVar1);
      }
      local_2a0 = FFieldNotificationClassDescriptor::MountStatusTitleText.BitNumber;
      local_2a8 = FFieldNotificationClassDescriptor::MountStatusTitleText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
      (this->MountGearTitleText).StringTableType = StringUi;
      (this->MountGearTitleText).StringTableID = 0x55772;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(this->MountGearTitleText).FormatArgs.AllocatorInstance.Data,
                 (this->MountGearTitleText).FormatArgs.ArrayNum);
      piVar1 = &(this->MountGearTitleText).FormatArgs.ArrayMax;
      (this->MountGearTitleText).FormatArgs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->MountGearTitleText).FormatArgs.AllocatorInstance,0,piVar1);
      }
      local_290 = FFieldNotificationClassDescriptor::MountGearTitleText.BitNumber;
      local_298 = FFieldNotificationClassDescriptor::MountGearTitleText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
      (**(code **)(this->_padding_ + 0x2f0))(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenNickNameChangePopup @ 14c03bf90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::OpenNickNameChangePopup(UDS_VM_W_Mount_Status *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res10;
  UDS_VM_W_Mount_Status *local_res18 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
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
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    local_88 = OnOpenNickNameChangePopup;
    uStack_80 = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Mount_Status____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_Mount_Status *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_Mount_Status *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_res18);
      puVar2[4] = local_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_68);
    UDS_WindowManager::OpenWindow(this_00,PopupInput,pTVar4);
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
  return;
}

// SetCurMountUID @ 14c040d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::SetCurMountUID(UDS_VM_W_Mount_Status *this,long64 param_1)

{
  if (this->CurMountUID != param_1) {
    this->CurMountUID = param_1;
    UpdateCurMountData(this);
    return;
  }
  return;
}

// UnbindModel @ 14c048ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::UnbindModel(UDS_VM_W_Mount_Status *this)

{
  UDS_MountEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_TimeCoolDownManager *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MountDataSlotSelectedChangeDel,this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->EditorbleTextStringDel
               ,this);
  }
  pUVar3 = UDS_TimeCoolDownManager::GetInst();
  if (pUVar3 == (UDS_TimeCoolDownManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Mount_Status::UnbindModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x97,L"timeCoolDownManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangedTimeCoolDownEvent,this);
  }
  return;
}

// UpdateCurMountData @ 14c049640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Mount_Status::UpdateCurMountData(UDS_VM_W_Mount_Status *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UDS_VM_MountData *pUVar4;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *pUVar8;
  TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> TVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UDS_VM_MountEquipItemList *pUVar12;
  longlong *plVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  undefined1 auStackY_148 [32];
  undefined8 local_110;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((this->CurMountData).field0_0x0.DebugPtr == (UDS_VM_MountData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UDS_VM_MountData *)0x0))
    {
      (this->CurMountData).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UDS_VM_MountData *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8677150109173022541>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Mount_Status.cpp"
                           ,0xb3,"false");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->CurMountData).field0_0x0.DebugPtr = pUVar4;
    }
  }
  pFVar5 = ::operator_new(0x30);
  pFVar15 = (FDS_ViewModelContext *)0x0;
  pFVar14 = pFVar15;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
    *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
    (pFVar5->ViewModelName).ComparisonIndex = 0;
    (pFVar5->ViewModelName).Number = 0;
    pFVar5->_padding_ = (longlong)&___7FDS_VMContext_MountData__6B_;
    pFVar5[1]._padding_ = 0;
    local_110 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar5 + 1),(FObjectPtr)&local_110);
    *(undefined1 *)&pFVar5[1].DerivedStaticStruct = 0;
    pFVar14 = pFVar5;
  }
  pFVar6 = ::operator_new(0x20);
  pFVar5 = pFVar15;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_VMContext_MountData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar14;
    pFVar5 = pFVar6;
  }
  if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = FDS_VMContext_MountData::StaticStruct();
  *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar7;
  pUVar8 = UDS_ViewModelContextManager::GetInst();
  if (pUVar8 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_108.Object = pFVar14;
    local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelContextManager::RegisterContext(pUVar8,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
  }
  TVar9 = UDS_MountData::GetData
                    ((ulong64)local_c8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->CurMountUID,0)
                    );
  pFVar14[1]._padding_ = *(longlong *)TVar9.WeakPtr;
  pUVar4 = (this->CurMountData).field0_0x0.DebugPtr;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar5->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_e8.Object = pFVar14;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_e8);
  FVar1 = (FName)(this->VM_MountEquipItemList).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    pUVar10 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = Z_Construct_UClass_UDS_VM_MountEquipItemList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar11,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar10);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    local_b8._16_8_ = FVar1;
    pUVar12 = (UDS_VM_MountEquipItemList *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pUVar12 != (UDS_VM_MountEquipItemList *)0x0) {
      *(undefined1 *)((longlong)&pUVar12->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_VM_MountEquipItemList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_MountEquipItemList).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (UDS_VM_MountEquipItemList *)0x0) goto LAB_14c049a1c;
  }
  pFVar6 = ::operator_new(0x38);
  pFVar14 = pFVar15;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_MountEquipItemSlotList__6B_;
    pFVar6[1]._padding_ = 0;
    *(undefined8 *)&pFVar6[1].DerivedStaticStruct = 0;
    pFVar6[1].ViewModelName.ComparisonIndex = 0;
    pFVar6[1].ViewModelName.Number = 0;
    pFVar14 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountEquipItemSlotList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar14;
    pFVar15 = pFVar6;
  }
  if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_MountEquipItemSlotList::StaticStruct();
  *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar7;
  pUVar8 = UDS_ViewModelContextManager::GetInst();
  if (pUVar8 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar15 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar15->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_f8.Object = pFVar14;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
    UDS_ViewModelContextManager::RegisterContext(pUVar8,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  pFVar14->ViewModelTemplateKey = MountEquipItemList;
  pFVar14[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
  *(long64 *)&pFVar14[1].DerivedStaticStruct = this->CurMountUID;
  pUVar12 = (this->VM_MountEquipItemList).field0_0x0.DebugPtr;
  if (pFVar15 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar15->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_d8.Object = pFVar14;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
LAB_14c049a1c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

