// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b693300

UClass * __cdecl UDS_VM_MailData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MailData",
               &Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MailData,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MailData>,InternalVTableHelperCtorCaller<UDS_VM_MailData>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton;
}

// UDS_VM_MailData @ 14b6994b0

UDS_VM_MailData * __thiscall
UDS_VM_MailData::UDS_VM_MailData(UDS_VM_MailData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MailTitle).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailData__6B_;
  (this->MailTitle).StringTableID = 0;
  (this->MailTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailTitle).StringEnumTableNameID.Number = 0;
  (this->MailTitle).DateTime.Ticks = 0;
  (this->MailTitle).TimeSpan.Ticks = 0;
  (this->MailTitle).TimeExpressionType = None;
  (this->MailTitle).IsExpression = false;
  (this->MailTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).UniqueString.Data.ArrayNum = 0;
  (this->MailTitle).UniqueString.Data.ArrayMax = 0;
  (this->MailTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).FormatArgs.ArrayNum = 0;
  (this->MailTitle).FormatArgs.ArrayMax = 0;
  (this->MailSenderName).StringTableType = None;
  (this->MailSenderName).StringTableID = 0;
  (this->MailSenderName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailSenderName).StringEnumTableNameID.Number = 0;
  (this->MailSenderName).DateTime.Ticks = 0;
  (this->MailSenderName).TimeSpan.Ticks = 0;
  (this->MailSenderName).TimeExpressionType = None;
  (this->MailSenderName).IsExpression = false;
  (this->MailSenderName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).UniqueString.Data.ArrayNum = 0;
  (this->MailSenderName).UniqueString.Data.ArrayMax = 0;
  (this->MailSenderName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).FormatArgs.ArrayNum = 0;
  (this->MailSenderName).FormatArgs.ArrayMax = 0;
  (this->MailContent).StringTableType = None;
  (this->MailContent).StringTableID = 0;
  (this->MailContent).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailContent).StringEnumTableNameID.Number = 0;
  (this->MailContent).DateTime.Ticks = 0;
  (this->MailContent).TimeSpan.Ticks = 0;
  (this->MailContent).TimeExpressionType = None;
  (this->MailContent).IsExpression = false;
  (this->MailContent).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).UniqueString.Data.ArrayNum = 0;
  (this->MailContent).UniqueString.Data.ArrayMax = 0;
  (this->MailContent).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).FormatArgs.ArrayNum = 0;
  (this->MailContent).FormatArgs.ArrayMax = 0;
  FText::FText(&this->SendTime);
  (this->MailBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->MailData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_MailData @ 14b699610

UDS_VM_MailData * __thiscall
UDS_VM_MailData::UDS_VM_MailData(UDS_VM_MailData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MailTitle).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailData__6B_;
  (this->MailTitle).StringTableID = 0;
  (this->MailTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailTitle).StringEnumTableNameID.Number = 0;
  (this->MailTitle).DateTime.Ticks = 0;
  (this->MailTitle).TimeSpan.Ticks = 0;
  (this->MailTitle).TimeExpressionType = None;
  (this->MailTitle).IsExpression = false;
  (this->MailTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).UniqueString.Data.ArrayNum = 0;
  (this->MailTitle).UniqueString.Data.ArrayMax = 0;
  (this->MailTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).FormatArgs.ArrayNum = 0;
  (this->MailTitle).FormatArgs.ArrayMax = 0;
  (this->MailSenderName).StringTableType = None;
  (this->MailSenderName).StringTableID = 0;
  (this->MailSenderName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailSenderName).StringEnumTableNameID.Number = 0;
  (this->MailSenderName).DateTime.Ticks = 0;
  (this->MailSenderName).TimeSpan.Ticks = 0;
  (this->MailSenderName).TimeExpressionType = None;
  (this->MailSenderName).IsExpression = false;
  (this->MailSenderName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).UniqueString.Data.ArrayNum = 0;
  (this->MailSenderName).UniqueString.Data.ArrayMax = 0;
  (this->MailSenderName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).FormatArgs.ArrayNum = 0;
  (this->MailSenderName).FormatArgs.ArrayMax = 0;
  (this->MailContent).StringTableType = None;
  (this->MailContent).StringTableID = 0;
  (this->MailContent).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MailContent).StringEnumTableNameID.Number = 0;
  (this->MailContent).DateTime.Ticks = 0;
  (this->MailContent).TimeSpan.Ticks = 0;
  (this->MailContent).TimeExpressionType = None;
  (this->MailContent).IsExpression = false;
  (this->MailContent).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).UniqueString.Data.ArrayNum = 0;
  (this->MailContent).UniqueString.Data.ArrayMax = 0;
  (this->MailContent).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).FormatArgs.ArrayNum = 0;
  (this->MailContent).FormatArgs.ArrayMax = 0;
  FText::FText(&this->SendTime);
  (this->MailBgResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.PackageName.Number = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MailBgResourcePath).AssetPath.AssetName.Number = 0;
  (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MailBgResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->MailData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_MailData @ 14b69add0

void __thiscall UDS_VM_MailData::~UDS_VM_MailData(UDS_VM_MailData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailData__6B_;
  pFVar1 = (this->MailBgResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SendTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MailContent).FormatArgs.AllocatorInstance.Data,
             (this->MailContent).FormatArgs.ArrayNum);
  pFVar1 = (this->MailContent).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailContent).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MailSenderName).FormatArgs.AllocatorInstance.Data,
             (this->MailSenderName).FormatArgs.ArrayNum);
  pFVar1 = (this->MailSenderName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailSenderName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MailTitle).FormatArgs.AllocatorInstance.Data,
             (this->MailTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->MailTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d330

IClassDescriptor * __thiscall UDS_VM_MailData::GetFieldNotificationDescriptor(UDS_VM_MailData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MailData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dde0

UClass * __cdecl UDS_VM_MailData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MailData",
               &Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MailData,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MailData>,InternalVTableHelperCtorCaller<UDS_VM_MailData>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MailData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MailData @ 14b69e710

void __cdecl UDS_VM_MailData::StaticRegisterNativesUDS_VM_MailData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_MailData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b69f450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_MailData::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_MailData__6B_;
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
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FText::FText((FText *)&this[2]._padding_);
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnMailDataChanged @ 14b69f850

void __cdecl UDS_VM_MailData::execOnMailDataChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnMailDataChanged((UDS_VM_MailData *)param_1,local_res10);
  return;
}

// BindModel @ 14be11c50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_MailData::BindModel(UDS_VM_MailData *this)

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

// InitViewModel @ 14be25300

void __thiscall UDS_VM_MailData::InitViewModel(UDS_VM_MailData *this)

{
  return;
}

// OnMailDataChanged @ 14be31130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MailData::OnMailDataChanged(UDS_VM_MailData *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_DataBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_MailData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14be3117f;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be3117f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar2 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar2) {
    UpdateMailDataUI(this);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MailData::OnMailDataChanged",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x86,L"mailData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be398a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_MailData::OnSetViewModel(UDS_VM_MailData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MailDataSet *this_00;
  TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> TVar5;
  UObject *pUVar6;
  char *pcVar7;
  UObject *this_01;
  UFunction *pUVar8;
  char *pcVar9;
  undefined1 auStackY_258 [32];
  <lambda_1> local_228 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  FWeakObjectPtr local_218;
  FName local_210;
  FWeakObjectPtr local_208;
  FName local_200;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_1f8;
  FName local_1e8;
  UDS_VM_MailData *local_1e0;
  FName *local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1c0;
  FDestructionSentinel local_1b0;
  undefined1 local_198 [32];
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1d0.Object = param_1->Object;
  local_1d0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Mail>(&local_1f8,&local_1d0);
  if (local_1f8.Object == (FDS_ViewModelContext_Mail *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_MailData::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x18,L"context.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14be39c7d;
  }
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) goto LAB_14be39c7d;
  this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_208);
  if ((local_1f8.Object == (FDS_ViewModelContext_Mail *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar5 = UDS_MailDataSet::GetMailData(this_00,(FString *)local_198);
                    /* WARNING: Load size is inaccurate */
  (this->MailData).WeakPtr = *TVar5.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&(this->MailData).WeakPtr);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&(this->MailData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),(UObject *)this)
    ;
    pUVar6 = FWeakObjectPtr::Get(&(this->MailData).WeakPtr);
    pcVar7 = strstr("&UDS_VM_MailData::OnMailDataChanged","::");
    if (pcVar7 == (char *)0x0) {
LAB_14be39aab:
      pcVar9 = &DAT_00000002;
LAB_14be39ab0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar9 = pcVar7;
        pcVar7 = strstr(pcVar9 + 1,"::");
      } while (pcVar7 != (char *)0x0);
      if (pcVar9 == (char *)0x0) goto LAB_14be39aab;
      pcVar9 = pcVar9 + 2;
      if (*pcVar9 == '0') goto LAB_14be39ab0;
    }
    ::FName::FName(&local_1e8,pcVar9);
    if ((this == (UDS_VM_MailData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x4c8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_200 = local_1e8;
    local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    local_210.ComparisonIndex.Value = 0;
    local_210.Number = 0;
    if ((this == (UDS_VM_MailData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x46d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_1e0 = this;
    if (this == (UDS_VM_MailData *)0x0) {
      local_1e0 = (UDS_VM_MailData *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1e0 != (UDS_VM_MailData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1e0);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1e0);
    local_210 = local_200;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_220,(FReadAccessScope *)(local_198 + 8));
    if ((local_210 == (FName)0x0) ||
       (this_01 = FWeakObjectPtr::Get(&local_218), this_01 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_198 + 8));
LAB_14be39bec:
      local_1d8 = &local_200;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
      __Internal_BindDynamic<UDS_VM_MailData>'::__l2::<lambda_1>::operator()(&local_1d8);
    }
    else {
      pUVar8 = UObject::FindFunction(this_01,local_210);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_198 + 8));
      if (pUVar8 == (UFunction *)0x0) goto LAB_14be39bec;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_220,&local_178);
    local_1c0.Object = local_218;
    local_1c0.FunctionName = local_210;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),
               (FWriteAccessScope *)&local_1b0);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&pUVar6[1].field_0x8,local_228,Default);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),&local_1c0);
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  }
  UpdateMailDataUI(this);
