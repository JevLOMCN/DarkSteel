// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6efae0

UClass * __cdecl UDS_VM_WaitCompleteList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteList",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteList,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteList>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteList>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton;
}

// UDS_VM_WaitCompleteList @ 14b6f3cd0

UDS_VM_WaitCompleteList * __thiscall
UDS_VM_WaitCompleteList::UDS_VM_WaitCompleteList
          (UDS_VM_WaitCompleteList *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteList__6B_;
  (this->FixedText_QueueList).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QueueList).StringEnumTableNameID.Number = 0;
  (this->FixedText_QueueList).DateTime.Ticks = 0;
  (this->FixedText_QueueList).TimeSpan.Ticks = 0;
  (this->FixedText_QueueList).TimeExpressionType = None;
  (this->FixedText_QueueList).IsExpression = false;
  (this->FixedText_QueueList).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QueueList).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QueueList).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QueueList).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_QueueList).FormatArgs.ArrayNum = 0;
  (this->FixedText_QueueList).FormatArgs.ArrayMax = 0;
  (this->FixedText_QueueList).StringTableType = StringUi;
  (this->FixedText_QueueList).StringTableID = 0x1870c;
  return this;
}

// UDS_VM_WaitCompleteList @ 14b6f3d60

UDS_VM_WaitCompleteList * __thiscall
UDS_VM_WaitCompleteList::UDS_VM_WaitCompleteList
          (UDS_VM_WaitCompleteList *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteList__6B_;
  (this->FixedText_QueueList).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QueueList).StringEnumTableNameID.Number = 0;
  (this->FixedText_QueueList).DateTime.Ticks = 0;
  (this->FixedText_QueueList).TimeSpan.Ticks = 0;
  (this->FixedText_QueueList).TimeExpressionType = None;
  (this->FixedText_QueueList).IsExpression = false;
  (this->FixedText_QueueList).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QueueList).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QueueList).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QueueList).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_QueueList).FormatArgs.ArrayNum = 0;
  (this->FixedText_QueueList).FormatArgs.ArrayMax = 0;
  (this->FixedText_QueueList).StringTableType = StringUi;
  (this->FixedText_QueueList).StringTableID = 0x1870c;
  return this;
}

// ~UDS_VM_WaitCompleteList @ 14b6f4d60

void __thiscall UDS_VM_WaitCompleteList::~UDS_VM_WaitCompleteList(UDS_VM_WaitCompleteList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteList__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_QueueList).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_QueueList).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_QueueList).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_QueueList).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f72d0

IClassDescriptor * __thiscall
UDS_VM_WaitCompleteList::GetFieldNotificationDescriptor(UDS_VM_WaitCompleteList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WaitCompleteList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f80e0

UClass * __cdecl UDS_VM_WaitCompleteList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteList",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteList,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteList>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteList>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WaitCompleteList @ 14b6f85d0

void __cdecl UDS_VM_WaitCompleteList::StaticRegisterNativesUDS_VM_WaitCompleteList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WaitCompleteList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execWaitCompleteCount @ 14b6f9c20

void __cdecl
UDS_VM_WaitCompleteList::execWaitCompleteCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = WaitCompleteCount((UDS_VM_WaitCompleteList *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execWaitCompleteSlotList @ 14b6f9c70

void __cdecl
UDS_VM_WaitCompleteList::execWaitCompleteSlotList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = WaitCompleteSlotList((UDS_VM_WaitCompleteList *)param_1,&local_18);
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

// UpdateView @ 14be5ad20

void __thiscall
UDS_VM_WaitCompleteList::UpdateView
          (UDS_VM_WaitCompleteList *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::WaitCompleteSlotList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WaitCompleteSlotList.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::WaitCompleteCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WaitCompleteCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// WaitCompleteCount @ 14be5b940

FText * __thiscall
UDS_VM_WaitCompleteList::WaitCompleteCount
          (UDS_VM_WaitCompleteList *this,FText *__return_storage_ptr__)

{
  longlong *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UDS_M_WaitCompleteList *this_01;
  UObject *pUVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = (UObject *)*this_00;
      goto LAB_14be5b975;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14be5b975:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_49807627630149587>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteList.cpp"
                       ,0x2d,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
    return __return_storage_ptr__;
  }
  this_01 = (UDS_M_WaitCompleteList *)FWeakObjectPtr::Get(&local_res18);
  UDS_M_WaitCompleteList::GetWaitCompleteCountText(this_01,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WaitCompleteSlotList @ 14be5ba70

FDS_EntryBindingEventField * __thiscall
UDS_VM_WaitCompleteList::WaitCompleteSlotList
          (UDS_VM_WaitCompleteList *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  bool bVar5;
  UClass *pUVar6;
  FDS_EntryBindingEventField *pFVar7;
  UDS_M_WaitCompleteList *this_01;
  UObject *pUVar8;
  UDS_UserObjectListItem *this_02;
  ulonglong uVar9;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar10;
  ForAnyElementType FVar11;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_98;
  FWeakObjectPtr local_90;
  UDS_UserObjectListItem *local_88;
  FWeakObjectPtr *local_80;
  TSharedPtr<FDS_ViewModelContext,1> *local_78;
  int local_70;
  TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pUVar8 = (UObject *)0x0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*this_00 != 0) {
    pUVar6 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
    if (bVar5) {
      pUVar8 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_98 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_98);
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_49807627630149606>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteList.cpp"
                       ,0x1a,"false");
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar7;
  }
  this_01 = (UDS_M_WaitCompleteList *)FWeakObjectPtr::Get(&local_res20);
  UDS_M_WaitCompleteList::GetSlotModelList(this_01,&local_68);
  local_res18 = local_68.ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  local_80 = (FWeakObjectPtr *)(local_68.AllocatorInstance.Data + uVar9 * 8);
  FVar11.Data = local_68.AllocatorInstance.Data;
  do {
    pFVar3 = local_80;
    if (local_68.ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar11.Data == pFVar3) goto LAB_14be5bcf9;
    local_90 = *(FWeakObjectPtr *)FVar11.Data;
    pUVar8 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar8);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14be5bccc;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14be5bccc:
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_49807627630149601>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteList.cpp"
                           ,0x1f,"false");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar7;
        }
LAB_14be5bcf9:
        if (local_68.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_68.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    pUVar8 = FWeakObjectPtr::Get(&local_90);
    (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8,&local_78);
    iVar4 = local_70;
    pTVar12 = local_78 + local_70;
    pTVar10 = local_78;
    while( true ) {
      if (local_70 != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar10 == pTVar12) break;
      pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_58.Object = pTVar10->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.SharedReferenceCount.ReferenceController = pTVar1;
      UDS_UserObjectListItem::AddContext(this_02,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pTVar10 = pTVar10 + 1;
    }
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(local_78,local_70);
    if (local_78 != (TSharedPtr<FDS_ViewModelContext,1> *)0x0) {
      FMemory::Free(local_78);
    }
    local_88 = this_02;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_88);
    FVar11.Data = FVar11.Data + 8;
    uVar9 = (ulonglong)local_res18;
  } while( true );
}

