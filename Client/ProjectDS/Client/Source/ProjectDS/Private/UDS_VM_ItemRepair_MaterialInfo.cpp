// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b6936c0

UClass * __cdecl UDS_VM_ItemRepair_MaterialInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_MaterialInfo",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_MaterialInfo,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemRepair_MaterialInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_MaterialInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton;
}

// UDS_VM_ItemRepair_MaterialInfo @ 14b698150

UDS_VM_ItemRepair_MaterialInfo * __thiscall
UDS_VM_ItemRepair_MaterialInfo::UDS_VM_ItemRepair_MaterialInfo
          (UDS_VM_ItemRepair_MaterialInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_MaterialInfo__6B_;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->VM_CoinDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay3).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay4).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->TitleLabelText).StringTableType = None;
  (this->TitleLabelText).StringTableID = 0;
  (this->TitleLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabelText).StringEnumTableNameID.Number = 0;
  (this->TitleLabelText).DateTime.Ticks = 0;
  (this->TitleLabelText).TimeSpan.Ticks = 0;
  (this->TitleLabelText).TimeExpressionType = None;
  (this->TitleLabelText).IsExpression = false;
  (this->TitleLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabelText).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabelText).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabelText).FormatArgs.ArrayNum = 0;
  (this->TitleLabelText).FormatArgs.ArrayMax = 0;
  (this->DescLabelText).StringTableType = None;
  (this->DescLabelText).StringTableID = 0;
  (this->DescLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescLabelText).StringEnumTableNameID.Number = 0;
  (this->DescLabelText).DateTime.Ticks = 0;
  (this->DescLabelText).TimeSpan.Ticks = 0;
  (this->DescLabelText).TimeExpressionType = None;
  (this->DescLabelText).IsExpression = false;
  (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DescLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DescLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).FormatArgs.ArrayNum = 0;
  (this->DescLabelText).FormatArgs.ArrayMax = 0;
  (this->MaterialItemSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialItemSlotEventField).UserObjectList.ArrayNum = 0;
  (this->MaterialItemSlotEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->M_CoinDisplayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->M_CoinDisplayList).ArrayNum = 0;
  (this->M_CoinDisplayList).ArrayMax = 0;
  (this->VM_CoinDisplayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VM_CoinDisplayList).ArrayNum = 0;
  (this->VM_CoinDisplayList).ArrayMax = 0;
  *(undefined8 *)&this->MaterialSlotModelMap = 0;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x20 = 0;
  this->SelectedItemTID = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x48 = 0;
  this->bSelectedTargetRepairItem = false;
  return this;
}

// UDS_VM_ItemRepair_MaterialInfo @ 14b698300

UDS_VM_ItemRepair_MaterialInfo * __thiscall
UDS_VM_ItemRepair_MaterialInfo::UDS_VM_ItemRepair_MaterialInfo
          (UDS_VM_ItemRepair_MaterialInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_MaterialInfo__6B_;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->VM_CoinDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay3).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_CoinDisplay4).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->TitleLabelText).StringTableType = None;
  (this->TitleLabelText).StringTableID = 0;
  (this->TitleLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleLabelText).StringEnumTableNameID.Number = 0;
  (this->TitleLabelText).DateTime.Ticks = 0;
  (this->TitleLabelText).TimeSpan.Ticks = 0;
  (this->TitleLabelText).TimeExpressionType = None;
  (this->TitleLabelText).IsExpression = false;
  (this->TitleLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabelText).UniqueString.Data.ArrayNum = 0;
  (this->TitleLabelText).UniqueString.Data.ArrayMax = 0;
  (this->TitleLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleLabelText).FormatArgs.ArrayNum = 0;
  (this->TitleLabelText).FormatArgs.ArrayMax = 0;
  (this->DescLabelText).StringTableType = None;
  (this->DescLabelText).StringTableID = 0;
  (this->DescLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DescLabelText).StringEnumTableNameID.Number = 0;
  (this->DescLabelText).DateTime.Ticks = 0;
  (this->DescLabelText).TimeSpan.Ticks = 0;
  (this->DescLabelText).TimeExpressionType = None;
  (this->DescLabelText).IsExpression = false;
  (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).UniqueString.Data.ArrayNum = 0;
  (this->DescLabelText).UniqueString.Data.ArrayMax = 0;
  (this->DescLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescLabelText).FormatArgs.ArrayNum = 0;
  (this->DescLabelText).FormatArgs.ArrayMax = 0;
  (this->MaterialItemSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialItemSlotEventField).UserObjectList.ArrayNum = 0;
  (this->MaterialItemSlotEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->M_CoinDisplayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->M_CoinDisplayList).ArrayNum = 0;
  (this->M_CoinDisplayList).ArrayMax = 0;
  (this->VM_CoinDisplayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VM_CoinDisplayList).ArrayNum = 0;
  (this->VM_CoinDisplayList).ArrayMax = 0;
  *(undefined8 *)&this->MaterialSlotModelMap = 0;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x20 = 0;
  this->SelectedItemTID = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialSlotModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x48 = 0;
  this->bSelectedTargetRepairItem = false;
  return this;
}

