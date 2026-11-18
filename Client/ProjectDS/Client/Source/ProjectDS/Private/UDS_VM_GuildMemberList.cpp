// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b65c530

UClass * __cdecl UDS_VM_GuildMemberList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberList",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberList,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMemberList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton;
}

// UDS_VM_GuildMemberList @ 14b65f7b0

UDS_VM_GuildMemberList * __thiscall
UDS_VM_GuildMemberList::UDS_VM_GuildMemberList(UDS_VM_GuildMemberList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberList__6B_;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Online).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Online).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Online).DateTime.Ticks = 0;
  (this->FixedTxt_Online).TimeSpan.Ticks = 0;
  (this->FixedTxt_Online).TimeExpressionType = None;
  (this->FixedTxt_Online).IsExpression = false;
  (this->FixedTxt_Online).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Online).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Online).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Online).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Online).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Online).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_Online).StringTableType = StringUi;
  (this->FixedTxt_Online).StringTableID = 0x3a9d5;
  return this;
}

// UDS_VM_GuildMemberList @ 14b65f940

UDS_VM_GuildMemberList * __thiscall
UDS_VM_GuildMemberList::UDS_VM_GuildMemberList
          (UDS_VM_GuildMemberList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberList__6B_;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Online).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Online).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Online).DateTime.Ticks = 0;
  (this->FixedTxt_Online).TimeSpan.Ticks = 0;
  (this->FixedTxt_Online).TimeExpressionType = None;
  (this->FixedTxt_Online).IsExpression = false;
  (this->FixedTxt_Online).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Online).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Online).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Online).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Online).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Online).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_Online).StringTableType = StringUi;
  (this->FixedTxt_Online).StringTableID = 0x3a9d5;
  return this;
}

// ~UDS_VM_GuildMemberList @ 14b662160

void __thiscall UDS_VM_GuildMemberList::~UDS_VM_GuildMemberList(UDS_VM_GuildMemberList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberList__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Online).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Online).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Online).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Online).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Name).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Grade).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6646c0

IClassDescriptor * __thiscall
UDS_VM_GuildMemberList::GetFieldNotificationDescriptor(UDS_VM_GuildMemberList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMemberList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664f60

UClass * __cdecl UDS_VM_GuildMemberList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberList",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberList,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMemberList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMemberList @ 14b665460

void __cdecl UDS_VM_GuildMemberList::StaticRegisterNativesUDS_VM_GuildMemberList(void)

{
  return;
}

// __VTableCtorCaller @ 14b666730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildMemberList::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_GuildMemberList__6B_;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9d1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9d2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x3a9d3;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x3a9d5;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be75f40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberList::BindModel(UDS_VM_GuildMemberList *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8ccd0

void __thiscall UDS_VM_GuildMemberList::InitViewModel(UDS_VM_GuildMemberList *this)

{
  return;
}

// OnSetViewModel @ 14bea09d0

void __thiscall
UDS_VM_GuildMemberList::OnSetViewModel
          (UDS_VM_GuildMemberList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    UpdateList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebc0f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberList::UnbindModel(UDS_VM_GuildMemberList *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

// UpdateList @ 14bebfff0

void __thiscall UDS_VM_GuildMemberList::UpdateList(UDS_VM_GuildMemberList *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  int iVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  lVar5 = UDS_GuildManager::GetMyGuildUID();
  UDS_GuildManager::GetGuildMemberDatas(&local_68,lVar5);
  iVar9 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar9 * 8;
  FVar11.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    pFVar10 = (FDS_ViewModelContext *)0x0;
    if (local_68.ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar11.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar11.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec022d;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec022d;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMemberListSlot__6B_;
      pFVar6[1]._padding_ = 0;
      pFVar10 = pFVar6;
    }
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMemberListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
    }
    if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_GuildMemberListSlot::StaticStruct();
    pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar10->ViewModelTemplateKey = GuildMemberListSlot;
    pFVar10[1]._padding_ = lVar2;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar10;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    FVar11.Data = FVar11.Data + 8;
  }
  local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
LAB_14bec022d:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

