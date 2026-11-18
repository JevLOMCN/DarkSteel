// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b65ba00

UClass * __cdecl UDS_VM_GuildMain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMain",
               &Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMain,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMain>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton;
}

// UDS_VM_GuildMain @ 14b65e3d0

UDS_VM_GuildMain * __thiscall
UDS_VM_GuildMain::UDS_VM_GuildMain(UDS_VM_GuildMain *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMain__6B_;
  (this->FixedTxt_GuildMasterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMasterName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMasterName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMasterName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMasterName).TimeExpressionType = None;
  (this->FixedTxt_GuildMasterName).IsExpression = false;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMasterName).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMasterName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMasterName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNumberMembers).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNumberMembers).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNumberMembers).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNumberMembers).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNumberMembers).TimeExpressionType = None;
  (this->FixedTxt_GuildNumberMembers).IsExpression = false;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildHistory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildHistory).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildHistory).DateTime.Ticks = 0;
  (this->FixedTxt_GuildHistory).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildHistory).TimeExpressionType = None;
  (this->FixedTxt_GuildHistory).IsExpression = false;
  (this->FixedTxt_GuildHistory).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildHistory).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildHistory).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildHistory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildHistory).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildHistory).FormatArgs.ArrayMax = 0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->FixedTxt_GuildMasterName).StringTableType = StringUi;
  (this->FixedTxt_GuildMasterName).StringTableID = 0x3a9a9;
  (this->FixedTxt_GuildNumberMembers).StringTableType = StringUi;
  (this->FixedTxt_GuildNumberMembers).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildHistory).StringTableType = StringUi;
  (this->FixedTxt_GuildHistory).StringTableID = 0x3a9cf;
  return this;
}

// UDS_VM_GuildMain @ 14b65e560

UDS_VM_GuildMain * __thiscall
UDS_VM_GuildMain::UDS_VM_GuildMain(UDS_VM_GuildMain *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMain__6B_;
  (this->FixedTxt_GuildMasterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMasterName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMasterName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMasterName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMasterName).TimeExpressionType = None;
  (this->FixedTxt_GuildMasterName).IsExpression = false;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMasterName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMasterName).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMasterName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMasterName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNumberMembers).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNumberMembers).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNumberMembers).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNumberMembers).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNumberMembers).TimeExpressionType = None;
  (this->FixedTxt_GuildNumberMembers).IsExpression = false;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNumberMembers).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNumberMembers).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildHistory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildHistory).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildHistory).DateTime.Ticks = 0;
  (this->FixedTxt_GuildHistory).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildHistory).TimeExpressionType = None;
  (this->FixedTxt_GuildHistory).IsExpression = false;
  (this->FixedTxt_GuildHistory).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildHistory).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildHistory).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildHistory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildHistory).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildHistory).FormatArgs.ArrayMax = 0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->FixedTxt_GuildMasterName).StringTableType = StringUi;
  (this->FixedTxt_GuildMasterName).StringTableID = 0x3a9a9;
  (this->FixedTxt_GuildNumberMembers).StringTableType = StringUi;
  (this->FixedTxt_GuildNumberMembers).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildHistory).StringTableType = StringUi;
  (this->FixedTxt_GuildHistory).StringTableID = 0x3a9cf;
  return this;
}

// ~UDS_VM_GuildMain @ 14b661970

void __thiscall UDS_VM_GuildMain::~UDS_VM_GuildMain(UDS_VM_GuildMain *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMain__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildHistory).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildHistory).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildHistory).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildHistory).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNumberMembers).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildMasterName).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_GuildMasterName).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildMasterName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildMasterName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6643b0

IClassDescriptor * __thiscall
UDS_VM_GuildMain::GetFieldNotificationDescriptor(UDS_VM_GuildMain *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMain::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664a20

UClass * __cdecl UDS_VM_GuildMain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMain",
               &Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMain,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMain>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMain.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMain @ 14b6653f0

void __cdecl UDS_VM_GuildMain::StaticRegisterNativesUDS_VM_GuildMain(void)

{
  return;
}

// __VTableCtorCaller @ 14b666310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildMain::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_GuildMain__6B_;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9a9;
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
    this[1]._padding_ = 0x3a9aa;
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
    this[2]._padding_ = 0x3aa05;
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
    this[2]._padding_ = 0x3a9cf;
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

// BindModel @ 14be75d40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMain::BindModel(UDS_VM_GuildMain *this)

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

// InitViewModel @ 14be8cc60

void __thiscall UDS_VM_GuildMain::InitViewModel(UDS_VM_GuildMain *this)

{
  return;
}

// InitViewModelCDO @ 14be8e820

void __thiscall UDS_VM_GuildMain::InitViewModelCDO(UDS_VM_GuildMain *this)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  local_res10[0] = 0x1f6;
  if (UDS_ContentManager::OnOpenContentTotalMenuEventMap._8_4_ !=
      UDS_ContentManager::OnOpenContentTotalMenuEventMap._52_4_) {
    lVar3 = 0x154cf7518;
    if (UDS_ContentManager::OnOpenContentTotalMenuEventMap._64_8_ != 0) {
      lVar3 = UDS_ContentManager::OnOpenContentTotalMenuEventMap._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (UDS_ContentManager::OnOpenContentTotalMenuEventMap._72_4_ - 1 & 0x1f6)
                             * 4);
    while (iVar1 != -1) {
      piVar2 = (int *)((longlong)iVar1 * 0x30 +
                      UDS_ContentManager::OnOpenContentTotalMenuEventMap._0_8_);
      if (*piVar2 == 0x1f6) {
        if (piVar2 != (int *)0x0) goto LAB_14be8e8d8;
        break;
      }
      iVar1 = piVar2[10];
    }
  }
  local_res20 = local_res10;
  TSet<TTuple<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent>,TDefaultMapHashableKeyFuncs<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_TotalMenuId_&&>_>
            (&UDS_ContentManager::OnOpenContentTotalMenuEventMap,(uint)local_res18,
             (TKeyInitializer<EDS_TotalMenuId_&&> *)0x1f6,(bool *)&local_res20);
  piVar2 = (int *)((longlong)local_res18[0] * 0x30 +
                  UDS_ContentManager::OnOpenContentTotalMenuEventMap._0_8_);
LAB_14be8e8d8:
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_GuildMain>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (piVar2 + 2),(UDS_VM_GuildMain *)local_res18,(pmf_d9e8d53d *)this);
  return;
}