// ~UDS_VM_ItemRepair_MaterialInfo @ 14b69a650

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::~UDS_VM_ItemRepair_MaterialInfo
          (UDS_VM_ItemRepair_MaterialInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_MaterialInfo__6B_;
  *(undefined4 *)&(this->MaterialSlotModelMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialSlotModelMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialSlotModelMap);
  pFVar2 = (this->VM_CoinDisplayList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->M_CoinDisplayList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate);
  pvVar1 = *(void **)&(this->OnClickAutoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickAutoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuantityChangeDelegate).field_0x8,
             *(int *)&(this->OnQuantityChangeDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnQuantityChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuantityChangeDelegate);
  pFVar2 = (this->MaterialItemSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DescLabelText).FormatArgs.AllocatorInstance.Data,
             (this->DescLabelText).FormatArgs.ArrayNum);
  pFVar2 = (this->DescLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DescLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleLabelText).FormatArgs.AllocatorInstance.Data,
             (this->TitleLabelText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d100

IClassDescriptor * __thiscall
UDS_VM_ItemRepair_MaterialInfo::GetFieldNotificationDescriptor(UDS_VM_ItemRepair_MaterialInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemRepair_MaterialInfo::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69da20

UClass * __cdecl UDS_VM_ItemRepair_MaterialInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair_MaterialInfo",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair_MaterialInfo,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemRepair_MaterialInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair_MaterialInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair_MaterialInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemRepair_MaterialInfo @ 14b69e660

void __cdecl
UDS_VM_ItemRepair_MaterialInfo::StaticRegisterNativesUDS_VM_ItemRepair_MaterialInfo(void)

{
  return;
}

// __VTableCtorCaller @ 14b69f210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_ItemRepair_MaterialInfo::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_ItemRepair_MaterialInfo__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
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
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be77de0

void __thiscall UDS_VM_ItemRepair_MaterialInfo::BindModel(UDS_VM_ItemRepair_MaterialInfo *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_ItemRepair_MaterialInfo *local_res8;
  ulonglong uStack_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_ItemRepair_MaterialInfo>
            ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &this->OnQuantityChangeDelegate,(UDS_VM_ItemRepair_MaterialInfo *)&local_res8,
             (pmf_5dcc410e *)this);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->OnClickAutoDelegate).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_MaterialInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnAutoMaterialAdd;
    puVar1[5] = uStack_30;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// InitViewModel @ 14be8de50

void __thiscall UDS_VM_ItemRepair_MaterialInfo::InitViewModel(UDS_VM_ItemRepair_MaterialInfo *this)

{
  TArray<TObjectPtr<UDS_VM_MoneyDisplay>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UDS_VM_W_CommonQuantityControl *pUVar8;
  UDS_VM_MoneyDisplay *pUVar9;
  UDS_M_MoneyDisplay *pUVar10;
  ulonglong uVar11;
  
  if ((this->VM_CommonQuantityControl).field0_0x0.DebugPtr == (UDS_VM_W_CommonQuantityControl *)0x0)
  {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_CommonQuantityControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_W_CommonQuantityControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->VM_CoinDisplay1).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CoinDisplay1).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_CoinDisplay2).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CoinDisplay2).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_CoinDisplay3).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CoinDisplay3).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_CoinDisplay4).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CoinDisplay4).field0_0x0.DebugPtr = pUVar9;
  }
  pTVar1 = &this->VM_CoinDisplayList;
  iVar7 = (this->VM_CoinDisplayList).ArrayNum;
  if (iVar7 == (this->VM_CoinDisplayList).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->VM_CoinDisplayList).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->VM_CoinDisplayList).ArrayNum = iVar7 + 1;
  pUVar9 = (this->VM_CoinDisplay1).field0_0x0.DebugPtr;
  *(UDS_VM_MoneyDisplay **)(pFVar4 + (longlong)iVar7 * 8) = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  iVar7 = (this->VM_CoinDisplayList).ArrayNum;
  if (iVar7 == (this->VM_CoinDisplayList).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->VM_CoinDisplayList).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->VM_CoinDisplayList).ArrayNum = iVar7 + 1;
  pUVar9 = (this->VM_CoinDisplay2).field0_0x0.DebugPtr;
  *(UDS_VM_MoneyDisplay **)(pFVar4 + (longlong)iVar7 * 8) = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  iVar7 = (this->VM_CoinDisplayList).ArrayNum;
  if (iVar7 == (this->VM_CoinDisplayList).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->VM_CoinDisplayList).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->VM_CoinDisplayList).ArrayNum = iVar7 + 1;
  pUVar9 = (this->VM_CoinDisplay3).field0_0x0.DebugPtr;
  *(UDS_VM_MoneyDisplay **)(pFVar4 + (longlong)iVar7 * 8) = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  iVar7 = (this->VM_CoinDisplayList).ArrayNum;
  if (iVar7 == (this->VM_CoinDisplayList).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->VM_CoinDisplayList).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->VM_CoinDisplayList).ArrayNum = iVar7 + 1;
  pUVar9 = (this->VM_CoinDisplay4).field0_0x0.DebugPtr;
  *(UDS_VM_MoneyDisplay **)(pFVar4 + (longlong)iVar7 * 8) = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_MoneyDisplay *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  uVar3 = (this->VM_CoinDisplayList).ArrayNum;
  if (0 < (int)uVar3) {
    uVar11 = (ulonglong)uVar3;
    do {
      pUVar10 = NewObject<UDS_M_MoneyDisplay>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar10 != (UDS_M_MoneyDisplay *)0x0) goto LAB_14be8e0b1;
LAB_14be8e128:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5649315577013993362>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemRepair\\DS_VM_ItemRepair_MaterialInfo.cpp"
                           ,0x6e,"moneyModel");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        if (pUVar10 == (UDS_M_MoneyDisplay *)0x0) goto LAB_14be8e128;
        UE::GC::MarkAsReachable((UObject *)pUVar10);
LAB_14be8e0b1:
        pUVar10->MoneyDisplayType = DisplayWithCheck;
        piVar2 = &(this->M_CoinDisplayList).ArrayMax;
        iVar7 = (this->M_CoinDisplayList).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->M_CoinDisplayList).AllocatorInstance,piVar2);
        }
        (this->M_CoinDisplayList).ArrayNum = iVar7 + 1;
        *(UDS_M_MoneyDisplay **)
         ((this->M_CoinDisplayList).AllocatorInstance.Data + (longlong)iVar7 * 8) = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}

// OnAutoMaterialAdd @ 14be90370

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnAutoMaterialAdd(UDS_VM_ItemRepair_MaterialInfo *this)

{
  TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_M_ItemRepair *this_01;
  UObject *pUVar2;
  UDS_ModelBase *this_02;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res10;
  
  this_00 = &this->ItemRepairModel;
  bVar1 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_M_ItemRepair::AddTargetMaterialQuantity(this_01,(longlong)this->SelectedItemTID);
    pUVar2 = GetTransientPackageAsObject();
    local_res10 = NewObject<UDS_ModelEventItemRepair>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar2[5].field_0x8 = 9;
    this_02 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_ModelBase::UpdateModel
              (this_02,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  return;
}

// OnChangedItemRepairType @ 14be91450

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnChangedItemRepairType
          (UDS_VM_ItemRepair_MaterialInfo *this,EDS_ItemRepairType *param_1)

{
  EDS_ItemRepairType EVar1;
  longlong *plVar2;
  FName local_18;
  int local_10;
  
  EVar1 = *param_1;
  if (EVar1 == BulkRepair) {
    FDS_Text::SetTextFromStringTable(&this->TitleLabelText,StringUi,0x9fda);
    this->RestoreVisibility = Collapsed;
    this->RepairTargetVisibility = Collapsed;
  }
  else if (EVar1 == TargetRepair) {
    FDS_Text::SetTextFromStringTable(&this->TitleLabelText,StringUi,0x9fda);
    this->RestoreVisibility = Collapsed;
    this->RepairTargetVisibility = SelfHitTestInvisible;
  }
  else if (EVar1 == Restore) {
    FDS_Text::SetTextFromStringTable(&this->TitleLabelText,StringUi,0x9fe4);
    this->RestoreVisibility = SelfHitTestInvisible;
    this->RepairTargetVisibility = Collapsed;
  }
  plVar2 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TitleLabelText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TitleLabelText.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_10 = FFieldNotificationClassDescriptor::RestoreVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RestoreVisibility.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  local_10 = FFieldNotificationClassDescriptor::RepairTargetVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RepairTargetVisibility.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  return;
}

// OnEventMaterialItemSlot @ 14be97fd0

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnEventMaterialItemSlot
          (UDS_VM_ItemRepair_MaterialInfo *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 == (UObject *)0x0) {
LAB_14be98030:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14be98030;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 1));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14be980cf;
  }
  pUVar3 = (UObject *)0x0;
LAB_14be980cf:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (((bVar2) && (pUVar3 = FWeakObjectPtr::Get(&local_res18), *(int *)&pUVar3[5].field_0x8 == 6))
     && (bVar2 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::
                 UEOpEquals<UDS_M_ItemImplBase,bool>
                           ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res20,
                            &this->SelectedItemSlotModel), !bVar2)) {
    SetSelectedItem(this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res20,true);
  }
  return;
}

