// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b72ff30

UClass * __cdecl UDS_VM_W_GameOption::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOption",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOption,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOption>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOption>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton;
}

// UDS_VM_W_GameOption @ 14b7353d0

UDS_VM_W_GameOption * __thiscall
UDS_VM_W_GameOption::UDS_VM_W_GameOption(UDS_VM_W_GameOption *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOption__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->MapGameOption = 0;
  *(undefined8 *)&(this->MapGameOption).field_0x8 = 0;
  *(undefined8 *)&(this->MapGameOption).field_0x20 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x28 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapGameOption).field_0x34 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapGameOption).field_0x40 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x48 = 0;
  return this;
}

// UDS_VM_W_GameOption @ 14b735460

UDS_VM_W_GameOption * __thiscall
UDS_VM_W_GameOption::UDS_VM_W_GameOption(UDS_VM_W_GameOption *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOption__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->MapGameOption = 0;
  *(undefined8 *)&(this->MapGameOption).field_0x8 = 0;
  *(undefined8 *)&(this->MapGameOption).field_0x20 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x28 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapGameOption).field_0x34 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapGameOption).field_0x40 = 0;
  *(undefined4 *)&(this->MapGameOption).field_0x48 = 0;
  return this;
}

// ~UDS_VM_W_GameOption @ 14b736770

void __thiscall UDS_VM_W_GameOption::~UDS_VM_W_GameOption(UDS_VM_W_GameOption *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GameOption__6B_;
  *(undefined4 *)&(this->MapGameOption).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapGameOption).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapGameOption);
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7396e0

IClassDescriptor * __thiscall
UDS_VM_W_GameOption::GetFieldNotificationDescriptor(UDS_VM_W_GameOption *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GameOption::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a680

UClass * __cdecl UDS_VM_W_GameOption::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GameOption",
               &Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GameOption,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GameOption>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GameOption>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GameOption.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GameOption @ 14b73aff0

void __cdecl UDS_VM_W_GameOption::StaticRegisterNativesUDS_VM_W_GameOption(void)

{
  return;
}

// BindModel @ 14bf9cc30

void __thiscall UDS_VM_W_GameOption::BindModel(UDS_VM_W_GameOption *this)

{
  return;
}

// InitViewModel @ 14bfb0f60

void __thiscall UDS_VM_W_GameOption::InitViewModel(UDS_VM_W_GameOption *this)

{
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  return;
}

// OnAlertMessagePopupOpen @ 14bfb3fc0

void __thiscall UDS_VM_W_GameOption::OnAlertMessagePopupOpen(UDS_VM_W_GameOption *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_CommonPopup *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_GameOption *local_res10;
  uint uStack_fc;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FDS_Text local_e0;
  FDS_Text local_90;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pUVar3 = GetTransientPackageAsObject();
  this_00 = NewObject<UDS_M_CommonPopup>(pUVar3);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_CommonPopup *)0x0) goto LAB_14bfb41e1;
  }
  else {
    if (this_00 == (UDS_M_CommonPopup *)0x0) {
LAB_14bfb41e1:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6799961066781540451>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOption.cpp"
                         ,99,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_e0.StringTableType = None;
  local_e0.StringTableID = 0;
  local_e0.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_e0.StringEnumTableNameID.Number = 0;
  local_e0.TimeExpressionType = None;
  local_e0.IsExpression = false;
  local_e0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.UniqueString.Data.ArrayNum = 0;
  local_e0.UniqueString.Data.ArrayMax = 0;
  local_e0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.FormatArgs.ArrayNum = 0;
  local_e0.FormatArgs.ArrayMax = 0;
  local_e0.DateTime.Ticks = 0;
  local_e0.TimeSpan.Ticks = 0;
  FDS_Text::SetTextFromStringTable(&local_e0,StringUi,2);
  UDS_M_CommonPopup::SetTitle(this_00,&local_e0);
  local_90.StringTableType = None;
  local_90.StringTableID = 0;
  local_90.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_90.StringEnumTableNameID.Number = 0;
  local_90.TimeExpressionType = None;
  local_90.DateTime.Ticks = 0;
  local_90.TimeSpan.Ticks = 0;
  local_90.IsExpression = false;
  local_90.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.UniqueString.Data.ArrayNum = 0;
  local_90.UniqueString.Data.ArrayMax = 0;
  local_90.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.FormatArgs.ArrayNum = 0;
  local_90.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_90,StringUi,0x318fb);
  UDS_M_CommonPopup::SetMainContent(this_00,&local_90);
  UDS_M_CommonPopup::SetButton(this_00,ButtonConfirm,StringUi,0x65,false);
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_f0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOption____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
    puVar4[4] = OnClickedAlertConfirm;
    puVar4[5] = (ulonglong)uStack_fc << 0x20;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_f8);
  UDS_M_CommonPopup::OpenCommonPopup(this_00);
  return;
}

