// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetCloseClickEvent_WrapperImpl @ 14b689f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemEnchantResult::SetCloseClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  FWeakObjectPtr FStack_18;
  UDS_WindowManager *pUStack_10;
  
  pUStack_10 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_10 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_10);
  }
  FStack_18.ObjectIndex = 0;
  FStack_18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_10 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_10);
  }
  FWeakObjectPtr::operator=(&FStack_18,(FObjectPtr)&pUStack_10);
  bVar2 = FWeakObjectPtr::IsValid(&FStack_18);
  if (bVar2) {
    this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_18);
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,ItemEnchantResult,auStackX_20,afStackX_18);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7177442989352943654>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchantResult.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b689f50

UClass * __cdecl UDS_VM_ItemEnchantResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchantResult",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchantResult,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchantResult>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchantResult>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton;
}

// UDS_VM_ItemEnchantResult @ 14b68d7e0

UDS_VM_ItemEnchantResult * __thiscall
UDS_VM_ItemEnchantResult::UDS_VM_ItemEnchantResult
          (UDS_VM_ItemEnchantResult *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantResult__6B_;
  *(undefined8 *)&(this->CloseClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseClickEvent).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Touch).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Touch).StringEnumTableNameID.Number = 0;
  (this->FixedText_Touch).DateTime.Ticks = 0;
  (this->FixedText_Touch).TimeSpan.Ticks = 0;
  (this->FixedText_Touch).TimeExpressionType = None;
  (this->FixedText_Touch).IsExpression = false;
  (this->FixedText_Touch).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Touch).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Touch).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Touch).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Touch).FormatArgs.ArrayNum = 0;
  (this->FixedText_Touch).FormatArgs.ArrayMax = 0;
  (this->CloseClickEvent)._padding_ = '\0';
  (this->CloseClickEvent).bIsCustomSelected = false;
  (this->CloseClickEvent).bIsLacked = false;
  (this->CloseClickEvent).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0xa033;
  (this->FixedText_Touch).StringTableType = StringUi;
  (this->FixedText_Touch).StringTableID = 0x9e63;
  return this;
}

// UDS_VM_ItemEnchantResult @ 14b68d930

UDS_VM_ItemEnchantResult * __thiscall
UDS_VM_ItemEnchantResult::UDS_VM_ItemEnchantResult
          (UDS_VM_ItemEnchantResult *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantResult__6B_;
  *(undefined8 *)&(this->CloseClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseClickEvent).Delegate.field_0x10 = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Touch).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Touch).StringEnumTableNameID.Number = 0;
  (this->FixedText_Touch).DateTime.Ticks = 0;
  (this->FixedText_Touch).TimeSpan.Ticks = 0;
  (this->FixedText_Touch).TimeExpressionType = None;
  (this->FixedText_Touch).IsExpression = false;
  (this->FixedText_Touch).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Touch).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Touch).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Touch).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Touch).FormatArgs.ArrayNum = 0;
  (this->FixedText_Touch).FormatArgs.ArrayMax = 0;
  (this->CloseClickEvent)._padding_ = '\0';
  (this->CloseClickEvent).bIsCustomSelected = false;
  (this->CloseClickEvent).bIsLacked = false;
  (this->CloseClickEvent).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0xa033;
  (this->FixedText_Touch).StringTableType = StringUi;
  (this->FixedText_Touch).StringTableID = 0x9e63;
  return this;
}

// ~UDS_VM_ItemEnchantResult @ 14b68e2f0

void __thiscall UDS_VM_ItemEnchantResult::~UDS_VM_ItemEnchantResult(UDS_VM_ItemEnchantResult *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantResult__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Touch).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Touch).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Touch).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Touch).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseClickEvent).Delegate);
  pvVar2 = *(void **)&(this->CloseClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b690200

IClassDescriptor * __thiscall
UDS_VM_ItemEnchantResult::GetFieldNotificationDescriptor(UDS_VM_ItemEnchantResult *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemEnchantResult::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690e20

UClass * __cdecl UDS_VM_ItemEnchantResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchantResult",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchantResult,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchantResult>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchantResult>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchantResult.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemEnchantResult @ 14b691270

void __cdecl UDS_VM_ItemEnchantResult::StaticRegisterNativesUDS_VM_ItemEnchantResult(void)

{
  return;
}

// BindModel @ 14be11b50

void __thiscall UDS_VM_ItemEnchantResult::BindModel(UDS_VM_ItemEnchantResult *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be11b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    return;
  }
  return;
}

// OnCloseClickEvent @ 14be2d080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemEnchantResult::OnCloseClickEvent
          (UDS_VM_ItemEnchantResult *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_18;
  UDS_WindowManager *local_10;
  
  local_10 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UDS_WindowManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UDS_WindowManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_10);
  bVar2 = FWeakObjectPtr::IsValid(&local_18);
  if (bVar2) {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_18);
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,ItemEnchantResult,local_res20,local_res18);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7177442989352943654>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_ItemEnchantResult.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14be39610

void __thiscall
UDS_VM_ItemEnchantResult::OnSetViewModel
          (UDS_VM_ItemEnchantResult *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName local_res8;
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
  ::FName::FName(&local_res8,L"Open_Anim");
  (this->AnimationEvent).AnimationName = local_res8;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_18.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be554c0

void __thiscall UDS_VM_ItemEnchantResult::UnbindModel(UDS_VM_ItemEnchantResult *this)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = (UObject *)this->_padding_;
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
    }
    pUVar1 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if ((pvVar2 == (void *)0x0) || (*(char *)((longlong)pvVar2 + 0x10) != '\x01')) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2d0))();
    }
  }
  return;
}