// OnEventUpdateView @ 14be988f0

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnEventUpdateView
          (UDS_VM_ItemRepair_MaterialInfo *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  EDS_ItemRepairType EVar5;
  uint uVar6;
  UObject *pUVar7;
  FName FVar8;
  FString *pFVar9;
  wchar_t *_Str;
  ForAnyElementType FVar10;
  int local_res8 [2];
  undefined1 local_res18 [16];
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> local_48;
  
  bVar4 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
                    (&this->ItemRepairModel,(void *)0x0);
  if (!bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
              ((FDS_DataContainer *)&pUVar7[1].field_0x18,&local_48,UpdateViewEvent);
    iVar3 = local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 4;
    FVar10.Data = local_48.AllocatorInstance.Data;
LAB_14be9895a:
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_ModelEventItemRepair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data != pFVar1) {
      switch(*(undefined4 *)FVar10.Data) {
      case 1:
      case 2:
      case 3:
      case 4:
        pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        EVar5 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                          ((FDS_DataContainer *)&pUVar7[1].field_0x18,ItemRepairType);
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,EVar5);
        break;
      default:
        goto switchD_14be98999_caseD_5;
      case 9:
        OnUpdateMaterialQuantity(this);
        FVar10.Data = FVar10.Data + 4;
        goto LAB_14be9895a;
      case 10:
        pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        EVar5 = FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
                          ((FDS_DataContainer *)&pUVar7[1].field_0x18,ItemRepairType);
        if (EVar5 == BulkRepair) {
          OnUpdatedBulkRepairMaterials(this);
          FVar10.Data = FVar10.Data + 4;
          goto LAB_14be9895a;
        }
        if (EVar5 == TargetRepair) {
          ResetMaterialItems(this);
          OnUpdatedTargetRepairMaterials(this);
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
        }
        else {
          if (EVar5 != Restore) goto switchD_14be98999_caseD_5;
          ResetMaterialItems(this);
          pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
          FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                            ((FDS_DataContainer *)&pUVar7[1].field_0x18,
                             (EDS_ItemRepairData)local_res18);
          uVar2 = *(undefined8 *)FVar8;
          uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
          pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   ::FindOrAddImpl<FName>
                             ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                               *)&pUVar7[1].field_0x18,uVar6 + (int)((ulonglong)uVar2 >> 0x20),
                              (FName *)FVar8);
          if ((pFVar9->Data).ArrayNum == 0) {
            _Str = L"";
          }
          else {
            _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          local_res8[0] = _wtoi(_Str);
          OnUpdatedTargetRestoreMaterials(this,local_res8);
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,3);
        }
        break;
      case 0xb:
        goto switchD_14be98999_caseD_b;
      }
      OnChangedItemRepairType(this,(EDS_ItemRepairType *)local_res8);
switchD_14be98999_caseD_5:
      FVar10.Data = FVar10.Data + 4;
      goto LAB_14be9895a;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
switchD_14be98999_caseD_b:
  ResetMaterialItems(this);
  FVar10.Data = FVar10.Data + 4;
  goto LAB_14be9895a;
}

// OnQuantityChanged @ 14be9b710

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnQuantityChanged
          (UDS_VM_ItemRepair_MaterialInfo *this,float param_1)

{
  TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_M_ItemRepair *this_01;
  UObject *pUVar2;
  UDS_ModelBase *this_02;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res18 [2];
  
  this_00 = &this->ItemRepairModel;
  bVar1 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_M_ItemRepair::SetTargetRepairMaterialQuantity
              (this_01,(longlong)this->SelectedItemTID,(int)param_1);
    if (this->bSelectedTargetRepairItem == false) {
      this->bSelectedTargetRepairItem = true;
      return;
    }
    pUVar2 = GetTransientPackageAsObject();
    local_res18[0] = NewObject<UDS_ModelEventItemRepair>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar2[5].field_0x8 = 9;
    this_02 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_ModelBase::UpdateModel
              (this_02,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  return;
}

// OnSetViewModel @ 14bea50a0

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnSetViewModel
          (UDS_VM_ItemRepair_MaterialInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_ModelBase *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  EDS_ItemRepairType local_res10 [8];
  UDS_VM_ItemRepair_MaterialInfo *local_res18;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemRepair>(&local_88,&local_78);
  if (local_88.Object != (FDS_ViewModelContext_ItemRepair *)0x0) {
    (this->ItemRepairModel).WeakPtr = ((local_88.Object)->ItemRepairModel).WeakPtr;
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    uStack_9c = local_78.SharedReferenceCount.ReferenceController._4_4_;
    uStack_a0 = 0;
    local_68 = (undefined1  [8])0x0;
    local_a8 = OnEventUpdateView;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_MaterialInfo____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
      puVar2[4] = local_a8;
      puVar2[5] = CONCAT44(uStack_9c,uStack_a0);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_ModelBase::AddUpdateViewDelegate
              (this_00,(TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_a8);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_98 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
                 (FDestructionSentinel *)&local_a8);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    local_res10[0] = BulkRepair;
    OnChangedItemRepairType(this,local_res10);
    ResetMaterialItems(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMaterialQuantity @ 14bea7e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnUpdateMaterialQuantity(UDS_VM_ItemRepair_MaterialInfo *this)

{
  undefined8 uVar1;
  UDS_M_ItemImplBase *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  FName FVar8;
  FString *pFVar9;
  longlong lVar10;
  FDS_MaterialSlotInfoArray *pFVar11;
  wchar_t *_Str;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_138 [32];
  FWeakObjectPtr local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  pFVar16 = (FScriptContainerElement *)0x0;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
               *)local_c8,
              (TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
               *)(pUVar7 + 0xe));
  pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_30[0] = 0;
  if (local_78 != &pUVar7[0x12].field_0x18) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_40,local_30,(ForElementType<FSetElementId> *)(pUVar7 + 0x14),
               *(int *)&pUVar7[0x14].field_0x10);
    TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_78,
                (TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pUVar7[0x12].field_0x18);
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&pUVar7[1].field_0x18,(EDS_ItemRepairData)local_d8);
  uVar1 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar7[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  lVar10 = _wtoi64(_Str);
  pFVar11 = TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
            ::FindChecked((TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
                           *)local_78,lVar10);
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = (pFVar11->SelectedMaterialArray).ArrayNum;
  lVar10 = (longlong)local_e8;
  pFVar15 = (pFVar11->SelectedMaterialArray).AllocatorInstance.Data;
  if (local_e8 == 0) {
    local_e4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_e8,0,&local_f0,local_e8,&local_e4);
    memcpy(local_f0.Data,pFVar15,lVar10 << 4);
  }
  local_30[0] = 0;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar6 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  uVar5 = this->SelectedItemTID;
  if (local_c8._8_4_ != local_94) {
    FVar13 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar13 = local_88;
    }
    for (iVar6 = *(int *)((longlong)FVar13 + (ulonglong)(local_80 - 1U & uVar5) * 4); iVar6 != -1;
        iVar6 = *(int *)(local_c8._0_8_ + (longlong)iVar6 * 0x1c + 0x14)) {
      if (*(uint *)(local_c8._0_8_ + (longlong)iVar6 * 0x1c) == uVar5) {
        if (*(int *)&(this->MaterialSlotModelMap).field_0x8 !=
            *(int *)&(this->MaterialSlotModelMap).field_0x34) {
          puVar12 = *(undefined1 **)&(this->MaterialSlotModelMap).field_0x40;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &(this->MaterialSlotModelMap).field_0x38;
          }
          iVar6 = *(int *)(puVar12 +
                          (ulonglong)(*(int *)&(this->MaterialSlotModelMap).field_0x48 - 1U & uVar5)
                          * 4);
          if (iVar6 != -1) {
            goto LAB_14bea8150;
          }
        }
        break;
      }
    }
  }
  goto LAB_14bea8251;
  while (iVar6 = *(int *)(lVar10 + 0x10), iVar6 != -1) {
LAB_14bea8150:
    lVar10 = *(longlong *)&this->MaterialSlotModelMap + (longlong)iVar6 * 0x18;
    if (*(uint *)(*(longlong *)&this->MaterialSlotModelMap + (longlong)iVar6 * 0x18) == uVar5) {
      pFVar15 = (FScriptContainerElement *)(lVar10 + 8);
      if (lVar10 == 0) {
        pFVar15 = pFVar16;
      }
      if (((pFVar15 != (FScriptContainerElement *)0x0) && (*(longlong *)pFVar15 != 0)) &&
         ((*(uint *)(*(longlong *)pFVar15 + 8) >> 0x1e & 1) == 0)) {
        this_00 = *(UDS_M_ItemImplBase **)pFVar15;
        FVar13 = (ForElementType<FSetElementId>)local_90;
        if (local_88 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = local_88;
        }
        uVar5 = *(uint *)((longlong)FVar13 + (ulonglong)(local_80 - 1U & this->SelectedItemTID) * 4)
        ;
        pFVar14 = pFVar16;
        if (uVar5 == 0xffffffff) goto LAB_14bea81ed;
        goto LAB_14bea81d0;
      }
      break;
    }
  }
  goto LAB_14bea8251;
  while (uVar5 = *(uint *)(pFVar14 + 0x14), pFVar14 = pFVar16, uVar5 != 0xffffffff) {
LAB_14bea81d0:
    pFVar14 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)(int)uVar5 * 0x1c);
    if (*(uint *)pFVar14 == this->SelectedItemTID) {
      if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_14bea8213;
      break;
    }
  }