// OnClickedAlertConfirm @ 14bfbb2a0

void __thiscall
UDS_VM_W_GameOption::OnClickedAlertConfirm
          (UDS_VM_W_GameOption *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_GameOptionManager *local_res20;
  
  local_res10 = param_1.WeakPtr;
  local_res20 = UDS_GameOptionManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_GameOptionManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UDS_GameOptionManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x8,this);
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6799961066781540491>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOption.cpp"
                       ,0x8b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedInitCancel @ 14bfbb8c0

void __thiscall
UDS_VM_W_GameOption::OnClickedInitCancel
          (UDS_VM_W_GameOption *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
  UDS_M_CommonPopup::CloseCommonPopup(this_00);
  return;
}

// OnClickedInitConfirm @ 14bfbb8f0

void __thiscall
UDS_VM_W_GameOption::OnClickedInitConfirm
          (UDS_VM_W_GameOption *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
  UDS_M_CommonPopup::CloseCommonPopup(this_00);
  OnOptionInit(this);
  return;
}

// OnInputAction @ 14bfbdac0

void __thiscall
UDS_VM_W_GameOption::OnInputAction
          (UDS_VM_W_GameOption *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_CommonPopup *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_GameOption *pUStackX_10;
  UDS_VM_W_GameOption *apUStackX_18 [2];
  uint uStack_14c;
  undefined1 auStack_148 [8];
  FDelegateAllocation FStack_140;
  undefined1 auStack_130 [8];
  FDelegateAllocation FStack_128;
  FDS_Text FStack_118;
  FDS_Text FStack_c8;
  FDestructionSentinel FStack_78;
  FDelegateAllocation *pFStack_60;
  FDestructionSentinel FStack_58;
  FDelegateAllocation *pFStack_40;
  
  if (*param_1 != IA_UI_Reset) {
    return;
  }
  pUVar3 = GetTransientPackageAsObject();
  this_00 = NewObject<UDS_M_CommonPopup>(pUVar3);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_CommonPopup *)0x0) goto LAB_14bfbde14;
  }
  else {
    if (this_00 == (UDS_M_CommonPopup *)0x0) {
LAB_14bfbde14:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6799961066781540437>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOption.cpp"
                         ,0x55,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FStack_118.StringTableID = 0;
  FStack_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_118.StringEnumTableNameID.Number = 0;
  FStack_118.TimeExpressionType = None;
  FStack_118.IsExpression = false;
  FStack_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_118.UniqueString.Data.ArrayNum = 0;
  FStack_118.UniqueString.Data.ArrayMax = 0;
  FStack_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_118.FormatArgs.ArrayNum = 0;
  FStack_118.FormatArgs.ArrayMax = 0;
  FStack_118.StringTableType = None;
  FStack_118.DateTime.Ticks = 0;
  FStack_118.TimeSpan.Ticks = 0;
  FDS_Text::SetTextFromStringTable(&FStack_118,StringUi,2);
  UDS_M_CommonPopup::SetTitle(this_00,&FStack_118);
  FStack_c8.StringTableType = None;
  FStack_c8.StringTableID = 0;
  FStack_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_c8.StringEnumTableNameID.Number = 0;
  FStack_c8.TimeExpressionType = None;
  FStack_c8.DateTime.Ticks = 0;
  FStack_c8.TimeSpan.Ticks = 0;
  FStack_c8.IsExpression = false;
  FStack_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.UniqueString.Data.ArrayNum = 0;
  FStack_c8.UniqueString.Data.ArrayMax = 0;
  FStack_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_c8.FormatArgs.ArrayNum = 0;
  FStack_c8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&FStack_c8,StringUi,0x318fa);
  UDS_M_CommonPopup::SetMainContent(this_00,&FStack_c8);
  UDS_M_CommonPopup::SetButton(this_00,ButtonCancel,StringUi,0x66,false);
  UDS_M_CommonPopup::SetButton(this_00,ButtonConfirm,StringUi,0x65,false);
  auStack_148 = (undefined1  [8])0x0;
  FStack_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_140.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_148,
             (FWriteAccessScope *)&FStack_78);
  pFStack_60 = &FStack_140;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_140);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOption____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    pUStackX_10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pUStackX_10);
    puVar4[4] = OnClickedInitCancel;
    puVar4[5] = (ulonglong)uStack_14c << 0x20;
  }
  if (FStack_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonCancel,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)auStack_148);
  auStack_130 = (undefined1  [8])0x0;
  FStack_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_128.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_130,
             (FWriteAccessScope *)&FStack_58);
  pFStack_40 = &FStack_128;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_128);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOption____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    apUStackX_18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)apUStackX_18);
    puVar4[4] = OnClickedInitConfirm;
    puVar4[5] = (ulonglong)uStack_14c << 0x20;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)auStack_130);
  UDS_M_CommonPopup::OpenCommonPopup(this_00);
  return;
}

