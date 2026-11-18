// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetWidgetCloseEvent_WrapperImpl @ 14b6d43d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ResultUI_Normal::SetWidgetCloseEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,CommonRewardResultNormal,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b6d43e0

UClass * __cdecl UDS_VM_ResultUI_Normal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ResultUI_Normal",
               &Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton,
               StaticRegisterNativesUDS_VM_ResultUI_Normal,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ResultUI_Normal>,
               InternalVTableHelperCtorCaller<UDS_VM_ResultUI_Normal>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton;
}

// UDS_VM_ResultUI_Normal @ 14b6d9100

UDS_VM_ResultUI_Normal * __thiscall
UDS_VM_ResultUI_Normal::UDS_VM_ResultUI_Normal(UDS_VM_ResultUI_Normal *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ResultAnimationStartEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FixedText_Close).StringTableType = StringUi;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Normal__6B_;
  (this->EntryBindingEventField_Success).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Success).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Success).UserObjectList.ArrayMax = 0;
  (this->WidgetCloseEvent)._padding_ = '\0';
  (this->WidgetCloseEvent).bIsCustomSelected = false;
  (this->WidgetCloseEvent).bIsLacked = false;
  (this->WidgetCloseEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->WidgetCloseEvent).Delegate = 0;
  *(undefined8 *)&(this->WidgetCloseEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->WidgetCloseEvent).Delegate.field_0x10 = 0;
  (this->ResultAnimationStartEvent).AnimationName.ComparisonIndex = 0;
  (this->ResultAnimationStartEvent).AnimationName.Number = 0;
  (this->ResultAnimationStartEvent).AnimationPlayTime = 0.0;
  (this->ResultAnimationStartEvent).AnimationEventType = None;
  (this->ResultAnimationStartEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation.field_0x10 = 0;
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
  (this->FixedText_Close).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Close).StringEnumTableNameID.Number = 0;
  (this->FixedText_Close).DateTime.Ticks = 0;
  (this->FixedText_Close).TimeSpan.Ticks = 0;
  (this->FixedText_Close).TimeExpressionType = None;
  (this->FixedText_Close).IsExpression = false;
  (this->FixedText_Close).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Close).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Close).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Close).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Close).FormatArgs.ArrayNum = 0;
  (this->FixedText_Close).FormatArgs.ArrayMax = 0;
  (this->FixedText_Close).StringTableID = 0x9e63;
  ::FName::FName(&this->AniName_Start,"Ani_In");
  this->ResultRewardType = None;
  return this;
}

// UDS_VM_ResultUI_Normal @ 14b6d9260

UDS_VM_ResultUI_Normal * __thiscall
UDS_VM_ResultUI_Normal::UDS_VM_ResultUI_Normal
          (UDS_VM_ResultUI_Normal *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ResultAnimationStartEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->FixedText_Close).StringTableType = StringUi;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Normal__6B_;
  (this->EntryBindingEventField_Success).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Success).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Success).UserObjectList.ArrayMax = 0;
  (this->WidgetCloseEvent)._padding_ = '\0';
  (this->WidgetCloseEvent).bIsCustomSelected = false;
  (this->WidgetCloseEvent).bIsLacked = false;
  (this->WidgetCloseEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->WidgetCloseEvent).Delegate = 0;
  *(undefined8 *)&(this->WidgetCloseEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->WidgetCloseEvent).Delegate.field_0x10 = 0;
  (this->ResultAnimationStartEvent).AnimationName.ComparisonIndex = 0;
  (this->ResultAnimationStartEvent).AnimationName.Number = 0;
  (this->ResultAnimationStartEvent).AnimationPlayTime = 0.0;
  (this->ResultAnimationStartEvent).AnimationEventType = None;
  (this->ResultAnimationStartEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation.field_0x10 = 0;
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
  (this->FixedText_Close).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Close).StringEnumTableNameID.Number = 0;
  (this->FixedText_Close).DateTime.Ticks = 0;
  (this->FixedText_Close).TimeSpan.Ticks = 0;
  (this->FixedText_Close).TimeExpressionType = None;
  (this->FixedText_Close).IsExpression = false;
  (this->FixedText_Close).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Close).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Close).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Close).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Close).FormatArgs.ArrayNum = 0;
  (this->FixedText_Close).FormatArgs.ArrayMax = 0;
  (this->FixedText_Close).StringTableID = 0x9e63;
  ::FName::FName(&this->AniName_Start,"Ani_In");
  this->ResultRewardType = None;
  return this;
}

