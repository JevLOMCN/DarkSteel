// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetOnClickedGachaOneTimeEvent_WrapperImpl @ 14b71ba30

void __cdecl
UDS_VM_W_B_Gacha::SetOnClickedGachaOneTimeEvent_WrapperImpl(void *param_1,void *param_2)

{
  FDS_GachaService::TryGacha(SelectedGachaID,false);
  return;
}

// SetOnClickedGachaTenTimesEvent_WrapperImpl @ 14b71ba40

void __cdecl
UDS_VM_W_B_Gacha::SetOnClickedGachaTenTimesEvent_WrapperImpl(void *param_1,void *param_2)

{
  FDS_GachaService::TryGacha(SelectedGachaID,true);
  return;
}

// StaticClass @ 14b71ba50

UClass * __cdecl UDS_VM_W_B_Gacha::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_Gacha",
               &Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_Gacha,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_Gacha>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_Gacha>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton;
}

// UDS_VM_W_B_Gacha @ 14b71d920

UDS_VM_W_B_Gacha * __thiscall
UDS_VM_W_B_Gacha::UDS_VM_W_B_Gacha(UDS_VM_W_B_Gacha *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Gacha__6B_;
  (this->GachaEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GachaEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->GachaEntryBindingEventField).UserObjectList.ArrayMax = 0;
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
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  (this->BgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BgResourcePath).AssetPath.PackageName.Number = 0;
  (this->BgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BgResourcePath).AssetPath.AssetName.Number = 0;
  (this->BgResourcePath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->BgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->VM_MoneyOneTime).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTenTimes).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->OnClickedGachaOneTimeEvent)._padding_ = '\0';
  (this->OnClickedGachaOneTimeEvent).bIsCustomSelected = false;
  (this->OnClickedGachaOneTimeEvent).bIsLacked = false;
  (this->OnClickedGachaOneTimeEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaOneTimeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaTenTimesEvent)._padding_ = '\0';
  (this->OnClickedGachaTenTimesEvent).bIsCustomSelected = false;
  (this->OnClickedGachaTenTimesEvent).bIsLacked = false;
  (this->OnClickedGachaTenTimesEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaTenTimesEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8 = 0;
  return this;
}

// UDS_VM_W_B_Gacha @ 14b71da70

UDS_VM_W_B_Gacha * __thiscall
UDS_VM_W_B_Gacha::UDS_VM_W_B_Gacha(UDS_VM_W_B_Gacha *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Gacha__6B_;
  (this->GachaEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GachaEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->GachaEntryBindingEventField).UserObjectList.ArrayMax = 0;
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
  (this->DescText).StringTableType = None;
  (this->DescText).StringTableID = 0;
  (this->DescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescText).StringEnumTableNameID.Number = 0;
  (this->DescText).DateTime.Ticks = 0;
  (this->DescText).TimeSpan.Ticks = 0;
  (this->DescText).TimeExpressionType = None;
  (this->DescText).IsExpression = false;
  (this->DescText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).UniqueString.Data.ArrayNum = 0;
  (this->DescText).UniqueString.Data.ArrayMax = 0;
  (this->DescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescText).FormatArgs.ArrayNum = 0;
  (this->DescText).FormatArgs.ArrayMax = 0;
  (this->BgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BgResourcePath).AssetPath.PackageName.Number = 0;
  (this->BgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BgResourcePath).AssetPath.AssetName.Number = 0;
  (this->BgResourcePath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->BgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->VM_MoneyOneTime).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTenTimes).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->OnClickedGachaOneTimeEvent)._padding_ = '\0';
  (this->OnClickedGachaOneTimeEvent).bIsCustomSelected = false;
  (this->OnClickedGachaOneTimeEvent).bIsLacked = false;
  (this->OnClickedGachaOneTimeEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaOneTimeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaTenTimesEvent)._padding_ = '\0';
  (this->OnClickedGachaTenTimesEvent).bIsCustomSelected = false;
  (this->OnClickedGachaTenTimesEvent).bIsLacked = false;
  (this->OnClickedGachaTenTimesEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaTenTimesEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8 = 0;
  return this;
}

// ~UDS_VM_W_B_Gacha @ 14b71f530