// OnInputedOpionInitConfirmPopupOpen @ 14bfbdae0

void __thiscall UDS_VM_W_GameOption::OnInputedOpionInitConfirmPopupOpen(UDS_VM_W_GameOption *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_CommonPopup *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_GameOption *local_res10;
  UDS_VM_W_GameOption *local_res18 [2];
  uint uStack_14c;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  FDS_Text local_118;
  FDS_Text local_c8;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  pUVar3 = GetTransientPackageAsObject();
  this_00 = NewObject<UDS_M_CommonPopup>(pUVar3);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_CommonPopup *)0x0) goto LAB_14bfbde14;
  }
  else {
    if (this_00 == (UDS_M_CommonPopup *)0x0) {
LAB_14bfbde14:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6799961066781540437>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOption.cpp"
                         ,0x55,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_118.StringTableID = 0;
  local_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_118.StringEnumTableNameID.Number = 0;
  local_118.TimeExpressionType = None;
  local_118.IsExpression = false;
  local_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.UniqueString.Data.ArrayNum = 0;
  local_118.UniqueString.Data.ArrayMax = 0;
  local_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.FormatArgs.ArrayNum = 0;
  local_118.FormatArgs.ArrayMax = 0;
  local_118.StringTableType = None;
  local_118.DateTime.Ticks = 0;
  local_118.TimeSpan.Ticks = 0;
  FDS_Text::SetTextFromStringTable(&local_118,StringUi,2);
  UDS_M_CommonPopup::SetTitle(this_00,&local_118);
  local_c8.StringTableType = None;
  local_c8.StringTableID = 0;
  local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_c8.StringEnumTableNameID.Number = 0;
  local_c8.TimeExpressionType = None;
  local_c8.DateTime.Ticks = 0;
  local_c8.TimeSpan.Ticks = 0;
  local_c8.IsExpression = false;
  local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.UniqueString.Data.ArrayNum = 0;
  local_c8.UniqueString.Data.ArrayMax = 0;
  local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.FormatArgs.ArrayNum = 0;
  local_c8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x318fa);
  UDS_M_CommonPopup::SetMainContent(this_00,&local_c8);
  UDS_M_CommonPopup::SetButton(this_00,ButtonCancel,StringUi,0x66,false);
  UDS_M_CommonPopup::SetButton(this_00,ButtonConfirm,StringUi,0x65,false);
  local_148 = (undefined1  [8])0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_140;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_140);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOption____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
    puVar4[4] = OnClickedInitCancel;
    puVar4[5] = (ulonglong)uStack_14c << 0x20;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonCancel,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_148);
  local_130 = (undefined1  [8])0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_128;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_128);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_GameOption____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_GameOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res18);
    puVar4[4] = OnClickedInitConfirm;
    puVar4[5] = (ulonglong)uStack_14c << 0x20;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_130);
  UDS_M_CommonPopup::OpenCommonPopup(this_00);
  return;
}