// ~UDS_VM_ResultUI_Normal @ 14b6da900

void __thiscall UDS_VM_ResultUI_Normal::~UDS_VM_ResultUI_Normal(UDS_VM_ResultUI_Normal *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Normal__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Close).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Close).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Close).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Close).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ResultAnimationStartEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->ResultAnimationStartEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ResultAnimationStartEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ResultAnimationStartEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->ResultAnimationStartEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ResultAnimationStartEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetCloseEvent).Delegate);
  pvVar2 = *(void **)&(this->WidgetCloseEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidgetCloseEvent).Delegate);
  pFVar1 = (this->EntryBindingEventField_Success).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dce50

IClassDescriptor * __thiscall
UDS_VM_ResultUI_Normal::GetFieldNotificationDescriptor(UDS_VM_ResultUI_Normal *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ResultUI_Normal::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dda40

UClass * __cdecl UDS_VM_ResultUI_Normal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ResultUI_Normal",
               &Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton,
               StaticRegisterNativesUDS_VM_ResultUI_Normal,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ResultUI_Normal>,
               InternalVTableHelperCtorCaller<UDS_VM_ResultUI_Normal>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ResultUI_Normal.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ResultUI_Normal @ 14b6ddf70

void __cdecl UDS_VM_ResultUI_Normal::StaticRegisterNativesUDS_VM_ResultUI_Normal(void)

{
  return;
}

// __VTableCtorCaller @ 14b6dedb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_ResultUI_Normal::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Normal__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].ViewModelContext.Object = 0;
    *(undefined1 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x9e63;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    ::FName::FName((FName *)&this[2].ViewModelContext.SharedReferenceCount,"Ani_In");
    this[2].Visibility = Visible;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnCloseInit @ 14bdcdc20

void __thiscall UDS_VM_ResultUI_Normal::OnCloseInit(UDS_VM_ResultUI_Normal *this)

{
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if (this->ResultRewardType == Breach) {
    FDS_PhasingService::SendPhasingLeave();
  }
  this->ResultRewardType = None;
  return;
}

// OnSetViewModel @ 14bddd1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ResultUI_Normal::OnSetViewModel
          (UDS_VM_ResultUI_Normal *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  EDS_RewardType EVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FDS_ViewModelContext_MoneyDisplay *pFVar8;
  FDS_VMContext_RewardSlot *pFVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  UDS_LogManager *pUVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  UDS_UserObjectListItem *pUVar16;
  TObjectPtr<UDS_M_ItemImplBase> TVar17;
  UDS_M_ItemImplBase *this_00;
  undefined8 *puVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  FObjectPtr_u_0 FVar21;
  int iVar22;
  uint uVar23;
  FDS_EntryBindingEventField *this_01;
  atomic<int> *paVar24;
  FSharedReferencer<1> FVar25;
  longlong lVar26;
  UDS_ModelBase *pUVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStackY_748 [32];
  TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> local_708;
  uint local_6f8;
  FWeakObjectPtr local_6f0;
  FWeakObjectPtr local_6e8;
  FDS_EntryBindingEventField *local_6e0;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_6d8;
  longlong local_6c8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_6c0;
  longlong local_6b0;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_6a8;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_698;
  UDS_ModelBase *local_688;
  UObject *local_680;
  longlong local_678;
  UDS_UserObjectListItem *local_670;
  longlong local_668;
  TSharedPtr<FDS_ViewModelContext,1> *local_660;
  UDS_VM_ResultUI_Normal *local_658;
  FName local_648;
  int local_640;
  FName local_638;
  int local_630;
  FName local_628;
  int local_620;
  TSharedPtr<FDS_ViewModelContext,1> local_618;
  undefined1 local_608 [8];
  undefined1 local_600 [8];
  TReferenceControllerBase<1> *local_5f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_618.Object = param_1->Object;
  local_618.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_618.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_660 = param_1;
  local_658 = this;
  SafeCast<FDS_ViewModelContext_ModelBase>(&local_6c0,&local_618);
  if (local_6c0.Object == (FDS_ViewModelContext_ModelBase *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bddd7dc;
    pUVar13 = UDS_LogManager::GetInst();
    local_5e8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5e8,"UDS_VM_ResultUI_Normal::OnSetViewModel",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar13,1,Warning,local_5e8.Ptr,0x1c,L"modelBaseContext.IsValid() == false");
    FVar20.Data = (FScriptContainerElement *)local_5e8._padding_;
  }
  else {
    if ((local_6c0.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((local_6c0.Object)->Model).field0_0x0.DebugPtr == (UDS_ModelBase *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bddd7dc;
      pUVar13 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_VM_ResultUI_Normal::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar13,1,Warning,local_4c8.Ptr,0x22,L"modelBaseContext->Model == nullptr");
      FVar20.Data = (FScriptContainerElement *)local_4c8._padding_;
    }
    else {
      pUVar14 = Z_Construct_UClass_UDS_M_ResultUI_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&(local_6c0.Object)->Model,pUVar14);
      pUVar27 = (UDS_ModelBase *)0x0;
      local_688 = pUVar27;
      if (bVar11) {
        local_688 = ((local_6c0.Object)->Model).field0_0x0.DebugPtr;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_688 != (UDS_ModelBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_688);
      }
      local_6f0.ObjectIndex = 0;
      local_6f0.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_688 != (UDS_ModelBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_688);
      }
      FWeakObjectPtr::operator=(&local_6f0,(FObjectPtr)&local_688);
      bVar11 = TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr> *)&local_6f0,(void *)0x0);
      if (bVar11) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bddd7dc;
        pUVar13 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_VM_ResultUI_Normal::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar13,1,Warning,local_3a8.Ptr,0x29,L"dungeonResultModel == nullptr");
        FVar20.Data = (FScriptContainerElement *)local_3a8._padding_;
      }
      else {
        this_01 = &this->EntryBindingEventField_Success;
        local_6e0 = this_01;
        FDS_EntryBindingEventField::Reset(this_01);
        local_708.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ArrayNum = 0;
        local_708.ArrayMax = 0;
        pUVar15 = FWeakObjectPtr::Get(&local_6f0);
        TArray<FDS_RewardData,TSizedDefaultAllocator<32>_>::
        Append<FDS_RewardData,TSizedDefaultAllocator<32>_>
                  (&local_708,
                   (TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *)&pUVar15[10].field_0x18);
        iVar22 = local_708.ArrayNum + -1;
        pUVar15 = FWeakObjectPtr::Get(&local_6f0);
        FVar21.Handle = pUVar15 + 0xb;
        TArray<FDS_RewardData,TSizedDefaultAllocator<32>_>::
        Append<FDS_RewardData,TSizedDefaultAllocator<32>_>
                  (&local_708,(TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *)FVar21.Handle);
        local_6f8 = 0;
        if (0 < local_708.ArrayNum) {
          local_668 = (longlong)iVar22;
          local_678 = (longlong)(local_708.ArrayNum + -1);
          local_6c8 = 0;
          local_6b0 = 0;
          do {
            lVar10 = local_668;
            lVar26 = local_6b0;
            lVar28 = local_6c8;
            uVar29 = (uint)pUVar27;
            pUVar15 = GetTransientPackageAsObject();
            pUVar16 = NewObject<UDS_UserObjectListItem>(pUVar15);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar16 != (UDS_UserObjectListItem *)0x0) goto LAB_14bddd533;
LAB_14bddd81b:
              pUVar13 = UDS_LogManager::GetInst();
              if (pUVar13 != (UDS_LogManager *)0x0) {
                pUVar13 = UDS_LogManager::GetInst();
                local_288._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_288,"UDS_VM_ResultUI_Normal::OnSetViewModel",0x26,Yes);
                FVar21.Handle = (UObject *)0x0;
                UDS_LogManager::PrintLog
                          (pUVar13,1,Warning,local_288.Ptr,0x39,L"listItem is nullptr");
                if ((void *)local_288._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_288._padding_);
                }
              }
            }
            else {
              if (pUVar16 == (UDS_UserObjectListItem *)0x0) goto LAB_14bddd81b;
              UE::GC::MarkAsReachable((UObject *)pUVar16);
LAB_14bddd533:
              uVar19 = 0;
              if (lVar10 < lVar28) {
                if (lVar28 <= local_678) {
                  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_6d8);
                  pFVar8 = local_6d8.Object;
                  FVar25.ReferenceController = local_6d8.SharedReferenceCount.ReferenceController;
                  if (local_6d8.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
                    if ((local_6d8.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    *(undefined4 *)&pFVar8->_padding_ = 0x192;
                    uVar12 = uVar19;
                    if ((int)uVar29 < local_708.ArrayNum) {
                      uVar12 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar22 = *(int *)(local_708.AllocatorInstance.Data + lVar26);
                    if ((pFVar8 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar8->MoneyId = (longlong)iVar22;
                    if ((int)uVar29 < local_708.ArrayNum) {
                      uVar19 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar22 = *(int *)(local_708.AllocatorInstance.Data + lVar26 + 4);
                    if ((pFVar8 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar25.ReferenceController = local_6d8.SharedReferenceCount.ReferenceController;
                    pFVar8->Quantity = (longlong)iVar22;
                    if (local_6d8.SharedReferenceCount.ReferenceController ==
                        (TReferenceControllerBase<1> *)0x0) {
                      paVar24 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar24 = &(local_6d8.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount;
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    iVar22 = (pUVar16->ViewModelContextArray).ArrayNum;
                    piVar2 = &(pUVar16->ViewModelContextArray).ArrayMax;
                    if (iVar22 == *piVar2) {
                      iVar22 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&(pUVar16->ViewModelContextArray).AllocatorInstance,
                                          piVar2);
                    }
                    (pUVar16->ViewModelContextArray).ArrayNum = iVar22 + 1;
                    pFVar6 = (pUVar16->ViewModelContextArray).AllocatorInstance.Data;
                    *(FDS_ViewModelContext_MoneyDisplay **)(pFVar6 + (longlong)iVar22 * 0x10) =
                         pFVar8;
                    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar22 * 0x10 + 8) =
                         FVar25.ReferenceController;
                    if (FVar25.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                  MakeContext<FDS_VMContext_RewardSlot>(&local_698);
                  pFVar9 = local_698.Object;
                  FVar25.ReferenceController = local_698.SharedReferenceCount.ReferenceController;
                  if (local_698.Object != (FDS_VMContext_RewardSlot *)0x0) {
                    if ((local_698.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar25.ReferenceController = local_698.SharedReferenceCount.ReferenceController;
                    *(undefined4 *)&pFVar9->_padding_ = 0xb8;
                    pFVar9->RewardSlotType = Money;
                    if (local_698.SharedReferenceCount.ReferenceController ==
                        (TReferenceControllerBase<1> *)0x0) {
                      paVar24 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar24 = &(local_698.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount;
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    iVar22 = (pUVar16->ViewModelContextArray).ArrayNum;
                    piVar2 = &(pUVar16->ViewModelContextArray).ArrayMax;
                    if (iVar22 == *piVar2) {
                      iVar22 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&(pUVar16->ViewModelContextArray).AllocatorInstance,
                                          piVar2);
                    }
                    (pUVar16->ViewModelContextArray).ArrayNum = iVar22 + 1;
                    pFVar6 = (pUVar16->ViewModelContextArray).AllocatorInstance.Data;
                    *(FDS_VMContext_RewardSlot **)(pFVar6 + (longlong)iVar22 * 0x10) = pFVar9;
                    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar22 * 0x10 + 8) =
                         FVar25.ReferenceController;
                    if (FVar25.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                  this_01 = local_6e0;
                  lVar28 = local_6c8;
                  uVar29 = local_6f8;
                }
LAB_14bdddd3e:
                local_670 = pUVar16;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar16);
                }
                FVar21.Handle = (UObject *)&local_670;
                FDS_EntryBindingEventField::Add(this_01,(TObjectPtr<UDS_UserObjectListItem>)FVar21);
              }
              else {
                uVar23 = ~uVar29 >> 0x1f;
                uVar12 = 0;
                if ((int)uVar29 < local_708.ArrayNum) {
                  uVar12 = uVar23;
                }
                if (uVar12 == 0) {
                  FVar21.Handle = (UObject *)0x1506109c0;
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar11) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                TVar17 = DS_ItemDataUtil::CreateItemModel
                                   ((EDS_ItemSlotStateType)local_608,(int)CONCAT71(FVar21._1_7_,6));
                pUVar15 = *(UObject **)TVar17.field0_0x0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar15 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar15);
                }
                local_6e8.ObjectIndex = 0;
                local_6e8.ObjectSerialNumber = 0;
                local_680 = pUVar15;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar15 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar15);
                }
                FVar21.Handle = (UObject *)&local_680;
                FWeakObjectPtr::operator=(&local_6e8,(FObjectPtr)FVar21);
                bVar11 = FWeakObjectPtr::IsValid(&local_6e8);
                if (bVar11) {
                  this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_6e8);
                  if ((int)uVar29 < local_708.ArrayNum) {
                    uVar19 = uVar23;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UDS_M_ItemImplBase::SetQuantity
                            (this_00,*(int *)(local_708.AllocatorInstance.Data + lVar26 + 4));
                  pUVar15 = FWeakObjectPtr::Get(&local_6e8);
                  puVar18 = (undefined8 *)
                            (**(code **)(*(longlong *)pUVar15 + 0x310))(pUVar15,local_600);
                  pTVar4 = (TReferenceControllerBase<1> *)puVar18[1];
                  uVar5 = *puVar18;
                  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
                    paVar24 = (atomic<int> *)&DAT_00000008;
                  }
                  else {
                    paVar24 = &pTVar4->SharedReferenceCount;
                    LOCK();
                    *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                    UNLOCK();
                  }
                  pTVar1 = &pUVar16->ViewModelContextArray;
                  iVar22 = (pUVar16->ViewModelContextArray).ArrayNum;
                  if (iVar22 == (pUVar16->ViewModelContextArray).ArrayMax) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar1->AllocatorInstance,
                                        &(pUVar16->ViewModelContextArray).ArrayMax);
                  }
                  (pUVar16->ViewModelContextArray).ArrayNum = iVar22 + 1;
                  pFVar6 = (pTVar1->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar6 + (longlong)iVar22 * 0x10) = uVar5;
                  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar22 * 0x10 + 8) = pTVar4;
                  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar4);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_5f8);
                  MakeContext<FDS_VMContext_RewardSlot>(&local_6a8);
                  pFVar9 = local_6a8.Object;
                  if (local_6a8.Object == (FDS_VMContext_RewardSlot *)0x0) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_6a8.SharedReferenceCount.ReferenceController);
                    this_01 = local_6e0;
                    lVar26 = local_6b0;
                    lVar28 = local_6c8;
                    uVar29 = local_6f8;
                  }
                  else {
                    if ((local_6a8.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar25.ReferenceController = local_6a8.SharedReferenceCount.ReferenceController;
                    *(undefined4 *)&pFVar9->_padding_ = 0xb8;
                    pFVar9->RewardSlotType = Item;
                    if (local_6a8.SharedReferenceCount.ReferenceController ==
                        (TReferenceControllerBase<1> *)0x0) {
                      paVar24 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar24 = &(local_6a8.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount;
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    iVar22 = (pUVar16->ViewModelContextArray).ArrayNum;
                    if (iVar22 == (pUVar16->ViewModelContextArray).ArrayMax) {
                      iVar22 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar1->AllocatorInstance,
                                          &(pUVar16->ViewModelContextArray).ArrayMax);
                    }
                    (pUVar16->ViewModelContextArray).ArrayNum = iVar22 + 1;
                    pFVar6 = (pTVar1->AllocatorInstance).Data;
                    *(FDS_VMContext_RewardSlot **)(pFVar6 + (longlong)iVar22 * 0x10) = pFVar9;
                    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar22 * 0x10 + 8) =
                         FVar25.ReferenceController;
                    if (FVar25.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar25.ReferenceController);
                    this_01 = local_6e0;
                    lVar26 = local_6b0;
                    lVar28 = local_6c8;
                    uVar29 = local_6f8;
                  }
                  goto LAB_14bdddd3e;
                }
                pUVar13 = UDS_LogManager::GetInst();
                this_01 = local_6e0;
                if (pUVar13 != (UDS_LogManager *)0x0) {
                  pUVar13 = UDS_LogManager::GetInst();
                  if ((int)uVar29 < local_708.ArrayNum) {
                    uVar19 = uVar23;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_VM_ResultUI_Normal::OnSetViewModel",0x26,Yes);
                  FVar21.Handle = (UObject *)0x0;
                  UDS_LogManager::PrintLog
                            (pUVar13,1,Warning,local_168.Ptr,0x42,
                             L"itemModel.IsValid() == false (itemTID : %d)");
                  this_01 = local_6e0;
                  if ((void *)local_168._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                    this_01 = local_6e0;
                  }
                }
              }
            }
            local_6f8 = uVar29 + 1;
            pUVar27 = (UDS_ModelBase *)(ulonglong)local_6f8;
            local_6c8 = lVar28 + 1;
            local_6b0 = lVar26 + 0x10;
            param_1 = local_660;
            this = local_658;
          } while ((int)local_6f8 < local_708.ArrayNum);
        }
        local_640 = FFieldNotificationClassDescriptor::EntryBindingEventField_Success.BitNumber;
        local_648 = FFieldNotificationClassDescriptor::EntryBindingEventField_Success.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_648);
        pUVar15 = FWeakObjectPtr::Get(&local_6f0);
        FDS_Text::SetTextFromStringTable
                  (&this->TitleText,StringBase,*(long64 *)&pUVar15[0xb].field_0x10);
        local_630 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
        local_638 = FFieldNotificationClassDescriptor::TitleText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_638);
        pUVar15 = FWeakObjectPtr::Get(&local_6f0);
        EVar3 = pUVar15[0xb].field_0x18;
        (this->ResultAnimationStartEvent).AnimationName = this->AniName_Start;
        this->ResultRewardType = EVar3;
        (this->ResultAnimationStartEvent).AnimationEventType = PlayForward;
        local_620 = FFieldNotificationClassDescriptor::ResultAnimationStartEvent.BitNumber;
        local_628 = FFieldNotificationClassDescriptor::ResultAnimationStartEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_628);
        FVar20.Data = local_708.AllocatorInstance.Data;
      }
    }
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
LAB_14bddd7dc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetCloseEvent @ 14bde1170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ResultUI_Normal::OnWidgetCloseEvent
          (UDS_VM_ResultUI_Normal *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CommonRewardResultNormal,local_res20,local_res18);
  }
  return;
}

// SetResultAnimationStartEvent @ 14bde88c0

void __thiscall UDS_VM_ResultUI_Normal::SetResultAnimationStartEvent(UDS_VM_ResultUI_Normal *this)

{
  FName local_18;
  int local_10;
  
  (this->ResultAnimationStartEvent).AnimationName = this->AniName_Start;
  (this->ResultAnimationStartEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::ResultAnimationStartEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ResultAnimationStartEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