// OnOpenContentFromTotalMenu @ 14be9a200

void __thiscall UDS_VM_GuildMain::OnOpenContentFromTotalMenu(UDS_VM_GuildMain *this)

{
  bool bVar1;
  UDS_ContentManager *this_00;
  EDS_ContentsTabFrameType local_res10 [2];
  undefined8 local_res18 [2];
  
  bVar1 = UDS_GuildManager::HasJoinedGuild();
  if (bVar1) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_res18[0] = 0;
      local_res10[0] = GuildMain;
      UDS_ContentManager::OpenContent
                (this_00,local_res10,(TObjectPtr<UDS_ContentArguments>)local_res18);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f920

void __thiscall
UDS_VM_GuildMain::OnSetViewModel(UDS_VM_GuildMain *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_GuildMark *pFVar3;
  FDS_ViewModelContext_GuildData *pFVar4;
  bool bVar5;
  long64 lVar6;
  UDS_VM_GuildMark *pUVar7;
  UObject *pUVar8;
  UDS_VM_GuildData *pUVar9;
  TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> TVar10;
  FWeakObjectPtr local_res10 [2];
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14be9fb85;
  lVar6 = UDS_GuildManager::GetMyGuildUID();
  pUVar7 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  this->GuildUID = lVar6;
  if (pUVar7 == (UDS_VM_GuildMark *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 != (UDS_VM_GuildMark *)0x0) goto LAB_14be9f99a;
  }
  else {
LAB_14be9f99a:
    MakeContext<FDS_ViewModelContext_GuildMark>(&local_48);
    pFVar3 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x1f8;
      UDS_GuildData::GetData
                ((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
      bVar5 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get(local_res10);
        pFVar3->GuildMarkTableID = *(int *)&pUVar8[4].field_0x20;
        pUVar8 = FWeakObjectPtr::Get(local_res10);
        pFVar3->GuildMarkColorTableID = *(int *)&pUVar8[4].field_0x24;
        pUVar8 = FWeakObjectPtr::Get(local_res10);
        pFVar3->GuildMarkBgTableID = *(int *)(pUVar8 + 5);
        pUVar8 = FWeakObjectPtr::Get(local_res10);
        pFVar3->GuildMarkBgColorTableID = *(int *)&pUVar8[5].field_0x4;
      }
      pUVar7 = (this->VM_GuildMark).field0_0x0.DebugPtr;
      local_28.Object = (FDS_ViewModelContext *)local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UDS_VM_GuildData *)0x0) goto LAB_14be9fb85;
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_38);
  pFVar4 = local_38.Object;
  if (local_38.Object != (FDS_ViewModelContext_GuildData *)0x0) {
    if ((local_38.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x211;
    TVar10 = UDS_GuildManager::GetMyGuildData();
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
                    /* WARNING: Load size is inaccurate */
    (pFVar4->guildData).WeakPtr = *TVar10.WeakPtr;
    pUVar9 = (this->VM_GuildData).field0_0x0.DebugPtr;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
LAB_14be9fb85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_GuildData @ 14beb7830

void __thiscall UDS_VM_GuildMain::SetVM_GuildData(UDS_VM_GuildMain *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildData *pFVar2;
  bool bVar3;
  UDS_VM_GuildData *pUVar4;
  TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> TVar5;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x211;
  TVar5 = UDS_GuildManager::GetMyGuildData();
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
                    /* WARNING: Load size is inaccurate */
  (pFVar2->guildData).WeakPtr = *TVar5.WeakPtr;
  pUVar4 = (this->VM_GuildData).field0_0x0.DebugPtr;
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

// SetVM_GuildMark @ 14beb7ea0

void __thiscall UDS_VM_GuildMain::SetVM_GuildMark(UDS_VM_GuildMain *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
  UDS_GuildData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkTableID = *(int *)&pUVar5[4].field_0x20;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkColorTableID = *(int *)&pUVar5[4].field_0x24;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgTableID = *(int *)(pUVar5 + 5);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar5[5].field_0x4;
  }
  pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
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

// UnbindModel @ 14bebbfe0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMain::UnbindModel(UDS_VM_GuildMain *this)

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