// OnOptionInit @ 14bfc03a0

void __thiscall UDS_VM_W_GameOption::OnOptionInit(UDS_VM_W_GameOption *this)

{
  TMap<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  void *_Src;
  code *pcVar6;
  TMap<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  UDS_GameOptionManager *this_00;
  UObject *pUVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res10;
  undefined1 local_res18;
  int local_res20;
  ForAnyElementType local_118;
  int local_110;
  int iStack_10c;
  FWeakObjectPtr local_108 [2];
  TArray<EDS_GameOptionType,TSizedDefaultAllocator<32>_> local_f8;
  undefined4 local_e8;
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  TMap<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  UDS_GameOptionManager *local_98;
  TMap<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  code *local_58;
  longlong lStack_50;
  
  local_98 = UDS_GameOptionManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_98 != (UDS_GameOptionManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  local_108[0].ObjectIndex = 0;
  local_108[0].ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_98 != (UDS_GameOptionManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  FWeakObjectPtr::operator=(local_108,(FObjectPtr)&local_98);
  bVar8 = FWeakObjectPtr::IsValid(local_108);
  if (bVar8) {
    iStack_c8 = 0;
    uStack_c4 = 1;
    pTVar1 = &this->MapGameOption;
    puVar2 = &(this->MapGameOption).field_0x10;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    iStack_10c = 0;
    iVar13 = *(int *)&(this->MapGameOption).field_0x28;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar13 != 0) {
      puVar19 = *(uint **)&(this->MapGameOption).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar2;
      }
      uVar16 = *puVar19;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar16 == 0) {
        lVar10 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14bfc0510;
        uVar16 = puVar19[lVar10 + 1];
      }
      uStack_c4 = -uVar16 & uVar16;
      uVar4 = (ulonglong)uStack_c4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar13 < iStack_b4) {
        iStack_b4 = iVar13;
      }
    }