LAB_14bea81ed:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14bea8213:
  UDS_M_ItemImplBase::SetQuantity(this_00,*(uint *)(pFVar14 + 8));
  plVar2 = *(longlong **)pFVar15;
  local_e0 = 0;
  local_f8.ObjectIndex = 0;
  local_f8.ObjectSerialNumber = 0;
  pcVar3 = *(code **)(*plVar2 + 0x2e0);
  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_e0);
  (*pcVar3)(plVar2);
LAB_14bea8251:
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  iVar6 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// OnUpdatedBulkRepairMaterials @ 14bea86a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnUpdatedBulkRepairMaterials(UDS_VM_ItemRepair_MaterialInfo *this)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  UDS_M_ItemRepair *pUVar6;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  UDS_UserObjectListItem *this_00;
  undefined8 *puVar8;
  byte bVar9;
  longlong lVar10;
  TObjectPtr<UDS_UserObjectListItem>_u_0 __return_storage_ptr__;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  UDS_M_ItemImplBase *local_160;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  int local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  UDS_UserObjectListItem *local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  void *local_a8 [2];
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar5 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
                    (&this->ItemRepairModel,(void *)0x0);
  if (!bVar5) {
    FDS_EntryBindingEventField::Reset(&this->MaterialItemSlotEventField);
    pUVar6 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    UDS_M_ItemRepair::GetRegisteredBulkRepairItemMaterials
              (pUVar6,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_88);
    pUVar6 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    __return_storage_ptr__.DebugPtr = (UDS_UserObjectListItem *)local_a8;
    pTVar7 = UDS_M_ItemRepair::GetRegisteredBulkRepairItemList
                       (pUVar6,(TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                                *)__return_storage_ptr__.DebugPtr);
    iVar11 = pTVar7->ArrayNum;
    if (local_a8[0] != (void *)0x0) {
      FMemory::Free(local_a8[0]);
    }
    uVar13 = local_60;
    if (iVar11 == 0) {
      local_110 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.BitNumber;
      local_118 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    }
    else {
      iStack_150 = 0;
      local_138 = 0;
      uStack_14c = 1;
      uStack_13c = 0;
      if (local_60 != 0) {
        puVar14 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar14 = local_68;
        }
        __return_storage_ptr__.DebugPtr = (UDS_UserObjectListItem *)0x0;
        uVar12 = *puVar14;
        while (uVar12 == 0) {
          lVar10 = (longlong)iStack_150;
          local_138 = local_138 + 0x20;
          iStack_150 = iStack_150 + 1;
          uStack_13c = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_150)
          goto LAB_14bea87f4;
          uVar12 = puVar14[lVar10 + 1];
        }
        uStack_14c = -uVar12 & uVar12;
        uVar1 = (ulonglong)uStack_14c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_128 = (int)lVar10;
        uStack_13c = local_138 + -1 + local_128;
        if ((int)local_60 < (int)uStack_13c) {
          uStack_13c = local_60;
        }
      }
LAB_14bea87f4:
      local_158 = (longlong *)local_88;
      local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar12 = local_60 & 0xffffffe0;
      iStack_130 = local_88._8_4_ - local_54;
      uStack_140 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_13c;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      TStack_e0._padding_ = CONCAT44(uStack_14c,iStack_150);
      iVar11 = (int)local_60 >> 5;
      TStack_e0._28_4_ = uStack_13c;
      TStack_e0.BaseBitIndex = local_138;
      uStack_c0 = CONCAT44(uStack_12c,iStack_130);
      bVar9 = (byte)local_60;
      uStack_134 = uStack_13c;
      local_e8 = local_158;
      TStack_e0.Array = local_148;
      if ((int)local_60 < 0) {
        __return_storage_ptr__.DebugPtr =
             (UDS_UserObjectListItem *)&::s_C__Workspace_UnrealEngine_Engin;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar13 != local_60) {
        puVar14 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar14 = local_68;
        }
        __return_storage_ptr__.DebugPtr = (UDS_UserObjectListItem *)0x0;
        uVar13 = -1 << (bVar9 & 0x1f) & puVar14[iVar11];
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar11;
          uVar12 = uVar12 + 0x20;
          iVar11 = iVar11 + 1;
          uVar13 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14bea8901;
          uVar13 = puVar14[lVar10 + 1];
        }
        uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_124 = (int)lVar10;
        uVar13 = local_124 + -1 + uVar12;
        if ((int)local_60 < (int)uVar13) {
          uVar13 = local_60;
        }
      }