LAB_14be39c7d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMailBgResourcePath @ 14be4d6a0

void __thiscall
UDS_VM_MailData::SetMailBgResourcePath(UDS_VM_MailData *this,FSoftObjectPath *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  FUtf8String *pFVar8;
  FName local_28;
  int local_20;
  
  iVar6 = FFieldNotificationClassDescriptor::MailBgResourcePath.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::MailBgResourcePath.FieldName;
  bVar7 = FSoftObjectPath::operator==(&this->MailBgResourcePath,param_1);
  if (!bVar7) {
    FVar4 = (param_1->AssetPath).AssetName;
    (this->MailBgResourcePath).AssetPath.PackageName = (param_1->AssetPath).PackageName;
    (this->MailBgResourcePath).AssetPath.AssetName = FVar4;
    pFVar8 = &(this->MailBgResourcePath).SubPathString;
    if (pFVar8 != &param_1->SubPathString) {
      iVar2 = (param_1->SubPathString).Data.ArrayNum;
      piVar1 = &(this->MailBgResourcePath).SubPathString.Data.ArrayMax;
      iVar3 = *piVar1;
      _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
      (this->MailBgResourcePath).SubPathString.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,iVar3,(ForAnyElementType *)pFVar8,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src,(longlong)iVar2);
        }
      }
    }
    local_28 = FVar5;
    local_20 = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetMailContent @ 14be4d780

