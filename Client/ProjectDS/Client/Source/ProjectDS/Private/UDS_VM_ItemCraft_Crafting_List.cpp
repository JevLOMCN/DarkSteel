// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b68a430

UClass * __cdecl UDS_VM_ItemCraft_Crafting_List::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_List",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_List,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_List>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_List>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_List @ 14b68ce00

UDS_VM_ItemCraft_Crafting_List * __thiscall
UDS_VM_ItemCraft_Crafting_List::UDS_VM_ItemCraft_Crafting_List
          (UDS_VM_ItemCraft_Crafting_List *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemCraft_Crafting_List__6B_;
  return this;
}

// UDS_VM_ItemCraft_Crafting_List @ 14b68ce40

UDS_VM_ItemCraft_Crafting_List * __thiscall
UDS_VM_ItemCraft_Crafting_List::UDS_VM_ItemCraft_Crafting_List
          (UDS_VM_ItemCraft_Crafting_List *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemCraft_Crafting_List__6B_;
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_List @ 14b68df10

void __thiscall
UDS_VM_ItemCraft_Crafting_List::~UDS_VM_ItemCraft_Crafting_List
          (UDS_VM_ItemCraft_Crafting_List *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemCraft_Crafting_List__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fe80

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_List::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_Crafting_List *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_List::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690820

UClass * __cdecl UDS_VM_ItemCraft_Crafting_List::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_List",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_List,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_List>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_List>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_List.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_List @ 14b691070

void __cdecl
UDS_VM_ItemCraft_Crafting_List::StaticRegisterNativesUDS_VM_ItemCraft_Crafting_List(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_List_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execWaitCompleteCount @ 14b6927a0

void __cdecl
UDS_VM_ItemCraft_Crafting_List::execWaitCompleteCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = WaitCompleteCount((UDS_VM_ItemCraft_Crafting_List *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execWaitCompleteSlotList @ 14b6927f0

void __cdecl
UDS_VM_ItemCraft_Crafting_List::execWaitCompleteSlotList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = WaitCompleteSlotList((UDS_VM_ItemCraft_Crafting_List *)param_1,&local_18);
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

// BindModel @ 14be77460

void __thiscall UDS_VM_ItemCraft_Crafting_List::BindModel(UDS_VM_ItemCraft_Crafting_List *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if (*(longlong **)&this->field_0xa0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be11c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0xa0 + 0x2c8))();
    return;
  }
  return;
}

// UnbindModel @ 14bebc950

void __thiscall UDS_VM_ItemCraft_Crafting_List::UnbindModel(UDS_VM_ItemCraft_Crafting_List *this)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = *(UObject **)&this->field_0xa0;
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
    }
    pUVar1 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if ((pvVar2 == (void *)0x0) || (*(char *)((longlong)pvVar2 + 0x10) != '\x01')) {
      (**(code **)(**(longlong **)&this->field_0xa0 + 0x2d0))();
    }
  }
  return;
}

// UpdateView @ 14bec2300

void __thiscall
UDS_VM_ItemCraft_Crafting_List::UpdateView
          (UDS_VM_ItemCraft_Crafting_List *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::WaitCompleteSlotList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WaitCompleteSlotList.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::WaitCompleteCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WaitCompleteCount.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

// WaitCompleteCount @ 14bec2820

FText * __thiscall
UDS_VM_ItemCraft_Crafting_List::WaitCompleteCount
          (UDS_VM_ItemCraft_Crafting_List *this,FText *__return_storage_ptr__)

{
  undefined1 *this_00;
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
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
      goto LAB_14bec2855;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14bec2855:
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
                      (&bGEnsureHasExecuted<5409957238586474560>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft_Crafting_List.cpp"
                       ,0x40,"false");
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

// WaitCompleteSlotList @ 14bec2950

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemCraft_Crafting_List::WaitCompleteSlotList
          (UDS_VM_ItemCraft_Crafting_List *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  undefined1 *this_00;
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_EntryBindingEventField *pFVar5;
  UDS_M_WaitCompleteList *this_01;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_02;
  undefined8 *puVar7;
  FDS_ViewModelContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_03;
  UDS_M_WaitCompleteListSlot *this_04;
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> TVar11;
  int iVar12;
  FDS_ViewModelContext *pFVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_UserObjectListItem *local_a8 [2];
  TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pUVar6 = (UObject *)0x0;
  this_00 = &this->field_0xa0;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar3) {
      pUVar6 = *(UObject **)this_00;
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
    this_01 = (UDS_M_WaitCompleteList *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_WaitCompleteList::GetSlotModelList(this_01,&local_98);
    iVar12 = local_98.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_98.AllocatorInstance.Data + (longlong)iVar12 * 8);
    FVar14.Data = local_98.AllocatorInstance.Data;
    while( true ) {
      pFVar13 = (FDS_ViewModelContext *)0x0;
      if (local_98.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((FWeakObjectPtr *)FVar14.Data == pFVar1) break;
      local_res18 = *(FWeakObjectPtr *)FVar14.Data;
      pUVar6 = GetTransientPackageAsObject();
      this_02 = NewObject<UDS_UserObjectListItem>(pUVar6);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec2c6d;
      }
      else {
        if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bec2c6d:
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5409957238586474542>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft_Crafting_List.cpp"
                             ,0x2e,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
            return pFVar5;
          }
          break;
        }
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x310))(pUVar6,local_58);
      local_78.Object = (FDS_ViewModelContext *)*puVar7;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_02,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      pFVar8 = ::operator_new(0x30);
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar8[1].DerivedStaticStruct + 4) = 0;
        pFVar8->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->ViewModelTemplateKey = None;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_WaitComplete__6B_;
        *(undefined8 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
        pFVar13 = pFVar8;
      }
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WaitComplete__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar9[1].SharedReferenceCount = pFVar13;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
        return pFVar5;
      }
      pUVar10 = FDS_ViewModelContext_WaitComplete::StaticStruct();
      pFVar13->DerivedStaticStruct = (UStruct *)pUVar10;
      this_03 = UDS_ViewModelContextManager::GetInst();
      if (this_03 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Object = pFVar13;
        local_88.SharedReferenceCount.ReferenceController = pTVar9;
        UDS_ViewModelContextManager::RegisterContext(this_03,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      pFVar13->ViewModelTemplateKey = Data_WaitComplete;
      *(undefined1 *)&pFVar13[1]._padding_ = 1;
      this_04 = (UDS_M_WaitCompleteListSlot *)FWeakObjectPtr::Get(&local_res18);
      TVar11 = UDS_M_WaitCompleteListSlot::GetWaitCompleteData(this_04);
      *(undefined8 *)((longlong)&pFVar13[1]._padding_ + 4) = *(undefined8 *)TVar11.WeakPtr;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar13;
      local_68.SharedReferenceCount.ReferenceController = pTVar9;
      UDS_UserObjectListItem::AddContext(this_02,&local_68);
      local_a8[0] = this_02;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5409957238586474537>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft_Crafting_List.cpp"
                       ,0x29,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_EntryBindingEventField *)(*pcVar2)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

