// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetLockText_WrapperImpl @ 14b6aef70

void __cdecl UDS_VM_NPCShopGoodsInfo::SetLockText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LockText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LockText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xd0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetNextDateTimeText_WrapperImpl @ 14b6aef80

void __cdecl UDS_VM_NPCShopGoodsInfo::SetNextDateTimeText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NextDateTimeText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NextDateTimeText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x120),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6aef90

UClass * __cdecl UDS_VM_NPCShopGoodsInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCShopGoodsInfo",
               &Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCShopGoodsInfo,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCShopGoodsInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCShopGoodsInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton;
}

// UDS_VM_NPCShopGoodsInfo @ 14b6b1460

UDS_VM_NPCShopGoodsInfo * __thiscall
UDS_VM_NPCShopGoodsInfo::UDS_VM_NPCShopGoodsInfo
          (UDS_VM_NPCShopGoodsInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->ShopListTID = 0;
  this->ShopGroupId = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->ItemTID = 0;
  this->ItemValue = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopGoodsInfo__6B_;
  this->SelectMaxCnt = 0;
  this->BuyPrice = 0;
  this->IsBuyLimitAble = false;
  this->BuyLimitResetTimeId = 0;
  this->BuyLimitCount = 0;
  this->Quantity = 0;
  this->LockStateSwitcher = 0;
  this->IsLocked = false;
  (this->LockText).StringTableType = None;
  (this->LockText).StringTableID = 0;
  (this->LockText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LockText).StringEnumTableNameID.Number = 0;
  (this->LockText).DateTime.Ticks = 0;
  (this->LockText).TimeSpan.Ticks = 0;
  (this->LockText).TimeExpressionType = None;
  (this->LockText).IsExpression = false;
  (this->LockText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockText).UniqueString.Data.ArrayNum = 0;
  (this->LockText).UniqueString.Data.ArrayMax = 0;
  (this->LockText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockText).FormatArgs.ArrayNum = 0;
  (this->LockText).FormatArgs.ArrayMax = 0;
  (this->NextDateTimeText).StringTableType = None;
  (this->NextDateTimeText).StringTableID = 0;
  (this->NextDateTimeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NextDateTimeText).StringEnumTableNameID.Number = 0;
  (this->NextDateTimeText).DateTime.Ticks = 0;
  (this->NextDateTimeText).TimeSpan.Ticks = 0;
  (this->NextDateTimeText).TimeExpressionType = None;
  (this->NextDateTimeText).IsExpression = false;
  (this->NextDateTimeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NextDateTimeText).UniqueString.Data.ArrayNum = 0;
  (this->NextDateTimeText).UniqueString.Data.ArrayMax = 0;
  (this->NextDateTimeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDateTimeText).FormatArgs.ArrayNum = 0;
  (this->NextDateTimeText).FormatArgs.ArrayMax = 0;
  this->IsSelected = false;
  (this->FixedText_SoldOut).StringTableType = StringUi;
  (this->FixedText_SoldOut).StringTableID = 0x4e51;
  (this->FixedText_SoldOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SoldOut).StringEnumTableNameID.Number = 0;
  (this->FixedText_SoldOut).DateTime.Ticks = 0;
  (this->FixedText_SoldOut).TimeSpan.Ticks = 0;
  (this->FixedText_SoldOut).TimeExpressionType = None;
  (this->FixedText_SoldOut).IsExpression = false;
  (this->FixedText_SoldOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SoldOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SoldOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SoldOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_SoldOut).FormatArgs.ArrayNum = 0;
  (this->FixedText_SoldOut).FormatArgs.ArrayMax = 0;
  (this->NextDateTime).Ticks = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_VM_NPCShopGoodsInfo @ 14b6b1610

UDS_VM_NPCShopGoodsInfo * __thiscall
UDS_VM_NPCShopGoodsInfo::UDS_VM_NPCShopGoodsInfo
          (UDS_VM_NPCShopGoodsInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->ShopListTID = 0;
  this->ShopGroupId = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->ItemTID = 0;
  this->ItemValue = 0;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopGoodsInfo__6B_;
  this->SelectMaxCnt = 0;
  this->BuyPrice = 0;
  this->IsBuyLimitAble = false;
  this->BuyLimitResetTimeId = 0;
  this->BuyLimitCount = 0;
  this->Quantity = 0;
  this->LockStateSwitcher = 0;
  this->IsLocked = false;
  (this->LockText).StringTableType = None;
  (this->LockText).StringTableID = 0;
  (this->LockText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LockText).StringEnumTableNameID.Number = 0;
  (this->LockText).DateTime.Ticks = 0;
  (this->LockText).TimeSpan.Ticks = 0;
  (this->LockText).TimeExpressionType = None;
  (this->LockText).IsExpression = false;
  (this->LockText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockText).UniqueString.Data.ArrayNum = 0;
  (this->LockText).UniqueString.Data.ArrayMax = 0;
  (this->LockText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockText).FormatArgs.ArrayNum = 0;
  (this->LockText).FormatArgs.ArrayMax = 0;
  (this->NextDateTimeText).StringTableType = None;
  (this->NextDateTimeText).StringTableID = 0;
  (this->NextDateTimeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NextDateTimeText).StringEnumTableNameID.Number = 0;
  (this->NextDateTimeText).DateTime.Ticks = 0;
  (this->NextDateTimeText).TimeSpan.Ticks = 0;
  (this->NextDateTimeText).TimeExpressionType = None;
  (this->NextDateTimeText).IsExpression = false;
  (this->NextDateTimeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NextDateTimeText).UniqueString.Data.ArrayNum = 0;
  (this->NextDateTimeText).UniqueString.Data.ArrayMax = 0;
  (this->NextDateTimeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDateTimeText).FormatArgs.ArrayNum = 0;
  (this->NextDateTimeText).FormatArgs.ArrayMax = 0;
  this->IsSelected = false;
  (this->FixedText_SoldOut).StringTableType = StringUi;
  (this->FixedText_SoldOut).StringTableID = 0x4e51;
  (this->FixedText_SoldOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SoldOut).StringEnumTableNameID.Number = 0;
  (this->FixedText_SoldOut).DateTime.Ticks = 0;
  (this->FixedText_SoldOut).TimeSpan.Ticks = 0;
  (this->FixedText_SoldOut).TimeExpressionType = None;
  (this->FixedText_SoldOut).IsExpression = false;
  (this->FixedText_SoldOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SoldOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SoldOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SoldOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_SoldOut).FormatArgs.ArrayNum = 0;
  (this->FixedText_SoldOut).FormatArgs.ArrayMax = 0;
  (this->NextDateTime).Ticks = 0;
  (this->NPCShopData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCShopData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NpcFunctionShop).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_VM_NPCShopGoodsInfo @ 14b6b3a60

void __thiscall UDS_VM_NPCShopGoodsInfo::~UDS_VM_NPCShopGoodsInfo(UDS_VM_NPCShopGoodsInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NPCShopGoodsInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_SoldOut).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SoldOut).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SoldOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SoldOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NextDateTimeText).FormatArgs.AllocatorInstance.Data,
             (this->NextDateTimeText).FormatArgs.ArrayNum);
  pFVar1 = (this->NextDateTimeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextDateTimeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->LockText).FormatArgs.AllocatorInstance.Data,
             (this->LockText).FormatArgs.ArrayNum);
  pFVar1 = (this->LockText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LockText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6780

IClassDescriptor * __thiscall
UDS_VM_NPCShopGoodsInfo::GetFieldNotificationDescriptor(UDS_VM_NPCShopGoodsInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NPCShopGoodsInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b6fe0

UClass * __cdecl UDS_VM_NPCShopGoodsInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NPCShopGoodsInfo",
               &Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_NPCShopGoodsInfo,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NPCShopGoodsInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_NPCShopGoodsInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NPCShopGoodsInfo.InnerSingleton;
}

// GetTickableTickType @ 14b6b7ca0

ETickableTickType __thiscall
UDS_VM_NPCShopGoodsInfo::GetTickableTickType(UDS_VM_NPCShopGoodsInfo *this)

{
  return Conditional;
}

// IsUpdate @ 14b6b7cd0

bool __thiscall UDS_VM_NPCShopGoodsInfo::IsUpdate(UDS_VM_NPCShopGoodsInfo *this)

{
  return this->IsBuyLimitAble;
}

// StaticRegisterNativesUDS_VM_NPCShopGoodsInfo @ 14b6b7d40

void __cdecl UDS_VM_NPCShopGoodsInfo::StaticRegisterNativesUDS_VM_NPCShopGoodsInfo(void)

{
  return;
}

// __VTableCtorCaller @ 14b6b8c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NPCShopGoodsInfo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_VM_NPCShopGoodsInfo__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x4e51;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10 = 0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this[2].TextPropertyIDList,(FObjectPtr)&local_res10);
    local_res10 = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this[2].TextPropertyIDList.ArrayNum,(FObjectPtr)&local_res10);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bed8c10