LAB_14bea8901:
      while( true ) {
        plVar4 = local_e8;
        if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
          local_168[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
        }
        lVar10 = (longlong)TStack_e0.CurrentBitIndex;
        if (((TStack_e0.CurrentBitIndex == uVar13) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar4 == (longlong *)local_88)) break;
        lVar2 = *plVar4;
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        DS_ItemDataUtil::CreateItemModel
                  ((EDS_ItemSlotStateType)&local_160,
                   (int)CONCAT71(__return_storage_ptr__._1_7_,0x39));
        __return_storage_ptr__.DebugPtr = (UDS_UserObjectListItem *)0x0;
        if (local_160 == (UDS_M_ItemImplBase *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5649315577013993131>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemRepair\\DS_VM_ItemRepair_MaterialInfo.cpp"
                             ,0x155,"itemModel");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          UDS_M_ItemImplBase::SetSelected(local_160,false);
          UDS_M_ItemImplBase::SetQuantity(local_160,*(int *)(lVar10 * 0x10 + lVar2 + 4));
          puVar8 = (undefined8 *)(**(code **)(local_160->_padding_ + 0x310))(local_160,local_98);
          local_b8.Object = (FDS_ViewModelContext *)*puVar8;
          local_b8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar8[1];
          if (local_b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_00,&local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
          local_120 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          __return_storage_ptr__.DebugPtr = (UDS_UserObjectListItem *)&local_120;
          FDS_EntryBindingEventField::Add
                    (&this->MaterialItemSlotEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)__return_storage_ptr__.ObjectPtr.field0_0x0
                    );
        }
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      local_100 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.BitNumber;
      local_108 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
      this->MaterialInfoSwitcher = 0;
      local_f0 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.BitNumber;
      local_f8 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

// OnUpdatedTargetRepairMaterials @ 14bea8b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnUpdatedTargetRepairMaterials(UDS_VM_ItemRepair_MaterialInfo *this)

{
  TMap<int,TObjectPtr<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>_>
  *this_00;
  FWeakObjectPtr *this_01;
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  UDS_M_ItemImplBase *pUVar4;
  longlong *plVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  FName FVar10;
  FString *pFVar11;
  longlong lVar12;
  UDS_UserObjectListItem *this_02;
  TObjectPtr<UDS_M_ItemImplBase>_u_0 TVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  byte bVar16;
  wchar_t *_Str;
  uint *puVar17;
  ulonglong uVar18;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  undefined8 local_208;
  uint local_200;
  uint local_1fc;
  UDS_M_ItemImplBase *local_1f8;
  undefined1 local_1f0 [8];
  FDelegateAllocation local_1e8;
  FWeakObjectPtr local_1d0;
  longlong *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  int local_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  TPairInitializer<int_const_&,TObjectPtr<UDS_M_ItemImplBase>_&> local_190;
  UDS_M_ItemImplBase *local_180;
  UDS_UserObjectListItem *local_178 [2];
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  uint *local_f8;
  UDS_M_ItemImplBase **local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar7 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (bVar7) {
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&pUVar9[1].field_0x18,(EDS_ItemRepairData)local_a0);
    uVar2 = *(undefined8 *)FVar10;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar9[1].field_0x18,uVar8 + (int)((ulonglong)uVar2 >> 0x20),
                         (FName *)FVar10);
    if ((pFVar11->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    lVar12 = _wtoi64(_Str);
    if (lVar12 != 0) {
      FDS_EntryBindingEventField::Reset(&this->MaterialItemSlotEventField);
      this_00 = &this->MaterialSlotModelMap;
      bVar7 = 1 < *(int *)&(this->MaterialSlotModelMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      iVar22 = 0;
      puVar1 = &(this->MaterialSlotModelMap).field_0xc;
      *(undefined4 *)&(this->MaterialSlotModelMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->MaterialSlotModelMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->MaterialSlotModelMap).field_0x34 = 0;
      iVar20 = *(int *)&(this->MaterialSlotModelMap).field_0x2c;
      *(undefined4 *)&(this->MaterialSlotModelMap).field_0x28 = 0;
      if ((iVar20 < 0) || (0x80 < iVar20)) {
        *(undefined4 *)&(this->MaterialSlotModelMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialSlotModelMap).field_0x10,
                   0);
      }
      uVar8 = 1;
      if (bVar7) {
        *(undefined4 *)&(this->MaterialSlotModelMap).field_0x48 = 1;
        TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      pUVar9 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                   *)local_88,
                  (TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
                   *)(pUVar9 + 0xe));
      uVar23 = local_60;
      local_210.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      local_208 = 0;
      uStack_1ac = 0;
      if (local_60 != 0) {
        puVar17 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar17 = local_68;
        }
        uVar21 = *puVar17;
        local_1a8 = 0;
        while (uVar21 == 0) {
          lVar12 = (longlong)iVar22;
          local_1a8 = local_1a8 + 0x20;
          iVar22 = iVar22 + 1;
          uStack_1ac = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_14bea8db0;
          uVar21 = puVar17[lVar12 + 1];
        }
        uVar8 = -uVar21 & uVar21;
        uVar18 = (ulonglong)uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_198 = (int)lVar12;
        uStack_1ac = local_1a8 + -1 + local_198;
        if ((int)local_60 < (int)uStack_1ac) {
          uStack_1ac = local_60;
        }
      }
LAB_14bea8db0:
      local_1c8 = (longlong *)local_88;
      local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar21 = local_60 & 0xffffffe0;
      iStack_1a0 = local_88._8_4_ - local_54;
      uStack_1b0 = 0xffffffff;
      TStack_130.CurrentBitIndex = uStack_1ac;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      TStack_130._padding_ = CONCAT44(uVar8,iVar22);
      iVar20 = (int)local_60 >> 5;
      TStack_130._28_4_ = uStack_1ac;
      TStack_130.BaseBitIndex = local_1a8;
      uStack_110 = CONCAT44(uStack_19c,iStack_1a0);
      bVar16 = (byte)local_60;
      local_1fc = local_60;
      iStack_1c0 = iVar22;
      uStack_1bc = uVar8;
      uStack_1a4 = uStack_1ac;
      local_138 = local_1c8;
      TStack_130.Array = local_1b8;
      if (((int)local_60 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = uStack_dc;
      if (uVar23 != local_60) {
        puVar17 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar17 = local_68;
        }
        uVar8 = -1 << (bVar16 & 0x1f) & puVar17[iVar20];
        while (uVar8 == 0) {
          lVar12 = (longlong)iVar20;
          uVar21 = uVar21 + 0x20;
          iVar20 = iVar20 + 1;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) {
            local_1fc = local_60;
            uVar23 = local_60;
            goto LAB_14bea8ee0;
          }
          uVar8 = puVar17[lVar12 + 1];
        }
        uVar18 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_194 = (int)lVar12;
        uVar23 = (uVar21 - 1) + local_194;
        local_1fc = uVar23;
        if ((int)local_60 < (int)uVar23) {
          uVar23 = local_60;
          local_1fc = local_60;
        }
      }
LAB_14bea8ee0:
      do {
        plVar5 = local_138;
        if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
          local_218[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
        }
        if (((TStack_130.CurrentBitIndex == uVar23) &&
            (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar5 == (longlong *)local_88)) {
          local_160 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.BitNumber;
          local_168 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
          this->MaterialInfoSwitcher = 0;
          local_150 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.BitNumber;
          local_158 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
          if (this->SelectedItemTID == 0) {
            if (((int)local_208 < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_210.Data);
            if (bVar7) {
              if (((int)local_208 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_210.Data);
              (**(code **)(*(longlong *)pUVar9 + 0x360))(pUVar9);
              if (((int)local_208 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_210.Data);
              iVar22 = (**(code **)(*(longlong *)pUVar9 + 0x360))(pUVar9);
              if (iVar22 < 1) {
                if (((int)local_208 < 1) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                bVar7 = false;
              }
              else {
                if (((int)local_208 < 1) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                bVar7 = true;
              }
              SetSelectedItem(this,(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                                   local_210.Data,bVar7);
            }
          }
          if ((FWeakObjectPtr *)local_210.Data != (FWeakObjectPtr *)0x0) {
            FMemory::Free(local_210.Data);
          }
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FDS_MaterialSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88);
          return;
        }
        puVar17 = (uint *)((longlong)TStack_130.CurrentBitIndex * 0x1c + *plVar5);
        local_200 = *puVar17;
        uVar8 = puVar17[2];
        this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        uVar18 = (ulonglong)local_200;
        DS_ItemDataUtil::GetItemDataByTID((int)&local_1d0);
        bVar7 = FWeakObjectPtr::IsValid(&local_1d0);
        TVar19.WeakPtr._1_7_ = (undefined7)(uVar18 >> 8);
        TVar19.WeakPtr.ObjectIndex._0_1_ = 0x3c;
        if (bVar7) {
          TVar13.ObjectPtr.field0_0x0 =
               (FObjectPtr)DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_98,TVar19);
        }
        else {
          TVar13.ObjectPtr.field0_0x0 =
               (FObjectPtr)
               DS_ItemDataUtil::CreateItemModel
                         ((EDS_ItemSlotStateType)local_90,TVar19.WeakPtr.ObjectIndex);
        }
        local_1f8 = (UDS_M_ItemImplBase *)(TVar13.DebugPtr)->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bea8fd0:
          pUVar4 = local_1f8;
          if (local_1f8 == (UDS_M_ItemImplBase *)0x0) goto LAB_14bea8fd5;
          uStack_13c = uVar6;
          local_148 = OnEventMaterialItemSlot;
          uStack_140 = 0;
          local_1f0 = (undefined1  [8])0x0;
          local_1e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1e8.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                     (FWriteAccessScope *)&local_c0);
          local_a8 = &local_1e8;
          puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_1e8);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[2] = uVar15;
            *puVar14 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_ItemRepair_MaterialInfo____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar14[3] = 0;
            local_190.Value = (TObjectPtr<UDS_M_ItemImplBase> *)this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_190.Value);
            puVar14[4] = local_148;
            puVar14[5] = CONCAT44(uStack_13c,uStack_140);
          }
          if (local_c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
          }
          UDS_ModelBase::AddUpdateModelDelegate
                    ((UDS_ModelBase *)pUVar4,
                     (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      *)local_1f0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                     (FWriteAccessScope *)&local_d8);
          if ((local_1e8.DelegateSize != 0) &&
             (local_1e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1e8.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1e8,0,0,0x10);
            local_1e8.DelegateSize = 0;
          }
          if (local_d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
          }
          if (local_1e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1e8.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1f0);
          iVar22 = (int)local_208;
          if ((int)local_208 == local_208._4_4_) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_210,(int *)((longlong)&local_208 + 4));
          }
          pUVar4 = local_1f8;
          local_208 = CONCAT44(local_208._4_4_,iVar22 + 1);
          this_01 = (FWeakObjectPtr *)(local_210.Data + (longlong)iVar22 * 8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (local_1f8 != (UDS_M_ItemImplBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)local_1f8);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar4 != (UDS_M_ItemImplBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
          }
          local_180 = pUVar4;
          this_01->ObjectIndex = 0;
          this_01->ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UDS_M_ItemImplBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          FWeakObjectPtr::operator=(this_01,(FObjectPtr)&local_180);
          UDS_M_ItemImplBase::SetQuantity(local_1f8,uVar8);
          puVar14 = (undefined8 *)(**(code **)(local_1f8->_padding_ + 0x310))(local_1f8,local_e8);
          local_108.Object = (FDS_ViewModelContext *)*puVar14;
          local_108.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar14[1];
          if (local_108.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_02,&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)CONCAT44(uStack_dc,local_e0));
          local_178[0] = this_02;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_02 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_02);
          }
          FDS_EntryBindingEventField::Add
                    (&this->MaterialItemSlotEventField,(TObjectPtr<UDS_UserObjectListItem>)local_178
                    );
          local_f8 = &local_200;
          local_f0 = &local_1f8;
          TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UDS_M_ItemImplBase>_&>_>
                    ((TSet<TTuple<int,TObjectPtr<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
                      *)this_00,&local_190,(bool *)&local_f8);
        }
        else {
          if (local_1f8 != (UDS_M_ItemImplBase *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_1f8);
            goto LAB_14bea8fd0;
          }
LAB_14bea8fd5:
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5649315577013992991>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemRepair\\DS_VM_ItemRepair_MaterialInfo.cpp"
                             ,0x1e1,"itemModel");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        uVar23 = local_1fc;
      } while( true );
    }
  }
  return;
}