void __thiscall UDS_VM_MailData::SetMailContent(UDS_VM_MailData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MailContent.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MailContent.FieldName;
  FDS_Text::operator=(&this->MailContent,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMailIconID @ 14be4d7e0

void __thiscall UDS_VM_MailData::SetMailIconID(UDS_VM_MailData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MailIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MailIconID.FieldName;
  if (this->MailIconID != param_1) {
    this->MailIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMailSenderName @ 14be4d830

void __thiscall UDS_VM_MailData::SetMailSenderName(UDS_VM_MailData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MailSenderName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MailSenderName.FieldName;
  FDS_Text::operator=(&this->MailSenderName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMailTitle @ 14be4d890

void __thiscall UDS_VM_MailData::SetMailTitle(UDS_VM_MailData *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MailTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MailTitle.FieldName;
  FDS_Text::operator=(&this->MailTitle,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSendTime @ 14be51930

void __thiscall UDS_VM_MailData::SetSendTime(UDS_VM_MailData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SendTime.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SendTime.FieldName;
  bVar5 = FText::IdenticalTo(&this->SendTime,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->SendTime).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SendTime).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SendTime).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// UnbindModel @ 14be55520

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_MailData::UnbindModel(UDS_VM_MailData *this)

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

// UpdateMailDataUI @ 14be57cc0

void __thiscall UDS_VM_MailData::UpdateMailDataUI(UDS_VM_MailData *this)

{
  TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *this_00;
  void *pvVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FDS_MailBaseTableRow *pFVar7;
  FDS_MailContentTableRow *pFVar8;
  FDS_ResourceImageTableRow *pFVar9;
  FText *pFVar10;
  FName FVar11;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_res8 [8];
  FDateTime local_res10;
  FString local_c8;
  FDS_Text local_b8;
  FText local_68;
  FString local_58 [2];
  
  this_00 = &this->MailData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar7 = FDS_MailBaseTableRow::GetRef((ulonglong)(byte)pUVar6[4].field_0x8,true);
    if (pFVar7->isMailContentRequired == false) {
      pFVar9 = FDS_ResourceImageTableRow::GetRef(pFVar7->ID_MailBg,true);
      SetMailBgResourcePath(this,&pFVar9->IconPath);
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = *(int *)&pUVar6[3].field_0x8;
      lVar12 = (longlong)local_c8.Data.ArrayNum;
      pvVar1 = *(void **)(pUVar6 + 3);
      if (local_c8.Data.ArrayNum == 0) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                   local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,pvVar1,lVar12 * 2);
      }
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromUniqueString(&local_b8,&local_c8);
      SetMailSenderName(this,&local_b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_68.TextData.Reference = (ITextData *)0x0;
      local_68.Flags = *(uint *)&pUVar6[3].field_0x18;
      lVar12 = (longlong)(int)local_68.Flags;
      pvVar1 = *(void **)&pUVar6[3].field_0x10;
      if (local_68.Flags == 0) {
        local_68._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Flags,0,(ForAnyElementType *)&local_68,local_68.Flags,
                   (int *)&local_68.field_0xc);
        memcpy(local_68.TextData.Reference,pvVar1,lVar12 * 2);
      }
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromUniqueString(&local_b8,(FString *)&local_68);
      iVar5 = FFieldNotificationClassDescriptor::MailContent.BitNumber;
      FVar11 = FFieldNotificationClassDescriptor::MailContent.FieldName;
      FDS_Text::operator=(&this->MailContent,&local_b8);
      plVar13 = &this->_padding_;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      local_c8.Data.ArrayNum = iVar5;
      (**(code **)(this->_padding_ + 0x38))(plVar13,&local_c8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_68.TextData.Reference = (ITextData *)0x0;
      local_68.Flags = *(uint *)&pUVar6[2].field_0x20;
      lVar12 = (longlong)(int)local_68.Flags;
      pvVar1 = *(void **)&pUVar6[2].field_0x18;
      if (local_68.Flags == 0) {
        local_68._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Flags,0,(ForAnyElementType *)&local_68,local_68.Flags,
                   (int *)&local_68.field_0xc);
        memcpy(local_68.TextData.Reference,pvVar1,lVar12 * 2);
      }
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromUniqueString(&local_b8,(FString *)&local_68);
      iVar5 = FFieldNotificationClassDescriptor::MailTitle.BitNumber;
      FVar11 = FFieldNotificationClassDescriptor::MailTitle.FieldName;
      FDS_Text::operator=(&this->MailTitle,&local_b8);
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      local_c8.Data.ArrayNum = iVar5;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_c8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    else {
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = *(int *)&pUVar6[2].field_0x20;
      lVar12 = (longlong)local_c8.Data.ArrayNum;
      pvVar1 = *(void **)&pUVar6[2].field_0x18;
      if (local_c8.Data.ArrayNum == 0) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                   local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,pvVar1,lVar12 * 2);
      }
      FVar11 = (FName)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar11 = (FName)local_c8.Data.AllocatorInstance;
      }
      iVar5 = _wtoi((wchar_t *)FVar11);
      if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pFVar8 = FDS_MailContentTableRow::GetRef((longlong)iVar5,true);
      lVar12 = pFVar8->ID_MailBg;
      if (lVar12 == 0) {
        lVar12 = pFVar7->ID_MailBg;
      }
      pFVar9 = FDS_ResourceImageTableRow::GetRef(lVar12,true);
      SetMailBgResourcePath(this,&pFVar9->IconPath);
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_b8,StringMail,pFVar8->ID_MailSenderName);
      FDS_Text::operator=(&this->MailSenderName,&local_b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_b8,StringMail,pFVar8->ID_MailContents);
      FDS_Text::operator=(&this->MailContent,&local_b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_b8.StringTableType = None;
      local_b8.StringTableID = 0;
      local_b8.DateTime.Ticks = 0;
      local_b8.TimeSpan.Ticks = 0;
      local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_b8.StringEnumTableNameID.Number = 0;
      local_b8.TimeExpressionType = None;
      local_b8.IsExpression = false;
      local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.UniqueString.Data.ArrayNum = 0;
      local_b8.UniqueString.Data.ArrayMax = 0;
      local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.FormatArgs.ArrayNum = 0;
      local_b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_b8,StringMail,pFVar8->ID_MailTitle);
      FDS_Text::operator=(&this->MailTitle,&local_b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      SetMailSenderName(this,&this->MailSenderName);
      SetMailContent(this,&this->MailContent);
      SetMailTitle(this,&this->MailTitle);
    }
    plVar13 = &this->_padding_;
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    lVar12 = *(longlong *)&pUVar6[3].field_0x20;
    dVar14 = UDS_TimeUtilManager::GetGMTOffset();
    auVar15._0_8_ = dVar14 * __real_416312d000000000 + __real_3fe0000000000000;
    auVar15._8_8_ = extraout_XMM0_Qb;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar15._0_8_;
    auVar16 = roundpd(auVar15,auVar16,1);
    local_res10.Ticks = (longlong)auVar16._0_8_ + lVar12;
    UDS_TimeUtilManager::ConvertStringFromDateTime(local_58,&local_res10,DateHourMin,false);
    pFVar10 = FText::FromString(&local_68,local_58);
    iVar5 = FFieldNotificationClassDescriptor::SendTime.BitNumber;
    FVar11 = FFieldNotificationClassDescriptor::SendTime.FieldName;
    bVar4 = FText::IdenticalTo(&this->SendTime,pFVar10,None);
    if (!bVar4) {
      pIVar2 = (pFVar10->TextData).Reference;
      pIVar3 = (this->SendTime).TextData.Reference;
      if (pIVar3 != pIVar2) {
        (this->SendTime).TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->SendTime).Flags = pFVar10->Flags;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      local_c8.Data.ArrayNum = iVar5;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_c8);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar5 = FFieldNotificationClassDescriptor::MailIconID.BitNumber;
    FVar11 = FFieldNotificationClassDescriptor::MailIconID.FieldName;
    if (this->MailIconID != *(int *)&pUVar6[4].field_0xc) {
      this->MailIconID = *(int *)&pUVar6[4].field_0xc;
      local_c8.Data.ArrayNum = iVar5;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_c8);
    }
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

