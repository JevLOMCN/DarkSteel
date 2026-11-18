// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetEventOnDrop_WrapperImpl @ 14b68a170

void __cdecl UDS_VM_ItemList::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr FStackX_8;
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14befdb05;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14befdb05:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
    (**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4,param_2);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4014168132393369622>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
                       ,0x16,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b68a180

UClass * __cdecl UDS_VM_ItemList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemList",
               &Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemList,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ItemList>,InternalVTableHelperCtorCaller<UDS_VM_ItemList>
               ,local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton;
}

// UDS_VM_ItemList @ 14b68da80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemList * __thiscall
UDS_VM_ItemList::UDS_VM_ItemList(UDS_VM_ItemList *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemList__6B_;
  FDS_DragDropEventField::FDS_DragDropEventField(&this->EventOnDrop);
  return this;
}

// UDS_VM_ItemList @ 14b68dad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemList * __thiscall
UDS_VM_ItemList::UDS_VM_ItemList(UDS_VM_ItemList *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemList__6B_;
  FDS_DragDropEventField::FDS_DragDropEventField(&this->EventOnDrop);
  return this;
}

// ~UDS_VM_ItemList @ 14b68e420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemList::~UDS_VM_ItemList(UDS_VM_ItemList *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemList__6B_;
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b690270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UDS_VM_ItemList::GetFieldNotificationDescriptor(UDS_VM_ItemList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690ee0

UClass * __cdecl UDS_VM_ItemList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemList",
               &Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemList,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ItemList>,InternalVTableHelperCtorCaller<UDS_VM_ItemList>
               ,local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemList @ 14b691280

void __cdecl UDS_VM_ItemList::StaticRegisterNativesUDS_VM_ItemList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEmpty @ 14b691c70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemList::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmpty((UDS_VM_ItemList *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execItemList @ 14b691dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemList::execItemList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ItemList((UDS_VM_ItemList *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// IsEmpty @ 14bef4d80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_ItemList::IsEmpty(UDS_VM_ItemList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UDS_M_ItemList *this_00;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bef4db7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14bef4db7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4014168132393369652>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
                       ,0x34,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&local_res8);
  bVar3 = UDS_M_ItemList::IsEmpty(this_00);
  return bVar3;
}

// ItemList @ 14bef61a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemList::ItemList(UDS_VM_ItemList *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_M_ItemList *this_00;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar7;
  FDS_EntryBindingEventField *pFVar8;
  atomic<unsigned_char> *paVar9;
  FWeakObjectPtr *pFVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_UserObjectListItem *local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_60;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  pUVar6 = (UObject *)0x0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_ItemList_ItemList");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId28,"UDS_VM_ItemList_ItemList",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId28);
  }
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (this->_padding_ != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      pUVar6 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&local_res10);
    pTVar5 = UDS_M_ItemList::GetItemModelList(this_00);
    pFVar10 = (FWeakObjectPtr *)(pTVar5->AllocatorInstance).Data;
    iVar11 = pTVar5->ArrayNum;
    pFVar1 = pFVar10 + iVar11;
    do {
      if (pTVar5->ArrayNum != iVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) goto LAB_14bef6422;
      local_res18 = *pFVar10;
      bVar3 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (bVar3) {
        iVar11 = 0x24;
        paVar9 = &bGEnsureHasExecuted<4014168132393369636>;
        goto LAB_14bef6402;
      }
      pUVar6 = GetTransientPackageAsObject();
      this_01 = NewObject<UDS_UserObjectListItem>(pUVar6);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bef63e6;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bef63e6;
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x310))(pUVar6,local_50);
      local_60.Object = (FDS_ViewModelContext *)*puVar7;
      local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
      if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_01,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      local_68 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_68);
      pFVar10 = pFVar10 + 1;
    } while( true );
  }
  iVar11 = 0x20;
  paVar9 = &bGEnsureHasExecuted<4014168132393369632>;
LAB_14bef6402:
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
                     ,iVar11,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar8;
  }
LAB_14bef6422:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
LAB_14bef63e6:
  iVar11 = 0x27;
  paVar9 = &bGEnsureHasExecuted<4014168132393369639>;
  goto LAB_14bef6402;
}

// OnEventOnDrop @ 14befdad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemList::OnEventOnDrop(UDS_VM_ItemList *this,FDS_DragDropEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14befdb05;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14befdb05:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4014168132393369622>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
                       ,0x16,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateView @ 14bf25fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemList::UpdateView
          (UDS_VM_ItemList *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_ItemList");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"UDS_VM_ItemList",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemList.cpp"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  local_10 = FFieldNotificationClassDescriptor::ItemList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