void __thiscall UDS_VM_W_B_Gacha::~UDS_VM_W_B_Gacha(UDS_VM_W_B_Gacha *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_Gacha__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnClickedGachaTenTimesEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedGachaTenTimesEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnClickedGachaOneTimeEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedGachaOneTimeEvent).Delegate);
  pFVar2 = (this->BgResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DescText).FormatArgs.AllocatorInstance.Data,
             (this->DescText).FormatArgs.ArrayNum);
  pFVar2 = (this->DescText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DescText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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
  pFVar2 = (this->GachaEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721090

IClassDescriptor * __thiscall
UDS_VM_W_B_Gacha::GetFieldNotificationDescriptor(UDS_VM_W_B_Gacha *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_Gacha::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7215e0

UClass * __cdecl UDS_VM_W_B_Gacha::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_Gacha",
               &Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_Gacha,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_Gacha>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_Gacha>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_Gacha.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_Gacha @ 14b721b50

void __cdecl UDS_VM_W_B_Gacha::StaticRegisterNativesUDS_VM_W_B_Gacha(void)

{
  return;
}

// __VTableCtorCaller @ 14b722460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_B_Gacha::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_B_Gacha__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    this[1].VMName.Number = 0;
    this[1].bIsCloseInit = false;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// operator() @ 14bf996a0

void __thiscall
`UDS_VM_W_B_Gacha::Refresh'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_MoneyDisplay> *param_1,EDS_MoneyType param_2,long64 param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>(*(UObject **)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->field0_0x0).DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x192;
  pFVar2->MoneyId = (ulonglong)param_2;
  pFVar2->Quantity = param_3;
  pUVar4 = (param_1->field0_0x0).DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnClickGachaOneTime @ 14bfb9e60

void __thiscall
UDS_VM_W_B_Gacha::OnClickGachaOneTime(UDS_VM_W_B_Gacha *this,FDS_ButtonEventField *param_1)

{
  FDS_GachaService::TryGacha(SelectedGachaID,false);
  return;
}

// OnClickGachaTenTimes @ 14bfb9ea0

void __thiscall
UDS_VM_W_B_Gacha::OnClickGachaTenTimes(UDS_VM_W_B_Gacha *this,FDS_ButtonEventField *param_1)

{
  FDS_GachaService::TryGacha(SelectedGachaID,true);
  return;
}

// OnCloseInit @ 14bfbbe70

void __thiscall UDS_VM_W_B_Gacha::OnCloseInit(UDS_VM_W_B_Gacha *this)

{
  SelectedGachaID = 0;
  return;
}

// OnSelectGachaItem @ 14bfc0aa0

void __thiscall
UDS_VM_W_B_Gacha::OnSelectGachaItem
          (UDS_VM_W_B_Gacha *this,FDS_ButtonEventField *param_1,int param_2)

{
  SelectedGachaID = param_2;
  Refresh(this);
  return;
}

// OnSetViewModel @ 14bfc54a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_Gacha::OnSetViewModel(UDS_VM_W_B_Gacha *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  TArray<FDS_GachaBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
  TSharedPtr<FDS_ViewModelContext,1> *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_170 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar6 = 0;
  FDS_GachaBaseTableRow::GetAll(&local_180);
  iVar3 = local_180.ArrayNum;
  pFVar1 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 8;
  FVar7.Data = local_180.AllocatorInstance.Data;
LAB_14bfc5520:
  do {
    if (local_180.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_GachaBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_188);
    }
    if (FVar7.Data == pFVar1) {
      SelectedGachaID = iVar6;
      Refresh(this);
      pTVar4 = local_170;
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar4->SharedReferenceCount).ReferenceController);
      return;
    }
    if (*(longlong *)FVar7.Data == 0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_B_Gacha::OnSetViewModel",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_168.Ptr,0x1b,L"gachaBaseTableRow is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
          FVar7.Data = FVar7.Data + 8;
          goto LAB_14bfc5520;
        }
      }
    }
    else if (iVar6 < 1) {
      iVar6 = *(int *)(*(longlong *)FVar7.Data + 8);
    }
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// Refresh @ 14bfd3410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_Gacha::Refresh(UDS_VM_W_B_Gacha *this)

{
  EDS_ViewModelTemplateKey *pEVar1;
  atomic<int> *paVar2;
  FUtf8String *pFVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  undefined4 uVar10;
  bool bVar11;
  UDS_LogManager *pUVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar16;
  ulong64 uVar17;
  UDS_UserObjectListItem *this_01;
  FDS_GachaBaseTableRow *this_02;
  FDS_ResourceImageTableRow *this_03;
  UDS_VM_MoneyDisplay *pUVar18;
  int iVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FDS_ViewModelContext *pFVar22;
  ForAnyElementType FVar23;
  FUtf8String *pFVar24;
  undefined1 auStackY_5d8 [32];
  undefined1 local_598 [8];
  uint local_590;
  FScriptContainerElement *local_588;
  FDS_Text local_580;
  FScriptContainerElement *local_530;
  UDS_VM_W_B_Gacha *local_528;
  TArray<FDS_GachaBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_520;
  UDS_VM_W_B_Gacha *local_510 [2];
  UDS_UserObjectListItem *local_500;
  FName local_4f8;
  int local_4f0;
  FName local_4e8;
  int local_4e0;
  FName local_4d8;
  int local_4d0;
  FName local_4c8;
  uint local_4c0;
  FName local_4b8;
  int local_4b0;
  FName local_4a8;
  int local_4a0;
  TSharedPtr<FDS_ViewModelContext,1> local_498;
  code *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  TSharedPtr<FDS_ViewModelContext,1> local_478;
  FDS_Text local_468;
  FDS_Text local_418;
  FDestructionSentinel local_3c8;
  atomic<int> *local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  if (SelectedGachaID < 1) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_VM_W_B_Gacha::Refresh",0x19,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_3a8.Ptr,0x3d,L"SelectedGachaID is Invalid.");
    local_520.AllocatorInstance.Data = (FScriptContainerElement *)local_3a8._padding_;
  }
  else {
    FDS_EntryBindingEventField::Reset(&this->GachaEntryBindingEventField);
    FDS_GachaBaseTableRow::GetAll(&local_520);
    uVar10 = local_478.SharedReferenceCount.ReferenceController._4_4_;
    local_590 = local_520.ArrayNum;
    uVar20 = (ulonglong)(int)local_590;
    pFVar21 = local_520.AllocatorInstance.Data + uVar20 * 8;
    FVar23.Data = local_520.AllocatorInstance.Data;
    local_588 = pFVar21;
    while( true ) {
      local_530 = FVar23.Data;
      if (local_520.ArrayNum != (int)uVar20) {
        local_598[0] = 0;
        `TCheckedPointerIterator<FDS_GachaBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_598);
      }
      if (FVar23.Data == pFVar21) break;
      lVar6 = *(longlong *)FVar23.Data;
      if (lVar6 == 0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_VM_W_B_Gacha::Refresh",0x19,Yes);
          UDS_LogManager::PrintLog
                    (pUVar12,1,Warning,local_288.Ptr,0x49,L"gachaBaseTableRow is nullptr");
          pFVar21 = local_588;
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
            pFVar21 = local_588;
          }
        }
      }
      else {
        pFVar13 = ::operator_new(0xf8);
        pFVar22 = (FDS_ViewModelContext *)0x0;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
          *(undefined4 *)&((atomic<int> *)&pFVar13[1].DerivedStaticStruct)->field_0x1 = 0;
          *(undefined2 *)&((atomic<int> *)&pFVar13[1].DerivedStaticStruct)[1].field_0x1 = 0;
          ((atomic<int> *)&pFVar13[1].DerivedStaticStruct)[1].field_0x3 = 0;
          *(undefined2 *)((longlong)&pFVar13[2].ViewModelName.Number + 1) = 0;
          *(undefined1 *)((longlong)&pFVar13[2].ViewModelName.Number + 3) = 0;
          *(undefined4 *)((longlong)&pFVar13[3].ViewModelTemplateKey + 1) = 0;
          *(undefined2 *)&pFVar13[3].field_0x1d = 0;
          pFVar13[3].field_0x1f = 0;
          *(undefined2 *)((longlong)&pFVar13[5]._padding_ + 5) = 0;
          *(undefined1 *)((longlong)&pFVar13[5]._padding_ + 7) = 0;
          pFVar13[6].ViewModelName.ComparisonIndex = 0;
          pFVar13[6].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[6].ViewModelTemplateKey = 0;
          pFVar13[7].ViewModelName.ComparisonIndex = 0;
          pFVar13[7].ViewModelName.Number = 0;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonIconTextButton__6B_;
          *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13[1]._padding_ = 0;
          *(undefined1 *)&pFVar13[1].DerivedStaticStruct = 0;
          pFVar13[1].ViewModelName.ComparisonIndex = 0;
          pFVar13[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[1].ViewModelTemplateKey = 0;
          pFVar13[2]._padding_ = 0;
          *(undefined8 *)&pFVar13[2].DerivedStaticStruct = 0;
          pFVar13[2].ViewModelName.ComparisonIndex.Value = 0;
          *(undefined1 *)&pFVar13[2].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[2].ViewModelTemplateKey = 0;
          pFVar13[3]._padding_ = 0;
          *(undefined8 *)&pFVar13[3].DerivedStaticStruct = 0;
          pFVar13[3].ViewModelName.ComparisonIndex = 0;
          pFVar13[3].ViewModelName.Number = 0;
          *(undefined1 *)&pFVar13[3].ViewModelTemplateKey = None;
          pFVar13[4]._padding_ = 0;
          *(undefined8 *)&pFVar13[4].DerivedStaticStruct = 0;
          pFVar13[4].ViewModelName.ComparisonIndex = 0;
          pFVar13[4].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[4].ViewModelTemplateKey = 0;
          *(undefined4 *)&pFVar13[5]._padding_ = 0;
          *(undefined1 *)((longlong)&pFVar13[5]._padding_ + 4) = 0;
          *(undefined8 *)&pFVar13[5].DerivedStaticStruct = 0;
          pFVar13[5].ViewModelName.ComparisonIndex = 0;
          pFVar13[5].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[5].ViewModelTemplateKey = 0;
          pFVar13[6]._padding_ = 0;
          *(undefined8 *)&pFVar13[6].DerivedStaticStruct = 0;
          pFVar13[7]._padding_ = 0;
          *(undefined8 *)&pFVar13[7].DerivedStaticStruct = 0;
          pFVar22 = pFVar13;
        }
        pFVar14 = ::operator_new(0x20);
        pFVar13 = (FDS_ViewModelContext *)0x0;
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar14->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonIconTextButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar22;
          pFVar13 = pFVar14;
        }
        if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar15 = FDS_ViewModelContext_CommonIconTextButton::StaticStruct();
        *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar15;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar13 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_498.Object = pFVar22;
          local_498.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar13;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_498);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_498.SharedReferenceCount.ReferenceController);
        }
        pFVar22->ViewModelTemplateKey = CommonIconTextButton;
        local_580.StringTableType = None;
        local_580.DateTime.Ticks = 0;
        local_580.TimeSpan.Ticks = 0;
        local_580.StringTableID = 0;
        local_580.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_580.StringEnumTableNameID.Number = 0;
        local_580.TimeExpressionType = None;
        local_580.IsExpression = false;
        local_580.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_580.UniqueString.Data.ArrayNum = 0;
        local_580.UniqueString.Data.ArrayMax = 0;
        local_580.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_580.FormatArgs.ArrayNum = 0;
        local_580.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_580,StringBase,*(long64 *)(lVar6 + 0x28));
        pEVar1 = &pFVar22[2].ViewModelTemplateKey;
        *(EDS_StringTableType *)&pFVar22[1].DerivedStaticStruct = local_580.StringTableType;
        pFVar22[1].ViewModelName.ComparisonIndex = (FNameEntryId)(undefined4)local_580.StringTableID
        ;
        pFVar22[1].ViewModelName.Number = local_580.StringTableID._4_4_;
        pFVar22[1].ViewModelTemplateKey = local_580.StringEnumTableNameID.ComparisonIndex.Value;
        *(uint *)&pFVar22[1].field_0x1c = local_580.StringEnumTableNameID.Number;
        pFVar22[2]._padding_ = local_580.DateTime.Ticks;
        *(long64 *)&pFVar22[2].DerivedStaticStruct = local_580.TimeSpan.Ticks;
        pFVar22[2].ViewModelName.ComparisonIndex.Value = local_580.TimeExpressionType;
        *(bool *)&pFVar22[2].ViewModelName.Number = local_580.IsExpression;
        if ((FString *)pEVar1 != &local_580.UniqueString) {
          if (*(void **)pEVar1 != (void *)0x0) {
            FMemory::Free(*(void **)pEVar1);
          }
          *(FScriptContainerElement **)pEVar1 = local_580.UniqueString.Data.AllocatorInstance.Data;
          local_580.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)&pFVar22[3]._padding_ = local_580.UniqueString.Data.ArrayNum;
          *(int *)((longlong)&pFVar22[3]._padding_ + 4) = local_580.UniqueString.Data.ArrayMax;
          local_580.UniqueString.Data.ArrayNum = 0;
          local_580.UniqueString.Data.ArrayMax = 0;
        }
        paVar2 = (atomic<int> *)&pFVar22[3].DerivedStaticStruct;
        if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)paVar2 == &local_580.FormatArgs
           ) {
          iVar19 = local_580.FormatArgs.ArrayNum;
        }
        else {
          DestructItems<FDS_TextFormatArg,int>
                    (*(FDS_TextFormatArg **)paVar2,pFVar22[3].ViewModelName.ComparisonIndex.Value);
          if (*(void **)paVar2 != (void *)0x0) {
            FMemory::Free(*(void **)paVar2);
          }
          *(FScriptContainerElement **)paVar2 = local_580.FormatArgs.AllocatorInstance.Data;
          local_580.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar22[3].ViewModelName.ComparisonIndex.Value = local_580.FormatArgs.ArrayNum;
          pFVar22[3].ViewModelName.Number = local_580.FormatArgs.ArrayMax;
          local_580.FormatArgs.ArrayNum = 0;
          local_580.FormatArgs.ArrayMax = 0;
          iVar19 = 0;
        }
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_580.FormatArgs.AllocatorInstance.Data,iVar19);
        if ((FDS_TextFormatArg *)local_580.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_580.FormatArgs.AllocatorInstance.Data);
        }
        if (local_580.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_580.UniqueString.Data.AllocatorInstance.Data);
        }
        uStack_480 = 0;
        local_488 = OnSelectGachaItem;
        uStack_47c = uVar10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar22 + 7),
                   (FWriteAccessScope *)&local_3c8);
        local_3b0 = (atomic<int> *)&pFVar22[7].DerivedStaticStruct;
        puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3b0);
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(lVar6 + 8);
          uVar17 = FDelegateHandle::GenerateNewID();
          puVar16[2] = uVar17;
          *puVar16 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_Gacha____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_Gacha *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar16[3] = 0;
          local_510[0] = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_Gacha *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)local_510);
          puVar16[4] = local_488;
          puVar16[5] = CONCAT44(uStack_47c,uStack_480);
        }
        if (local_3c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
        }
        *(bool *)&pFVar22[6].ViewModelName.ComparisonIndex.Value =
             SelectedGachaID == *(int *)(lVar6 + 8);
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_478.Object = pFVar22;
        local_478.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_UserObjectListItem::AddContext(this_01,&local_478);
        local_500 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->GachaEntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_500
                  );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
        pFVar21 = local_588;
        FVar23.Data = local_530;
      }
      FVar23.Data = FVar23.Data + 8;
      uVar20 = (ulonglong)local_590;
    }
    local_4f0 = FFieldNotificationClassDescriptor::GachaEntryBindingEventField.BitNumber;
    local_4f8 = FFieldNotificationClassDescriptor::GachaEntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4f8);
    this_02 = FDS_GachaBaseTableRow::GetRef((longlong)SelectedGachaID,true);
    bVar11 = FDS_GachaBaseTableRow::IsValid(this_02);
    iVar19 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    if (bVar11) {
      local_468.DateTime.Ticks = 0;
      local_468.TimeSpan.Ticks = 0;
      local_468.StringTableType = None;
      local_468.StringTableID = 0;
      local_468.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_468.StringEnumTableNameID.Number = 0;
      local_468.TimeExpressionType = None;
      local_468.IsExpression = false;
      local_468.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.UniqueString.Data.ArrayNum = 0;
      local_468.UniqueString.Data.ArrayMax = 0;
      local_468.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.FormatArgs.ArrayNum = 0;
      local_468.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_468,&this_02->ID_Title);
      FDS_Text::operator=(&this->TitleText,&local_468);
      local_4e8 = FVar9;
      local_4e0 = iVar19;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_468.FormatArgs.AllocatorInstance.Data,
                 local_468.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_468.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_468.FormatArgs.AllocatorInstance.Data);
      }
      if (local_468.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.UniqueString.Data.AllocatorInstance.Data);
      }
      iVar19 = FFieldNotificationClassDescriptor::DescText.BitNumber;
      FVar9 = FFieldNotificationClassDescriptor::DescText.FieldName;
      local_418.StringTableType = None;
      local_418.DateTime.Ticks = 0;
      local_418.TimeSpan.Ticks = 0;
      local_418.StringTableID = 0;
      local_418.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_418.StringEnumTableNameID.Number = 0;
      local_418.TimeExpressionType = None;
      local_418.IsExpression = false;
      local_418.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.UniqueString.Data.ArrayNum = 0;
      local_418.UniqueString.Data.ArrayMax = 0;
      local_418.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.FormatArgs.ArrayNum = 0;
      local_418.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_418,&this_02->ID_Description);
      FDS_Text::operator=(&this->DescText,&local_418);
      local_4d8 = FVar9;
      local_4d0 = iVar19;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4d8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data,
                 local_418.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_418.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_418.FormatArgs.AllocatorInstance.Data);
      }
      if (local_418.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.UniqueString.Data.AllocatorInstance.Data);
      }
      this_03 = FDS_ResourceImageTableRow::GetRef(this_02->ID_BackGround,true);
      bVar11 = FDS_ResourceImageTableRow::IsValid(this_03);
      FVar9 = FFieldNotificationClassDescriptor::BgResourcePath.FieldName;
      if (bVar11) {
        local_590 = FFieldNotificationClassDescriptor::BgResourcePath.BitNumber;
        bVar11 = FSoftObjectPath::operator==(&this->BgResourcePath,&this_03->IconPath);
        if (!bVar11) {
          FVar8 = (this_03->IconPath).AssetPath.AssetName;
          pFVar3 = &(this_03->IconPath).SubPathString;
          (this->BgResourcePath).AssetPath.PackageName = (this_03->IconPath).AssetPath.PackageName;
          (this->BgResourcePath).AssetPath.AssetName = FVar8;
          pFVar24 = &(this->BgResourcePath).SubPathString;
          if (pFVar24 != pFVar3) {
            iVar19 = (this_03->IconPath).SubPathString.Data.ArrayNum;
            piVar4 = &(this->BgResourcePath).SubPathString.Data.ArrayMax;
            pFVar21 = (pFVar3->Data).AllocatorInstance.Data;
            iVar5 = *piVar4;
            (this->BgResourcePath).SubPathString.Data.ArrayNum = iVar19;
            if ((iVar19 == 0) && (iVar5 == 0)) {
              *piVar4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar19,iVar5,(ForAnyElementType *)pFVar24,iVar19,piVar4);
              if (iVar19 != 0) {
                memcpy((pFVar24->Data).AllocatorInstance.Data,pFVar21,(longlong)iVar19);
              }
            }
          }
          local_4c0 = local_590;
          local_4c8 = FVar9;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4c8);
        }
      }
      if ((this->VM_MoneyOneTime).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
        pUVar18 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar18 != (UDS_VM_MoneyDisplay *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar18);
        }
        (this->VM_MoneyOneTime).field0_0x0.DebugPtr = pUVar18;
      }
      if ((this->VM_MoneyTenTimes).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
        pUVar18 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar18 != (UDS_VM_MoneyDisplay *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar18);
        }
        (this->VM_MoneyTenTimes).field0_0x0.DebugPtr = pUVar18;
      }
      local_528 = this;
      `UDS_VM_W_B_Gacha::Refresh'::__l2::<lambda_1>::operator()
                (&local_528,&this->VM_MoneyOneTime,this_02->MoneyType,(longlong)this_02->MoneyValue)
      ;
      `UDS_VM_W_B_Gacha::Refresh'::__l2::<lambda_1>::operator()
                (&local_528,&this->VM_MoneyTenTimes,this_02->MoneyType,
                 (longlong)(this_02->MoneyValue * 10));
      local_4b0 = FFieldNotificationClassDescriptor::VM_MoneyOneTime.BitNumber;
      local_4b8 = FFieldNotificationClassDescriptor::VM_MoneyOneTime.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4b8);
      local_4a0 = FFieldNotificationClassDescriptor::VM_MoneyTenTimes.BitNumber;
      local_4a8 = FFieldNotificationClassDescriptor::VM_MoneyTenTimes.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4a8);
    }
    else {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_B_Gacha::Refresh",0x19,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_168.Ptr,0x5f,L"selectedGachaBaseTableRow is Invalid.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8159267904718634912>,true,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_Gacha.cpp"
                          ,0x60,"false");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.AllocatorInstance.Data);
  }
  return;
}

// SelectGachaItem @ 14bfd5900

void __thiscall UDS_VM_W_B_Gacha::SelectGachaItem(UDS_VM_W_B_Gacha *this,int param_1)

{
  SelectedGachaID = param_1;
  Refresh(this);
  return;
}

