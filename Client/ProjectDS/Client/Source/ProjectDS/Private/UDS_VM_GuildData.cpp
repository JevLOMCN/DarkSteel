// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b64efd0

UClass * __cdecl UDS_VM_GuildData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildData",
               &Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildData,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildData>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton;
}

// UDS_VM_GuildData @ 14b6527a0

UDS_VM_GuildData * __thiscall
UDS_VM_GuildData::UDS_VM_GuildData(UDS_VM_GuildData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildData__6B_;
  FText::FText(&this->Txt_GuildName);
  FText::FText(&this->Txt_GuildMasterName);
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  (this->Txt_GuildLevel).StringTableType = None;
  (this->Txt_GuildLevel).StringTableID = 0;
  (this->Txt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildLevel).DateTime.Ticks = 0;
  (this->Txt_GuildLevel).TimeSpan.Ticks = 0;
  (this->Txt_GuildLevel).TimeExpressionType = None;
  (this->Txt_GuildLevel).IsExpression = false;
  (this->Txt_GuildLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildExp).StringTableType = None;
  (this->Txt_GuildExp).StringTableID = 0;
  (this->Txt_GuildExp).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildExp).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildExp).DateTime.Ticks = 0;
  (this->Txt_GuildExp).TimeSpan.Ticks = 0;
  (this->Txt_GuildExp).TimeExpressionType = None;
  (this->Txt_GuildExp).IsExpression = false;
  (this->Txt_GuildExp).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildExp).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildExp).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildExp).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildExp).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildExp).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildJoinLimitLevel).StringTableType = None;
  (this->Txt_GuildJoinLimitLevel).StringTableID = 0;
  (this->Txt_GuildJoinLimitLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildJoinLimitLevel).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildJoinLimitLevel).DateTime.Ticks = 0;
  (this->Txt_GuildJoinLimitLevel).TimeSpan.Ticks = 0;
  (this->Txt_GuildJoinLimitLevel).TimeExpressionType = None;
  (this->Txt_GuildJoinLimitLevel).IsExpression = false;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildNumberMembers).StringTableType = None;
  (this->Txt_GuildNumberMembers).StringTableID = 0;
  (this->Txt_GuildNumberMembers).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildNumberMembers).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildNumberMembers).DateTime.Ticks = 0;
  (this->Txt_GuildNumberMembers).TimeSpan.Ticks = 0;
  (this->Txt_GuildNumberMembers).TimeExpressionType = None;
  (this->Txt_GuildNumberMembers).IsExpression = false;
  (this->Txt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_GuildNumberMembers).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildNumberMembers).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayMax = 0;
  (this->GuildData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_GuildData @ 14b652940

UDS_VM_GuildData * __thiscall
UDS_VM_GuildData::UDS_VM_GuildData(UDS_VM_GuildData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildData__6B_;
  FText::FText(&this->Txt_GuildName);
  FText::FText(&this->Txt_GuildMasterName);
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  (this->Txt_GuildLevel).StringTableType = None;
  (this->Txt_GuildLevel).StringTableID = 0;
  (this->Txt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildLevel).DateTime.Ticks = 0;
  (this->Txt_GuildLevel).TimeSpan.Ticks = 0;
  (this->Txt_GuildLevel).TimeExpressionType = None;
  (this->Txt_GuildLevel).IsExpression = false;
  (this->Txt_GuildLevel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildExp).StringTableType = None;
  (this->Txt_GuildExp).StringTableID = 0;
  (this->Txt_GuildExp).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildExp).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildExp).DateTime.Ticks = 0;
  (this->Txt_GuildExp).TimeSpan.Ticks = 0;
  (this->Txt_GuildExp).TimeExpressionType = None;
  (this->Txt_GuildExp).IsExpression = false;
  (this->Txt_GuildExp).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildExp).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildExp).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildExp).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildExp).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildExp).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildJoinLimitLevel).StringTableType = None;
  (this->Txt_GuildJoinLimitLevel).StringTableID = 0;
  (this->Txt_GuildJoinLimitLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildJoinLimitLevel).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildJoinLimitLevel).DateTime.Ticks = 0;
  (this->Txt_GuildJoinLimitLevel).TimeSpan.Ticks = 0;
  (this->Txt_GuildJoinLimitLevel).TimeExpressionType = None;
  (this->Txt_GuildJoinLimitLevel).IsExpression = false;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildJoinLimitLevel).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayMax = 0;
  (this->Txt_GuildNumberMembers).StringTableType = None;
  (this->Txt_GuildNumberMembers).StringTableID = 0;
  (this->Txt_GuildNumberMembers).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_GuildNumberMembers).StringEnumTableNameID.Number = 0;
  (this->Txt_GuildNumberMembers).DateTime.Ticks = 0;
  (this->Txt_GuildNumberMembers).TimeSpan.Ticks = 0;
  (this->Txt_GuildNumberMembers).TimeExpressionType = None;
  (this->Txt_GuildNumberMembers).IsExpression = false;
  (this->Txt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_GuildNumberMembers).UniqueString.Data.ArrayNum = 0;
  (this->Txt_GuildNumberMembers).UniqueString.Data.ArrayMax = 0;
  (this->Txt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayMax = 0;
  (this->GuildData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_GuildData @ 14b654f10

void __thiscall UDS_VM_GuildData::~UDS_VM_GuildData(UDS_VM_GuildData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data,
             (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_GuildNumberMembers).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_GuildNumberMembers).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data,
             (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_GuildJoinLimitLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_GuildExp).FormatArgs.AllocatorInstance.Data,
             (this->Txt_GuildExp).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_GuildExp).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_GuildExp).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_GuildLevel).FormatArgs.AllocatorInstance.Data,
             (this->Txt_GuildLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_GuildLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_GuildLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildMasterName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657200

IClassDescriptor * __thiscall
UDS_VM_GuildData::GetFieldNotificationDescriptor(UDS_VM_GuildData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6579d0

UClass * __cdecl UDS_VM_GuildData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildData",
               &Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildData,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildData>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildData @ 14b6582b0

void __cdecl UDS_VM_GuildData::StaticRegisterNativesUDS_VM_GuildData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_GuildData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b6592c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildData::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_GuildData__6B_;
    FText::FText((FText *)(this + 1));
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    *(undefined1 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined1 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnUpdateGuildData @ 14b659990

void __cdecl UDS_VM_GuildData::execOnUpdateGuildData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateGuildData((UDS_VM_GuildData *)param_1,local_res10);
  return;
}

// BindModel @ 14be756a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_GuildData::BindModel(UDS_VM_GuildData *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_GuildData *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->GuildData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->GuildData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_GuildData::OnUpdateGuildData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be7573b:
    pcVar6 = &DAT_00000002;
LAB_14be75740:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14be7573b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be75740;
  }
  ::FName::FName(&local_res18,pcVar6);
  if ((this == (UDS_VM_GuildData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = local_res18;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_GuildData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_GuildData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be75881;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_GuildData>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14be75881:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// InitViewModel @ 14be8cba0

void __thiscall UDS_VM_GuildData::InitViewModel(UDS_VM_GuildData *this)

{
  return;
}

// OnSetViewModel @ 14be9eb60

void __thiscall
UDS_VM_GuildData::OnSetViewModel(UDS_VM_GuildData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataBase *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_GuildData>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->GuildData).WeakPtr = ((local_28.Object)->guildData).WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(&(this->GuildData).WeakPtr);
    if (bVar3) {
      pUVar4 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->GuildData).WeakPtr);
      OnUpdateGuildData(this,pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateGuildData @ 14bea7710

void __thiscall UDS_VM_GuildData::OnUpdateGuildData(UDS_VM_GuildData *this,UDS_DataBase *param_1)

{
  int *piVar1;
  TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> *this_00;
  FDS_Text *this_01;
  FInstancedStruct *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FObjectPtr_u_0 FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UObject *pUVar10;
  FText *pFVar11;
  FObjectPtr_u_0 *pFVar12;
  FDS_Int32StringFormatArg *pFVar13;
  UDS_GuildData *pUVar14;
  FString *pFVar15;
  FString *pFVar16;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong *plVar18;
  FDS_Int32StringFormatArg local_res10 [2];
  FName local_res18;
  FString local_58;
  FText local_48;
  
  if (param_1 != (UDS_DataBase *)0x0) {
    this_00 = &this->GuildData;
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar11 = FText::FromString(&local_48,(FString *)&pUVar10[2].field_0x20);
    iVar9 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
    bVar7 = FText::IdenticalTo(&this->Txt_GuildName,pFVar11,None);
    if (!bVar7) {
      pIVar3 = (pFVar11->TextData).Reference;
      pIVar4 = (this->Txt_GuildName).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildName).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildName).Flags = pFVar11->Flags;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
      local_58.Data.ArrayNum = iVar9;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    plVar18 = &this->_padding_;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar11 = FText::FromString(&local_48,(FString *)&pUVar10[3].field_0x8);
    iVar9 = FFieldNotificationClassDescriptor::Txt_GuildMasterName.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::Txt_GuildMasterName.FieldName;
    bVar7 = FText::IdenticalTo(&this->Txt_GuildMasterName,pFVar11,None);
    if (!bVar7) {
      pIVar3 = (pFVar11->TextData).Reference;
      pIVar4 = (this->Txt_GuildMasterName).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildMasterName).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildMasterName).Flags = pFVar11->Flags;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
      local_58.Data.ArrayNum = iVar9;
      (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar11 = FText::FromString(&local_48,(FString *)&pUVar10[3].field_0x18);
    iVar9 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.FieldName;
    bVar7 = FText::IdenticalTo(&this->Txt_GuildIntroduction,pFVar11,None);
    if (!bVar7) {
      pIVar3 = (pFVar11->TextData).Reference;
      pIVar4 = (this->Txt_GuildIntroduction).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildIntroduction).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildIntroduction).Flags = pFVar11->Flags;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
      local_58.Data.ArrayNum = iVar9;
      (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar11 = FText::FromString(&local_48,(FString *)(pUVar10 + 4));
    iVar9 = FFieldNotificationClassDescriptor::Txt_GuildNotice.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::Txt_GuildNotice.FieldName;
    bVar7 = FText::IdenticalTo(&this->Txt_GuildNotice,pFVar11,None);
    if (!bVar7) {
      pIVar3 = (pFVar11->TextData).Reference;
      pIVar4 = (this->Txt_GuildNotice).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->Txt_GuildNotice).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->Txt_GuildNotice).Flags = pFVar11->Flags;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
      local_58.Data.ArrayNum = iVar9;
      (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res10[0].Value = *(int *)&pUVar10[4].field_0x10;
    FDS_Text::Reset(&this->Txt_GuildLevel);
    FDS_Text::SetTextFormatFromStringTable<int_const_&>
              (&this->Txt_GuildLevel,StringUi,0x29812,&local_res10[0].Value);
    local_58.Data.ArrayNum = FFieldNotificationClassDescriptor::Txt_GuildLevel.BitNumber;
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::Txt_GuildLevel.FieldName;
    (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    this_01 = &this->Txt_GuildJoinLimitLevel;
    iVar9 = *(int *)&pUVar10[4].field_0x1c;
    FDS_Text::Reset(this_01);
    if (iVar9 < 1) {
      FDS_Text::SetTextFromStringTable(this_01,StringUi,0x3a9af);
    }
    else {
      this_01->StringTableType = StringUi;
      (this->Txt_GuildJoinLimitLevel).StringTableID = 0x3a9ae;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)
                 (this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data,
                 (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum);
      piVar1 = &(this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayMax;
      (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance,0,piVar1);
      }
      iVar8 = (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&(this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance,
                           piVar1);
      }
      (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = iVar8 + 1;
      pFVar2 = (FInstancedStruct *)
               ((this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data +
               (longlong)iVar8 * 0x28);
      FInstancedStruct::FInstancedStruct(pFVar2);
      pFVar12 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar5 = pFVar12[1];
      pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar12;
      pFVar2[1].StructMemory = (uchar *)FVar5;
      pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar12[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
      pFVar13 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
      if (pFVar13 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar13->Value = iVar9;
      }
    }
    local_58.Data.ArrayNum = FFieldNotificationClassDescriptor::Txt_GuildJoinLimitLevel.BitNumber;
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::Txt_GuildJoinLimitLevel.FieldName;
    (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar9 = FFieldNotificationClassDescriptor::GuildJoinLimitLevel.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::GuildJoinLimitLevel.FieldName;
    if (this->GuildJoinLimitLevel != *(int *)&pUVar10[4].field_0x1c) {
      this->GuildJoinLimitLevel = *(int *)&pUVar10[4].field_0x1c;
      local_58.Data.ArrayNum = iVar9;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar6;
      (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    }
    pUVar14 = (UDS_GuildData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res10[0].Value = UDS_GuildData::GetGuildMaxMembersCount(pUVar14);
    pUVar14 = (UDS_GuildData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar9 = UDS_GuildData::GetGuildMembersCount(pUVar14);
    FDS_Text::Reset(&this->Txt_GuildNumberMembers);
    (this->Txt_GuildNumberMembers).StringTableType = StringUi;
    pTVar17 = &(this->Txt_GuildNumberMembers).FormatArgs;
    (this->Txt_GuildNumberMembers).StringTableID = 0x2b0b;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar17->AllocatorInstance).Data,
               (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum);
    piVar1 = &(this->Txt_GuildNumberMembers).FormatArgs.ArrayMax;
    (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar17->AllocatorInstance,0,piVar1);
    }
    iVar8 = (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar17->AllocatorInstance,piVar1);
    }
    (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = iVar8 + 1;
    pFVar2 = (FInstancedStruct *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar2);
    pFVar12 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar5 = pFVar12[1];
    pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar12;
    pFVar2[1].StructMemory = (uchar *)FVar5;
    pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar12[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
    pFVar13 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
    if (pFVar13 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar13->Value = iVar9;
    }
    iVar9 = (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar17->AllocatorInstance,piVar1);
    }
    (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = iVar9 + 1;
    pFVar2 = (FInstancedStruct *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar2);
    pFVar12 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar5 = pFVar12[1];
    pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar12;
    pFVar2[1].StructMemory = (uchar *)FVar5;
    pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar12[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
    pFVar13 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
    if (pFVar13 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar13->Value = local_res10[0].Value;
    }
    local_58.Data.ArrayNum = FFieldNotificationClassDescriptor::Txt_GuildNumberMembers.BitNumber;
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::Txt_GuildNumberMembers.FieldName;
    (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
    pUVar14 = (UDS_GuildData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar8 = UDS_GuildData::GetGuildNextLevelExp(pUVar14);
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar9 = *(int *)&pUVar10[4].field_0x14;
    FDS_Text::Reset(&this->Txt_GuildExp);
    pFVar15 = ::FString::FormatAsNumber(&local_58,iVar8);
    pFVar16 = ::FString::FormatAsNumber((FString *)&local_48,iVar9);
    (this->Txt_GuildExp).StringTableType = StringUi;
    (this->Txt_GuildExp).StringTableID = 0x2b0b;
    pTVar17 = &(this->Txt_GuildExp).FormatArgs;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar17->AllocatorInstance).Data,
               (this->Txt_GuildExp).FormatArgs.ArrayNum);
    piVar1 = &(this->Txt_GuildExp).FormatArgs.ArrayMax;
    (this->Txt_GuildExp).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar17->AllocatorInstance,0,piVar1);
    }
    iVar9 = (this->Txt_GuildExp).FormatArgs.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar17->AllocatorInstance,piVar1);
    }
    (this->Txt_GuildExp).FormatArgs.ArrayNum = iVar9 + 1;
    FDS_TextFormatArg::FDS_TextFormatArg<FString>
              ((FDS_TextFormatArg *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 0x28),
               pFVar16);
    iVar9 = (this->Txt_GuildExp).FormatArgs.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar17->AllocatorInstance,piVar1);
    }
    (this->Txt_GuildExp).FormatArgs.ArrayNum = iVar9 + 1;
    FDS_TextFormatArg::FDS_TextFormatArg<FString>
              ((FDS_TextFormatArg *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 0x28),
               pFVar15);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.ArrayNum = FFieldNotificationClassDescriptor::Txt_GuildExp.BitNumber;
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::Txt_GuildExp.FieldName;
    (**(code **)(*plVar18 + 0x38))(plVar18,&local_58);
  }
  return;
}

// SetGuildJoinLimitLevel @ 14beaf980

void __thiscall UDS_VM_GuildData::SetGuildJoinLimitLevel(UDS_VM_GuildData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildJoinLimitLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildJoinLimitLevel.FieldName;
  if (this->GuildJoinLimitLevel != param_1) {
    this->GuildJoinLimitLevel = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxt_GuildExp @ 14beb4f30

void __thiscall UDS_VM_GuildData::SetTxt_GuildExp(UDS_VM_GuildData *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar5;
  FString local_28;
  FString local_18;
  
  FDS_Text::Reset(&this->Txt_GuildExp);
  pFVar3 = ::FString::FormatAsNumber(&local_18,param_2);
  pFVar4 = ::FString::FormatAsNumber(&local_28,param_1);
  (this->Txt_GuildExp).StringTableType = StringUi;
  (this->Txt_GuildExp).StringTableID = 0x2b0b;
  pTVar5 = &(this->Txt_GuildExp).FormatArgs;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar5->AllocatorInstance).Data,
             (this->Txt_GuildExp).FormatArgs.ArrayNum);
  piVar1 = &(this->Txt_GuildExp).FormatArgs.ArrayMax;
  (this->Txt_GuildExp).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar5->AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->Txt_GuildExp).FormatArgs.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->Txt_GuildExp).FormatArgs.ArrayNum = iVar2 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString>
            ((FDS_TextFormatArg *)((pTVar5->AllocatorInstance).Data + (longlong)iVar2 * 0x28),pFVar4
            );
  iVar2 = (this->Txt_GuildExp).FormatArgs.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->Txt_GuildExp).FormatArgs.ArrayNum = iVar2 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString>
            ((FDS_TextFormatArg *)((pTVar5->AllocatorInstance).Data + (longlong)iVar2 * 0x28),pFVar3
            );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.Data.ArrayNum = FFieldNotificationClassDescriptor::Txt_GuildExp.BitNumber;
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::Txt_GuildExp.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetTxt_GuildIntroduction @ 14beb5150

void __thiscall UDS_VM_GuildData::SetTxt_GuildIntroduction(UDS_VM_GuildData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildIntroduction,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildIntroduction).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildIntroduction).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildJoinLimitLevel @ 14beb52d0

void __thiscall UDS_VM_GuildData::SetTxt_GuildJoinLimitLevel(UDS_VM_GuildData *this,int param_1)

{
  int *piVar1;
  FDS_Text *this_00;
  FInstancedStruct *this_01;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  FDS_Int32StringFormatArg *pFVar5;
  FName local_18;
  int local_10;
  
  this_00 = &this->Txt_GuildJoinLimitLevel;
  FDS_Text::Reset(this_00);
  if (param_1 < 1) {
    FDS_Text::SetTextFromStringTable(this_00,StringUi,0x3a9af);
  }
  else {
    this_00->StringTableType = StringUi;
    (this->Txt_GuildJoinLimitLevel).StringTableID = 0x3a9ae;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)
               (this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data,
               (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum);
    piVar1 = &(this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayMax;
    (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance,0,piVar1);
    }
    iVar3 = (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance,piVar1)
      ;
    }
    (this->Txt_GuildJoinLimitLevel).FormatArgs.ArrayNum = iVar3 + 1;
    this_01 = (FInstancedStruct *)
              ((this->Txt_GuildJoinLimitLevel).FormatArgs.AllocatorInstance.Data +
              (longlong)iVar3 * 0x28);
    FInstancedStruct::FInstancedStruct(this_01);
    pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar4[1];
    this_01[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
    this_01[1].StructMemory = (uchar *)FVar2;
    this_01[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_01);
    pFVar5 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_01);
    if (pFVar5 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar5->Value = param_1;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::Txt_GuildJoinLimitLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_GuildJoinLimitLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_GuildLevel @ 14beb5400

void __thiscall UDS_VM_GuildData::SetTxt_GuildLevel(UDS_VM_GuildData *this,int param_1)

{
  int local_res10 [6];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1;
  FDS_Text::Reset(&this->Txt_GuildLevel);
  FDS_Text::SetTextFormatFromStringTable<int_const_&>
            (&this->Txt_GuildLevel,StringUi,0x29812,local_res10);
  local_10 = FFieldNotificationClassDescriptor::Txt_GuildLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_GuildLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_GuildMasterName @ 14beb5470

void __thiscall UDS_VM_GuildData::SetTxt_GuildMasterName(UDS_VM_GuildData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildMasterName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildMasterName.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildMasterName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildMasterName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildMasterName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildMasterName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildName @ 14beb55f0

void __thiscall UDS_VM_GuildData::SetTxt_GuildName(UDS_VM_GuildData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildNotice @ 14beb5830

void __thiscall UDS_VM_GuildData::SetTxt_GuildNotice(UDS_VM_GuildData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildNotice.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildNotice.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildNotice,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildNotice).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildNotice).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildNumberMembers @ 14beb59b0

void __thiscall
UDS_VM_GuildData::SetTxt_GuildNumberMembers(UDS_VM_GuildData *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  FName local_28;
  int local_20;
  
  FDS_Text::Reset(&this->Txt_GuildNumberMembers);
  (this->Txt_GuildNumberMembers).StringTableType = StringUi;
  pTVar2 = &(this->Txt_GuildNumberMembers).FormatArgs;
  (this->Txt_GuildNumberMembers).StringTableID = 0x2b0b;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum);
  piVar1 = &(this->Txt_GuildNumberMembers).FormatArgs.ArrayMax;
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = param_1;
  }
  iVar5 = (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Txt_GuildNumberMembers).FormatArgs.ArrayNum = iVar5 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar6[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar7->Value = param_2;
  }
  local_20 = FFieldNotificationClassDescriptor::Txt_GuildNumberMembers.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Txt_GuildNumberMembers.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// UnbindModel @ 14bebbe30

void __thiscall UDS_VM_GuildData::UnbindModel(UDS_VM_GuildData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->GuildData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->GuildData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