void __thiscall UDS_VM_NPCShopGoodsInfo::BindModel(UDS_VM_NPCShopGoodsInfo *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedNPCShopList,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NPCShopGoodsInfo>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdatedNPCShopList,(UDS_VM_NPCShopGoodsInfo *)&stack0x00000010,
               (pmf_aabd4446 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectShopItemSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NPCShopGoodsInfo>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectShopItemSlot,(UDS_VM_NPCShopGoodsInfo *)&stack0x00000010,
               (pmf_d193bdea *)this);
  }
  return;
}

// OnSelectShopItem @ 14bf04240

void __thiscall UDS_VM_NPCShopGoodsInfo::OnSelectShopItem(UDS_VM_NPCShopGoodsInfo *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if ((this->ShopListTID == param_1) && (0 < param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (this->IsSelected != bVar1) {
    this->IsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf07b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NPCShopGoodsInfo::OnSetViewModel
          (UDS_VM_NPCShopGoodsInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TSharedPtr<FDS_ViewModelContext_NPCShopGoodsInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NPCShopGoodsInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_NPCShopGoodsInfo *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bf07cfb;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_NPCShopGoodsInfo::OnSetViewModel",0x27,Yes);
    pwVar5 = L"goodsInfoContext == nullptr";
    uVar4 = 0x19;
  }
  else {
    (this->NPCShopData).WeakPtr = (FWeakObjectPtr)(local_158.Object)->_padding_;
    bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCShopData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bf07cfb;
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NPCShopGoodsInfo::OnSetViewModel",0x27,Yes);
      pwVar5 = L"NPCShopData is nullptr.";
      uVar4 = 0x20;
    }
    else {
      (this->NpcFunctionShop).WeakPtr = (FWeakObjectPtr)(local_158.Object)->_padding_;
      bVar2 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                        (&this->NpcFunctionShop,(void *)0x0);
      if (!bVar2) {
        this->ShopListTID = (local_158.Object)->ShopListTableID;
        UpdateGoodsInfo(this);
        goto LAB_14bf07cfb;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bf07cfb;
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NPCShopGoodsInfo::OnSetViewModel",0x27,Yes);
      pwVar5 = L"NpcFunctionShop is nullptr";
      uVar4 = 0x27;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bf07cfb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf0ace0

void __thiscall UDS_VM_NPCShopGoodsInfo::OnUpdate(UDS_VM_NPCShopGoodsInfo *this,float param_1)

{
  int iVar1;
  UDS_ShopManager *pUVar2;
  FDS_ShopListTableRow *this_00;
  FDateTime FVar3;
  FTimespan FStackX_8;
  undefined1 auStackX_10 [8];
  FName FStackX_18;
  FName FStack_78;
  int iStack_70;
  FDS_Text FStack_68;
  
  if ((this->IsBuyLimitAble != false) &&
     (pUVar2 = UDS_ShopManager::GetInst(), pUVar2 != (UDS_ShopManager *)0x0)) {
    if ((this->NextDateTime).Ticks == 0) {
      this_00 = FDS_ShopListTableRow::GetRef((longlong)this->ShopListTID,true);
      FDS_ShopListTableRow::ID_BuyLimitResetTimeTable(this_00);
      FVar3 = UDS_TimeUtilManager::GetCronExpressionTime((int)auStackX_10);
                    /* WARNING: Load size is inaccurate */
      (this->NextDateTime).Ticks = *FVar3.Ticks;
    }
    FVar3 = UDS_TimeUtilManager::GetCurrentServerDateTime();
    FStackX_8.Ticks = (this->NextDateTime).Ticks - *(longlong *)FVar3.Ticks;
    if (FStackX_8.Ticks < 0) {
      (this->NextDateTime).Ticks = 0;
      pUVar2->IsDirty = true;
      return;
    }
    FStack_68.StringTableType = None;
    FStack_68.StringTableID = 0;
    FStack_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_68.StringEnumTableNameID.Number = 0;
    FStack_68.DateTime.Ticks = 0;
    FStack_68.TimeSpan.Ticks = 0;
    FStack_68.TimeExpressionType = None;
    FStack_68.IsExpression = false;
    FStack_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_68.UniqueString.Data.ArrayNum = 0;
    FStack_68.UniqueString.Data.ArrayMax = 0;
    FStack_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_68.FormatArgs.ArrayNum = 0;
    FStack_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromTimespan(&FStack_68,&FStackX_8,DayHourSec,false);
    iVar1 = FFieldNotificationClassDescriptor::NextDateTimeText.BitNumber;
    FStackX_18 = FFieldNotificationClassDescriptor::NextDateTimeText.FieldName;
    FDS_Text::operator=(&this->NextDateTimeText,&FStack_68);
    FStack_78 = FStackX_18;
    iStack_70 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_68.FormatArgs.AllocatorInstance.Data,
               FStack_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(FStack_68.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnUpdatedNPCShopList @ 14bf0b220

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_VM_NPCShopGoodsInfo::OnUpdatedNPCShopList(UDS_VM_NPCShopGoodsInfo *this)

{
  FInstancedStruct *this_00;
  EDS_BuyLimitContentsType EVar1;
  FWeakObjectPtr FVar2;
  FObjectPtr_u_0 FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  UDS_NPCShopData *pUVar7;
  FDS_NPCShopGoodsInfo *pFVar8;
  FDS_NPCShopGoodsInfo *pFVar9;
  FObjectPtr_u_0 *pFVar10;
  FDS_Int32StringFormatArg *pFVar11;
  long64 lVar12;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> TStack_88;
  FDS_Text FStack_78;
  
  bVar5 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar5) {
    return;
  }
  bVar5 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                    (&this->NpcFunctionShop,(void *)0x0);
  if (bVar5) {
    return;
  }
  pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pFVar8 = UDS_NPCShopData::GetNPCShopGoodsInfo(pUVar7,this->ShopListTID);
  if (pFVar8 == (FDS_NPCShopGoodsInfo *)0x0) {
    return;
  }
  pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pFVar9 = UDS_NPCShopData::GetNPCShopBasketGoodsInfo(pUVar7,this->ShopListTID);
  this->ShopGroupId = pFVar8->ShopGroupId;
  this->ItemTID = pFVar8->ItemTID;
  this->ItemValue = pFVar8->ItemValue;
  this->SelectMaxCnt = pFVar8->SelectMaxCnt;
  this->BuyPrice = pFVar8->BuyPrice;
  bVar5 = pFVar8->IsBuyLimitAble;
  this->IsBuyLimitAble = bVar5;
  this->BuyLimitResetTimeId = pFVar8->BuyLimitResetTimeId;
  this->BuyLimitCount = pFVar8->BuyLimitCount;
  (this->NextDateTime).Ticks = (pFVar8->NextDateTime).Ticks;
  iVar6 = pFVar8->Quantity;
  this->Quantity = iVar6;
  if (((bVar5 == true) && (pFVar9 != (FDS_NPCShopGoodsInfo *)0x0)) &&
     (iVar6 = iVar6 - pFVar9->Quantity, this->Quantity = iVar6, iVar6 < 0)) {
    this->Quantity = 0;
  }
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::ShopListTID.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ShopListTID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::ShopGroupId.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ShopGroupId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::ItemTID.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ItemTID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::ItemValue.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ItemValue.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::SelectMaxCnt.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::SelectMaxCnt.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::BuyPrice.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyPrice.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::IsBuyLimitAble.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsBuyLimitAble.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::BuyLimitResetTimeId.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyLimitResetTimeId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::BuyLimitCount.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyLimitCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::Quantity.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::Quantity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  UpdateLeftTime(this);
  FVar2 = (this->NPCShopData).WeakPtr;
  this->LockStateSwitcher = 0;
  bVar5 = FDS_ItemShopService::IsShopGoodsBuyLimitCotentsCheck
                    ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)FVar2,this->ShopListTID);
  this->IsLocked = bVar5;
  if ((this->IsBuyLimitAble == true) && (this->Quantity < 1)) {
    this->IsLocked = true;
    this->LockStateSwitcher = 2;
    TStack_88.ArrayNum = FFieldNotificationClassDescriptor::IsLocked.BitNumber;
    TStack_88.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsLocked.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
    TStack_88.ArrayNum = FFieldNotificationClassDescriptor::LockStateSwitcher.BitNumber;
    TStack_88.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::LockStateSwitcher.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
    FStack_78.StringTableType = None;
    FStack_78.StringTableID = 0;
    FStack_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_78.StringEnumTableNameID.Number = 0;
    FStack_78.TimeExpressionType = None;
    FStack_78.DateTime.Ticks = 0;
    FStack_78.TimeSpan.Ticks = 0;
    FStack_78.IsExpression = false;
    FStack_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_78.UniqueString.Data.ArrayNum = 0;
    FStack_78.UniqueString.Data.ArrayMax = 0;
    FStack_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_78.FormatArgs.ArrayNum = 0;
    FStack_78.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&FStack_78,StringUi,0x4e51);
    iVar6 = FFieldNotificationClassDescriptor::LockText.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LockText.FieldName;
    FDS_Text::operator=(&this->LockText,&FStack_78);
    TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    TStack_88.ArrayNum = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_78.FormatArgs.AllocatorInstance.Data,
               FStack_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(FStack_78.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_78.UniqueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_78.UniqueString.Data.AllocatorInstance.Data);
    return;
  }
  if (!bVar5) goto LAB_14bf1fcc9;
  EVar1 = pFVar8->BuyLimitContentsType;
  if (EVar1 == PlayerUnder) {
    lVar12 = 0x4e4e;
LAB_14bf1fb9c:
    FStack_78.StringTableType = None;
    FStack_78.StringTableID = 0;
    FStack_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_78.StringEnumTableNameID.Number = 0;
    FStack_78.TimeExpressionType = None;
    FStack_78.DateTime.Ticks = 0;
    FStack_78.TimeSpan.Ticks = 0;
    FStack_78.IsExpression = false;
    FStack_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_78.UniqueString.Data.ArrayNum = 0;
    FStack_78.UniqueString.Data.ArrayMax = 0;
    FStack_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_78.FormatArgs.ArrayNum = 0;
    FStack_78.FormatArgs.ArrayMax = 0;
    TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_88.ArrayNum = 0;
    TStack_88.ArrayMax = 0;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&TStack_88.AllocatorInstance,&TStack_88.ArrayMax);
    TStack_88.ArrayNum = iVar6 + 1;
    this_00 = (FInstancedStruct *)(TStack_88.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar10 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar3 = pFVar10[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar10;
    this_00[1].StructMemory = (uchar *)FVar3;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar10[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
    pFVar11 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
    if (pFVar11 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar11->Value = pFVar8->BuyLimitContentsValue;
    }
    FDS_Text::SetTextFormatFromStringTable(&FStack_78,StringUi,lVar12,&TStack_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)TStack_88.AllocatorInstance.Data,TStack_88.ArrayNum);
    if ((FDS_TextFormatArg *)TStack_88.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(TStack_88.AllocatorInstance.Data);
    }
    iVar6 = FFieldNotificationClassDescriptor::LockText.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LockText.FieldName;
    FDS_Text::operator=(&this->LockText,&FStack_78);
    TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    TStack_88.ArrayNum = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_78.FormatArgs.AllocatorInstance.Data,
               FStack_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(FStack_78.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (EVar1 == PlayerOver) {
      lVar12 = 0x4e4f;
      goto LAB_14bf1fb9c;
    }
    if (EVar1 == Character) {
      lVar12 = 0x4e50;
      goto LAB_14bf1fb9c;
    }
  }
  this->LockStateSwitcher = 1;
LAB_14bf1fcc9:
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::IsLocked.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsLocked.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  TStack_88.ArrayNum = FFieldNotificationClassDescriptor::LockStateSwitcher.BitNumber;
  TStack_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::LockStateSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_88);
  return;
}

// SetLockText @ 14bf15bc0

void __thiscall
UDS_VM_NPCShopGoodsInfo::SetLockText(UDS_VM_NPCShopGoodsInfo *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LockText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LockText.FieldName;
  FDS_Text::operator=(&this->LockText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNextDateTimeText @ 14bf17790

void __thiscall
UDS_VM_NPCShopGoodsInfo::SetNextDateTimeText(UDS_VM_NPCShopGoodsInfo *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NextDateTimeText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NextDateTimeText.FieldName;
  FDS_Text::operator=(&this->NextDateTimeText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf1e380

void __thiscall UDS_VM_NPCShopGoodsInfo::UnbindModel(UDS_VM_NPCShopGoodsInfo *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdatedNPCShopList,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectShopItemSlot,
               this);
  }
  return;
}

// UpdateGoodsInfo @ 14bf1f790

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_VM_NPCShopGoodsInfo::UpdateGoodsInfo(UDS_VM_NPCShopGoodsInfo *this)

{
  FInstancedStruct *this_00;
  EDS_BuyLimitContentsType EVar1;
  FWeakObjectPtr FVar2;
  FObjectPtr_u_0 FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  UDS_NPCShopData *pUVar7;
  FDS_NPCShopGoodsInfo *pFVar8;
  FDS_NPCShopGoodsInfo *pFVar9;
  FObjectPtr_u_0 *pFVar10;
  FDS_Int32StringFormatArg *pFVar11;
  long64 lVar12;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FDS_Text local_78;
  
  bVar5 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals(&this->NPCShopData,(void *)0x0)
  ;
  if (bVar5) {
    return;
  }
  bVar5 = TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
                    (&this->NpcFunctionShop,(void *)0x0);
  if (bVar5) {
    return;
  }
  pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pFVar8 = UDS_NPCShopData::GetNPCShopGoodsInfo(pUVar7,this->ShopListTID);
  if (pFVar8 == (FDS_NPCShopGoodsInfo *)0x0) {
    return;
  }
  pUVar7 = (UDS_NPCShopData *)FWeakObjectPtr::Get(&(this->NPCShopData).WeakPtr);
  pFVar9 = UDS_NPCShopData::GetNPCShopBasketGoodsInfo(pUVar7,this->ShopListTID);
  this->ShopGroupId = pFVar8->ShopGroupId;
  this->ItemTID = pFVar8->ItemTID;
  this->ItemValue = pFVar8->ItemValue;
  this->SelectMaxCnt = pFVar8->SelectMaxCnt;
  this->BuyPrice = pFVar8->BuyPrice;
  bVar5 = pFVar8->IsBuyLimitAble;
  this->IsBuyLimitAble = bVar5;
  this->BuyLimitResetTimeId = pFVar8->BuyLimitResetTimeId;
  this->BuyLimitCount = pFVar8->BuyLimitCount;
  (this->NextDateTime).Ticks = (pFVar8->NextDateTime).Ticks;
  iVar6 = pFVar8->Quantity;
  this->Quantity = iVar6;
  if (((bVar5 == true) && (pFVar9 != (FDS_NPCShopGoodsInfo *)0x0)) &&
     (iVar6 = iVar6 - pFVar9->Quantity, this->Quantity = iVar6, iVar6 < 0)) {
    this->Quantity = 0;
  }
  local_88.ArrayNum = FFieldNotificationClassDescriptor::ShopListTID.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ShopListTID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::ShopGroupId.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ShopGroupId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::ItemTID.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ItemTID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::ItemValue.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::ItemValue.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::SelectMaxCnt.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::SelectMaxCnt.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::BuyPrice.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyPrice.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::IsBuyLimitAble.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsBuyLimitAble.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::BuyLimitResetTimeId.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyLimitResetTimeId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::BuyLimitCount.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::BuyLimitCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::Quantity.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::Quantity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  UpdateLeftTime(this);
  FVar2 = (this->NPCShopData).WeakPtr;
  this->LockStateSwitcher = 0;
  bVar5 = FDS_ItemShopService::IsShopGoodsBuyLimitCotentsCheck
                    ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>)FVar2,this->ShopListTID);
  this->IsLocked = bVar5;
  if ((this->IsBuyLimitAble == true) && (this->Quantity < 1)) {
    this->IsLocked = true;
    this->LockStateSwitcher = 2;
    local_88.ArrayNum = FFieldNotificationClassDescriptor::IsLocked.BitNumber;
    local_88.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsLocked.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_88.ArrayNum = FFieldNotificationClassDescriptor::LockStateSwitcher.BitNumber;
    local_88.AllocatorInstance.Data =
         (FScriptContainerElement *)FFieldNotificationClassDescriptor::LockStateSwitcher.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_78.StringTableType = None;
    local_78.StringTableID = 0;
    local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_78.StringEnumTableNameID.Number = 0;
    local_78.TimeExpressionType = None;
    local_78.DateTime.Ticks = 0;
    local_78.TimeSpan.Ticks = 0;
    local_78.IsExpression = false;
    local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.UniqueString.Data.ArrayNum = 0;
    local_78.UniqueString.Data.ArrayMax = 0;
    local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.FormatArgs.ArrayNum = 0;
    local_78.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x4e51);
    iVar6 = FFieldNotificationClassDescriptor::LockText.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LockText.FieldName;
    FDS_Text::operator=(&this->LockText,&local_78);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    local_88.ArrayNum = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
               local_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
    }
    if (local_78.UniqueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
    return;
  }
  if (!bVar5) goto LAB_14bf1fcc9;
  EVar1 = pFVar8->BuyLimitContentsType;
  if (EVar1 == PlayerUnder) {
    lVar12 = 0x4e4e;
LAB_14bf1fb9c:
    local_78.StringTableType = None;
    local_78.StringTableID = 0;
    local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_78.StringEnumTableNameID.Number = 0;
    local_78.TimeExpressionType = None;
    local_78.DateTime.Ticks = 0;
    local_78.TimeSpan.Ticks = 0;
    local_78.IsExpression = false;
    local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.UniqueString.Data.ArrayNum = 0;
    local_78.UniqueString.Data.ArrayMax = 0;
    local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.FormatArgs.ArrayNum = 0;
    local_78.FormatArgs.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_88.AllocatorInstance,&local_88.ArrayMax);
    local_88.ArrayNum = iVar6 + 1;
    this_00 = (FInstancedStruct *)(local_88.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar10 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar3 = pFVar10[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar10;
    this_00[1].StructMemory = (uchar *)FVar3;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar10[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
    pFVar11 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
    if (pFVar11 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar11->Value = pFVar8->BuyLimitContentsValue;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_78,StringUi,lVar12,&local_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    iVar6 = FFieldNotificationClassDescriptor::LockText.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LockText.FieldName;
    FDS_Text::operator=(&this->LockText,&local_78);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar4;
    local_88.ArrayNum = iVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
               local_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
    }
    if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (EVar1 == PlayerOver) {
      lVar12 = 0x4e4f;
      goto LAB_14bf1fb9c;
    }
    if (EVar1 == Character) {
      lVar12 = 0x4e50;
      goto LAB_14bf1fb9c;
    }
  }
  this->LockStateSwitcher = 1;
LAB_14bf1fcc9:
  local_88.ArrayNum = FFieldNotificationClassDescriptor::IsLocked.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::IsLocked.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_88.ArrayNum = FFieldNotificationClassDescriptor::LockStateSwitcher.BitNumber;
  local_88.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::LockStateSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  return;
}

// UpdateLeftTime @ 14bf20430

void __thiscall UDS_VM_NPCShopGoodsInfo::UpdateLeftTime(UDS_VM_NPCShopGoodsInfo *this)

{
  int iVar1;
  UDS_ShopManager *pUVar2;
  FDS_ShopListTableRow *this_00;
  FDateTime FVar3;
  FTimespan local_res8;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  if ((this->IsBuyLimitAble != false) &&
     (pUVar2 = UDS_ShopManager::GetInst(), pUVar2 != (UDS_ShopManager *)0x0)) {
    if ((this->NextDateTime).Ticks == 0) {
      this_00 = FDS_ShopListTableRow::GetRef((longlong)this->ShopListTID,true);
      FDS_ShopListTableRow::ID_BuyLimitResetTimeTable(this_00);
      FVar3 = UDS_TimeUtilManager::GetCronExpressionTime((int)local_res10);
                    /* WARNING: Load size is inaccurate */
      (this->NextDateTime).Ticks = *FVar3.Ticks;
    }
    FVar3 = UDS_TimeUtilManager::GetCurrentServerDateTime();
    local_res8.Ticks = (this->NextDateTime).Ticks - *(longlong *)FVar3.Ticks;
    if (local_res8.Ticks < 0) {
      (this->NextDateTime).Ticks = 0;
      pUVar2->IsDirty = true;
      return;
    }
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromTimespan(&local_68,&local_res8,DayHourSec,false);
    iVar1 = FFieldNotificationClassDescriptor::NextDateTimeText.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::NextDateTimeText.FieldName;
    FDS_Text::operator=(&this->NextDateTimeText,&local_68);
    local_78 = local_res18;
    local_70 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
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
  }
  return;
}