LAB_14bfc0510:
    uVar16 = *(uint *)&(this->MapGameOption).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    iStack_a8 = *(int *)&(this->MapGameOption).field_0x8 - *(int *)&(this->MapGameOption).field_0x34
    ;
    uStack_b8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
    TStack_88.CurrentBitIndex = iStack_b4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar16 >> 5;
    TStack_88._28_4_ = iStack_b4;
    TStack_88.BaseBitIndex = local_b0;
    uStack_68 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = pTVar1;
    local_c0 = puVar2;
    iStack_ac = iStack_b4;
    local_90 = pTVar1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->MapGameOption).field_0x28;
    if (uVar16 != uVar5) {
      puVar18 = *(undefined1 **)&(this->MapGameOption).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar2;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14bfc0610;
        uVar16 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_a0 = (int)lVar10;
      uVar16 = local_a0 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_14bfc0610:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
        local_res10 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&stack0x00000010);
      }
      if (((TStack_88.CurrentBitIndex == uVar16) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1)
         ) break;
      puVar11 = (undefined4 *)((longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
      local_e8 = *puVar11;
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8 = puVar11[4];
      lVar10 = (longlong)local_d8;
      _Src = *(void **)(puVar11 + 2);
      if (local_d8 == 0) {
        local_d4 = 0;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_d8,0,&local_e0,local_d8,&local_d4);
        memcpy(local_e0.Data,_Src,lVar10 << 3);
        iVar13 = local_d8;
      }
      pFVar3 = local_e0.Data + (longlong)iVar13 * 8;
      FVar17.Data = local_e0.Data;
      iVar12 = iVar13;
      while( true ) {
        if (iVar12 != iVar13) {
          local_res18 = 0;
          `TCheckedPointerIterator<FDS_GameOptionBaseTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&stack0x00000018);
        }
        if (FVar17.Data == pFVar3) break;
        pFVar14 = (FScriptContainerElement *)(*(longlong *)FVar17.Data + 8);
        if (((local_118.Data <= pFVar14) && (pFVar14 < local_118.Data + (longlong)iStack_10c * 4))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_110 == iStack_10c) {
          local_110 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_118,&iStack_10c);
        }
        lVar10 = (longlong)local_110;
        FVar17.Data = FVar17.Data + 8;
        local_110 = local_110 + 1;
        *(undefined4 *)(local_118.Data + lVar10 * 4) = *(undefined4 *)pFVar14;
        iVar12 = local_d8;
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    this_00 = (UDS_GameOptionManager *)FWeakObjectPtr::Get(local_108);
    FVar17.Data = local_118.Data;
    lVar10 = (longlong)local_110;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = local_110;
    if (local_110 == 0) {
      local_f8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_110,0,&local_f8.AllocatorInstance,local_110,&local_f8.ArrayMax);
      memcpy(local_f8.AllocatorInstance.Data,FVar17.Data,lVar10 << 2);
    }
    UDS_GameOptionManager::ResetGameOptionData(this_00,&local_f8);
    local_f8.ArrayNum = 0;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)OnAlertMessagePopupOpen;
    lStack_50 = (ulonglong)(uint)local_f8.ArrayMax << 0x20;
    local_58 = OnAlertMessagePopupOpen;
    pUVar9 = FWeakObjectPtr::Get(local_108);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_GameOption>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar9[4].field_0x8,(UDS_VM_W_GameOption *)&stack0xffffffffffffffa0,
               (pmf_b35e7288 *)this);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6799961066781540474>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GameOption.cpp"
                       ,0x7a,"false");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfcd930

void __thiscall
UDS_VM_W_GameOption::OnSetViewModel
          (UDS_VM_W_GameOption *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  uint *puVar1;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  longlong lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_01;
  undefined1 *puVar15;
  TMap<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  FDS_ViewModelContext *pFVar16;
  ForAnyElementType FVar17;
  FDS_ViewModelContext *pFVar18;
  uint uVar19;
  FDS_ViewModelContext *pFVar20;
  int iVar21;
  undefined1 local_res18 [8];
  TKeyInitializer<int_const_&> local_res20;
  TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_138;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  int iStack_10c;
  longlong local_108;
  TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  undefined4 local_e8;
  uint *local_e0;
  UDS_UserObjectListItem *local_d8 [2];
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_a8,&local_98);
  if (local_a8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  else {
    (**(code **)(this->_padding_ + 0x2e8))(this);
    this_02 = &this->MapGameOption;
    bVar10 = 1 < *(int *)&(this->MapGameOption).field_0x48;
    if (!bVar10) {
      TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_02);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_02,0,*(int *)&(this->MapGameOption).field_0x8);
    puVar8 = &(this->MapGameOption).field_0xc;
    *(undefined4 *)&(this->MapGameOption).field_0x8 = 0;
    if (*(int *)puVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_02,0,(int *)puVar8);
    }
    *(undefined4 *)&(this->MapGameOption).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MapGameOption).field_0x34 = 0;
    iVar21 = *(int *)&(this->MapGameOption).field_0x2c;
    *(undefined4 *)&(this->MapGameOption).field_0x28 = 0;
    if ((iVar21 < 0) || (0x80 < iVar21)) {
      *(undefined4 *)&(this->MapGameOption).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapGameOption).field_0x10,0);
    }
    if (bVar10) {
      *(undefined4 *)&(this->MapGameOption).field_0x48 = 1;
      TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_02);
    }
    FDS_GameOptionBaseTableRow::GetAll(&local_138);
    iVar21 = local_138.ArrayNum;
    pFVar3 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 8;
    FVar17.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      if (local_138.ArrayNum != iVar21) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_GameOptionBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar17.Data == pFVar3) break;
      lVar7 = *(longlong *)FVar17.Data;
      if (*(EDS_ContentsTabFrameType *)(lVar7 + 0x20) == (local_a8.Object)->TabFrameID) {
        puVar1 = (uint *)(lVar7 + 0x24);
        if (*(int *)&(this->MapGameOption).field_0x8 != *(int *)&(this->MapGameOption).field_0x34) {
          puVar8 = *(undefined1 **)&(this->MapGameOption).field_0x40;
          puVar15 = &(this->MapGameOption).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar15 = puVar8;
          }
          iVar11 = *(int *)(puVar15 +
                           (ulonglong)(*(int *)&(this->MapGameOption).field_0x48 - 1U & *puVar1) * 4
                           );
          if (iVar11 != -1) {
            do {
              if (*(uint *)((longlong)iVar11 * 0x20 + *(longlong *)&this_02->field_0x0) == *puVar1)
              goto LAB_14bfcdb10;
              iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&this_02->field_0x0);
            } while (iVar11 != -1);
          }
        }
        local_e0 = puVar1;
        TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_02,&local_res20,(bool *)&local_e0);
LAB_14bfcdb10:
        pTVar12 = TMapBase<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                 *)this_02,*puVar1);
        iVar11 = pTVar12->ArrayNum;
        if (iVar11 == pTVar12->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar11 + 1;
        *(longlong *)((pTVar12->AllocatorInstance).Data + (longlong)iVar11 * 8) = lVar7;
      }
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_02);
    local_f0 = 0;
    stack0xfffffffffffffee8 = local_78._16_16_;
    local_128 = (longlong *)local_78._0_8_;
    auStack_120._0_8_ = local_78._8_8_;
    local_108 = local_58;
    pTStack_100 = pTStack_50;
    local_f8 = (TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_02;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar13 = ::operator_new(0x30);
        pFVar18 = (FDS_ViewModelContext *)0x0;
        pFVar16 = pFVar18;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_OptionCategory__6B_;
          pFVar13[1]._padding_ = 0;
          *(undefined8 *)&pFVar13[1].DerivedStaticStruct = 0;
          pFVar16 = pFVar13;
        }
        pFVar13 = ::operator_new(0x20);
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar13->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar13->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar13->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar13->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_OptionCategory__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar13->ViewModelTemplateKey = pFVar16;
          pFVar18 = pFVar13;
        }
        if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar14 = FDS_ViewModelContext_OptionCategory::StaticStruct();
        *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar14;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar18 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar18->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_b8.Object = pFVar16;
          local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18
          ;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedReferenceCount.ReferenceController);
        }
        pFVar13 = pFVar16 + 1;
        pFVar16->ViewModelTemplateKey = W_GameOptionCategory;
        pFVar20 = (FDS_ViewModelContext *)(*local_128 + 8 + (longlong)iStack_10c * 0x20);
        if (pFVar13 != pFVar20) {
          aVar5 = *(atomic<int> *)&pFVar20->DerivedStaticStruct;
          paVar2 = (atomic<int> *)&pFVar16[1].DerivedStaticStruct + 1;
          pFVar3 = (FScriptContainerElement *)pFVar20->_padding_;
          aVar6 = *paVar2;
          *(atomic<int> *)&pFVar16[1].DerivedStaticStruct = aVar5;
          if ((aVar5 == (atomic<int>)0x0) && (aVar6 == (atomic<int>)0x0)) {
            *paVar2 = (atomic<int>)0x0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)aVar5,(int)aVar6,(ForAnyElementType *)pFVar13,(int)aVar5,
                       (int *)paVar2);
            if (aVar5 != (atomic<int>)0x0) {
              memcpy((FScriptContainerElement *)pFVar13->_padding_,pFVar3,(longlong)(int)aVar5 << 3)
              ;
            }
          }
        }
        iVar21 = 1;
        if (pFVar18 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar18->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_88.Object = pFVar16;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        UDS_UserObjectListItem::AddContext(this_00,&local_88);
        local_d8[0] = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar18);
        uStack_110 = uStack_110 & ~auStack_120._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      } while (iStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
      if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
        uVar19 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
        if (3 < uVar19) {
          uVar4 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          local_e8 = (undefined4)lVar7;
          iVar21 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar19) && (local_f8->HashSize < iVar21)) || (iVar21 < local_f8->HashSize)) {
          local_f8->HashSize = iVar21;
          TSet<TTuple<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_f8);
        }
      }
    }
    local_c0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_c8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bfdff90

void __thiscall UDS_VM_W_GameOption::UnbindModel(UDS_VM_W_GameOption *this)

{
  UDS_GameOptionManager *this_00;
  
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 != (UDS_GameOptionManager *)0x0) {
    UDS_GameOptionManager::SaveGameOptionDB(this_00);
    UDS_GameOptionManager::SaveGameOptionDevice(this_00);
    return;
  }
  return;
}