// OnUpdatedTargetRestoreMaterials @ 14bea9500

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::OnUpdatedTargetRestoreMaterials
          (UDS_VM_ItemRepair_MaterialInfo *this,int *param_1)

{
  undefined8 uVar1;
  UDS_M_MoneyDisplay *this_00;
  long64 lVar2;
  longlong lVar3;
  UDS_ViewModelBase *this_01;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  FName FVar11;
  FString *pFVar12;
  longlong lVar13;
  FDS_ItemRestoreTableRow *this_02;
  longlong *plVar14;
  UDS_UserObjectListItem *this_03;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  size_t _Size;
  longlong lVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  EDS_ItemRepairType local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FString local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec [3];
  UDS_M_ItemImplBase *local_e0;
  longlong local_d8;
  UDS_UserObjectListItem *local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  bVar5 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
                    (&this->ItemRepairModel,(void *)0x0);
  if (!bVar5) {
    pUVar10 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                       ((FDS_DataContainer *)&pUVar10[1].field_0x18,(EDS_ItemRepairData)local_88);
    uVar1 = *(undefined8 *)FVar11;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar10[1].field_0x18,uVar8 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar11);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    lVar13 = _wtoi64(pwVar16);
    if (lVar13 != 0) {
      this_02 = FDS_ItemRestoreTableRow::GetRef((longlong)*param_1,true);
      bVar5 = FDS_ItemRestoreTableRow::IsValid(this_02);
      if (bVar5) {
        local_res18[0] = Restore;
        OnChangedItemRepairType(this,local_res18);
        lVar13 = 0;
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = (this_02->MoneyType).ArrayNum;
        _Size = (size_t)local_f0;
        pFVar23 = (this_02->MoneyType).AllocatorInstance.Data;
        if (local_f0 == 0) {
          local_ec[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_f0,0,&local_f8,local_f0,local_ec);
          memcpy(local_f8.Data,pFVar23,_Size);
        }
        local_128.Data = (FScriptContainerElement *)0x0;
        local_120 = (this_02->MoneyValue).ArrayNum;
        lVar21 = (longlong)local_120;
        pFVar23 = (this_02->MoneyValue).AllocatorInstance.Data;
        if (local_120 == 0) {
          local_11c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_120,0,&local_128,local_120,&local_11c);
          memcpy(local_128.Data,pFVar23,lVar21 << 3);
        }
        lVar21 = (longlong)(this->VM_CoinDisplayList).ArrayNum;
        uVar8 = 0;
        bVar5 = true;
        bVar7 = true;
        if (0 < lVar21) {
          local_d8 = (longlong)local_120;
          bVar5 = true;
          do {
            uVar20 = ~uVar8 >> 0x1f;
            if (local_d8 <= lVar13) {
              uVar9 = 0;
              if ((int)uVar8 < (this->VM_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UDS_ViewModelBase::SetVisibility
                        (*(UDS_ViewModelBase **)
                          ((this->VM_CoinDisplayList).AllocatorInstance.Data +
                          (longlong)(int)uVar8 * 8),Collapsed);
              break;
            }
            uVar9 = 0;
            if ((int)uVar8 < local_120) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(longlong *)(local_128.Data + lVar13 * 8) < 1) {
              uVar9 = 0;
              if ((int)uVar8 < (this->VM_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UDS_ViewModelBase::SetVisibility
                        (*(UDS_ViewModelBase **)
                          ((this->VM_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8),Collapsed
                        );
            }
            else {
              uVar9 = 0;
              if ((int)uVar8 < (this->M_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = *(UDS_M_MoneyDisplay **)
                         ((this->M_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
              uVar9 = 0;
              if ((int)uVar8 < local_120) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(long64 *)(local_128.Data + lVar13 * 8);
              uVar9 = 0;
              if ((int)uVar8 < local_f0) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UDS_M_MoneyDisplay::RefreshData(this_00,(EDS_MoneyType)local_f8.Data[lVar13],lVar2);
              uVar9 = 0;
              if ((int)uVar8 < (this->VM_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UDS_ViewModelBase::SetVisibility
                        (*(UDS_ViewModelBase **)
                          ((this->VM_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8),
                         SelfHitTestInvisible);
              uVar9 = 0;
              if ((int)uVar8 < (this->M_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar5 = UDS_M_MoneyDisplay::HasEnoughMoney
                                (*(UDS_M_MoneyDisplay **)
                                  ((this->M_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8));
              iVar18 = (this->VM_CoinDisplayList).ArrayNum;
              if (bVar5) {
                uVar9 = 0;
                if ((int)uVar8 < iVar18) {
                  uVar9 = uVar20;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                plVar14 = *(longlong **)
                           ((this->VM_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
                local_ec[1] = 0x835;
                (**(code **)(*plVar14 + 0x340))(plVar14,local_ec + 1);
                bVar5 = bVar7;
              }
              else {
                uVar9 = 0;
                if ((int)uVar8 < iVar18) {
                  uVar9 = uVar20;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                plVar14 = *(longlong **)
                           ((this->VM_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
                local_ec[2] = 0x849;
                (**(code **)(*plVar14 + 0x340))(plVar14,local_ec + 2);
                bVar5 = false;
              }
              uVar9 = 0;
              if ((int)uVar8 < (this->M_CoinDisplayList).ArrayNum) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              plVar14 = *(longlong **)
                         ((this->M_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
              plVar14 = (longlong *)(**(code **)(*plVar14 + 0x310))(plVar14,local_70);
              lVar3 = *plVar14;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_68);
              bVar7 = bVar5;
              if (lVar3 != 0) {
                uVar9 = 0;
                if ((int)uVar8 < (this->VM_CoinDisplayList).ArrayNum) {
                  uVar9 = uVar20;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this_01 = *(UDS_ViewModelBase **)
                           ((this->VM_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
                uVar9 = 0;
                if ((int)uVar8 < (this->M_CoinDisplayList).ArrayNum) {
                  uVar9 = uVar20;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                plVar14 = *(longlong **)
                           ((this->M_CoinDisplayList).AllocatorInstance.Data + lVar13 * 8);
                puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x310))(plVar14,local_60);
                local_a8.Object = (FDS_ViewModelContext *)*puVar15;
                local_a8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)puVar15[1];
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext(this_01,&local_a8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_58);
              }
            }
            uVar8 = uVar8 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < lVar21);
        }
        pUVar10 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        pwVar16 = L"true";
        if (!bVar5) {
          pwVar16 = L"false";
        }
        ::FString::FString(&local_108,pwVar16);
        FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                           ((FDS_DataContainer *)&pUVar10[1].field_0x18,(EDS_ItemRepairData)local_80
                           );
        uVar1 = *(undefined8 *)FVar11;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                              *)&pUVar10[1].field_0x18,uVar8 + (int)((ulonglong)uVar1 >> 0x20),
                             (FName *)FVar11);
        if (pFVar12 != &local_108) {
          pFVar23 = (pFVar12->Data).AllocatorInstance.Data;
          if (pFVar23 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar23);
          }
          (pFVar12->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Data).ArrayNum = local_108.Data.ArrayNum;
          (pFVar12->Data).ArrayMax = local_108.Data.ArrayMax;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        FDS_EntryBindingEventField::Reset(&this->MaterialItemSlotEventField);
        pUVar10 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = *(int *)&pUVar10[0x12].field_0x10;
        lVar13 = (longlong)local_110;
        _Src = *(void **)&pUVar10[0x12].field_0x8;
        if (local_110 == 0) {
          local_10c = 0;
          iVar18 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,local_110,0,&local_118,local_110,&local_10c);
          memcpy(local_118.Data,_Src,lVar13 << 4);
          iVar18 = local_110;
        }
        pFVar23 = local_118.Data + (longlong)iVar18 * 0x10;
        FVar22.Data = local_118.Data;
        iVar19 = iVar18;
        while( true ) {
          if (iVar19 != iVar18) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FDS_MaterialSlotInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (FVar22.Data == pFVar23) break;
          uVar8 = *(uint *)FVar22.Data;
          uVar20 = *(uint *)(FVar22.Data + 4);
          this_03 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_03 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_03);
          }
          uVar17 = (ulonglong)uVar8;
          DS_ItemDataUtil::GetItemDataByTID((int)local_78);
          DS_ItemDataUtil::CreateItemModel
                    ((EDS_ItemSlotStateType)&local_e0,(int)CONCAT71((int7)(uVar17 >> 8),0x3d));
          if (local_e0 == (UDS_M_ItemImplBase *)0x0) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5649315577013993038>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemRepair\\DS_VM_ItemRepair_MaterialInfo.cpp"
                               ,0x1b2,"itemModel");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            UDS_M_ItemImplBase::SetQuantity(local_e0,uVar20);
            puVar15 = (undefined8 *)(**(code **)(local_e0->_padding_ + 0x310))(local_e0,local_50);
            local_98.Object = (FDS_ViewModelContext *)*puVar15;
            local_98.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar15[1];
            if (local_98.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(this_03,&local_98);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48);
            local_d0 = this_03;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_03 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            FDS_EntryBindingEventField::Add
                      (&this->MaterialItemSlotEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)&local_d0);
          }
          FVar22.Data = FVar22.Data + 0x10;
          iVar19 = local_110;
        }
        local_c0 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.BitNumber;
        local_c8 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
        this->MaterialInfoSwitcher = 0;
        local_b0 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.BitNumber;
        local_b8 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
      }
    }
  }
  return;
}

// ResetMaterialItems @ 14bead120

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::ResetMaterialItems(UDS_VM_ItemRepair_MaterialInfo *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FName local_18;
  int local_10;
  
  this->MaterialInfoSwitcher = 1;
  local_10 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaterialInfoSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  FDS_Text::SetTextFromStringTable(&this->DescLabelText,StringUi,0x9fdb);
  local_10 = FFieldNotificationClassDescriptor::DescLabelText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DescLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->RestoreVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::RestoreVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RestoreVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->RepairTargetVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::RepairTargetVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RepairTargetVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  FDS_EntryBindingEventField::Reset(&this->MaterialItemSlotEventField);
  local_10 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaterialItemSlotEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->SelectedItemTID = 0;
  this->bSelectedTargetRepairItem = false;
  (this->SelectedItemSlotModel).WeakPtr = local_res8;
  return;
}

// SetSelectedItem @ 14beb4290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_ItemRepair_MaterialInfo::SetSelectedItem
          (UDS_VM_ItemRepair_MaterialInfo *this,
          TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  UDS_VM_W_CommonQuantityControl *this_00;
  FDS_ViewModelContext_CommonQuantityControl *pFVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UDS_M_ItemImplBase *pUVar7;
  UDS_M_ItemRepair *this_01;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  undefined7 in_register_00000081;
  undefined1 auStackY_128 [32];
  EDS_ItemRepairType local_f8 [8];
  FWeakObjectPtr local_f0;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> local_e8;
  undefined8 local_d8 [2];
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
                    (&this->ItemRepairModel,(void *)0x0);
  if (bVar4) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (!bVar4) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  iVar5 = (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6);
  if ((this->SelectedItemTID != iVar5) &&
     (bVar4 = FWeakObjectPtr::IsValid(&(this->SelectedItemSlotModel).WeakPtr), bVar4)) {
    pUVar7 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->SelectedItemSlotModel).WeakPtr);
    UDS_M_ItemImplBase::SetSelected(pUVar7,false);
    pUVar6 = FWeakObjectPtr::Get(&(this->SelectedItemSlotModel).WeakPtr);
    local_d8[0] = 0;
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    pcVar2 = *(code **)(*(longlong *)pUVar6 + 0x2e0);
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)local_d8);
    (*pcVar2)(pUVar6,local_f0,CONCAT71(in_register_00000081,1));
  }
  pUVar6 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  iVar5 = (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6);
  this->SelectedItemTID = iVar5;
  (this->SelectedItemSlotModel).WeakPtr = param_1->WeakPtr;
  pUVar6 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
               *)local_a8,
              (TSet<TTuple<int,FDS_MaterialSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>,FDefaultSetAllocator>
               *)(pUVar6 + 0xe));
  if (local_a8._8_4_ != local_74) {
    FVar8 = (ForElementType<FSetElementId>)local_70;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FVar8 = local_68;
    }
    for (iVar5 = *(int *)((longlong)FVar8 + (ulonglong)(local_60 - 1U & this->SelectedItemTID) * 4);
        iVar5 != -1; iVar5 = *(int *)(local_a8._0_8_ + (longlong)iVar5 * 0x1c + 0x14)) {
      if (*(uint *)(local_a8._0_8_ + (longlong)iVar5 * 0x1c) == this->SelectedItemTID) {
        this_01 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
        iVar5 = UDS_M_ItemRepair::GetMaxMaterialQuantity(this_01,this->SelectedItemTID);
        if ((this->VM_CommonQuantityControl).field0_0x0.DebugPtr ==
            (UDS_VM_W_CommonQuantityControl *)0x0) goto LAB_14beb461b;
        MakeContext<FDS_ViewModelContext_CommonQuantityControl>(&local_e8);
        pFVar3 = local_e8.Object;
        if ((local_e8.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x15f;
        pFVar3->Min = 0.0;
        pFVar3->Max = (float)iVar5;
        pFVar9 = (FScriptContainerElement *)0x0;
        if (local_a8._8_4_ == local_74) goto LAB_14beb452d;
        FVar8 = (ForElementType<FSetElementId>)local_70;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_68;
        }
        uVar1 = *(uint *)((longlong)FVar8 + (ulonglong)(local_60 - 1U & this->SelectedItemTID) * 4);
        goto joined_r0x00014beb4501;
      }
    }
  }
  goto LAB_14beb4645;
joined_r0x00014beb4501:
  pFVar9 = (FScriptContainerElement *)0x0;
  if (uVar1 == 0xffffffff) goto LAB_14beb452d;
  pFVar9 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar1 * 0x1c);
  if (*(uint *)pFVar9 == this->SelectedItemTID) {
    if (pFVar9 != (FScriptContainerElement *)0x0) goto LAB_14beb4558;
    goto LAB_14beb452d;
  }
  uVar1 = *(uint *)(pFVar9 + 0x14);
  goto joined_r0x00014beb4501;
LAB_14beb452d:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14beb4558:
  uVar1 = *(uint *)(pFVar9 + 8);
  if ((pFVar3 == (FDS_ViewModelContext_CommonQuantityControl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar3->InitialQuantity = (float)(int)uVar1;
  if (&this->OnQuantityChangeDelegate != &pFVar3->OnQuantityChangeEvent) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->OnQuantityChangeEvent,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnQuantityChangeDelegate
              );
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar3->OnClickAutoDelegate,&this->OnClickAutoDelegate);
  this_00 = (this->VM_CommonQuantityControl).field0_0x0.DebugPtr;
  local_b8.Object = (FDS_ViewModelContext *)local_e8.Object;
  local_b8.SharedReferenceCount.ReferenceController =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_b8);
  local_c0 = FFieldNotificationClassDescriptor::VM_CommonQuantityControl.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::VM_CommonQuantityControl.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
LAB_14beb461b:
  pUVar7 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  UDS_M_ItemImplBase::SetSelected(pUVar7,param_2);
  local_f8[0] = TargetRepair;
  OnChangedItemRepairType(this,local_f8);
LAB_14beb4645:
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  iVar5 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_74 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

// UnbindModel @ 14bebcaf0

void __thiscall UDS_VM_ItemRepair_MaterialInfo::UnbindModel(UDS_VM_ItemRepair_MaterialInfo *this)

{
  FDestructionSentinel local_28;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnQuantityChangeDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnQuantityChangeDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

