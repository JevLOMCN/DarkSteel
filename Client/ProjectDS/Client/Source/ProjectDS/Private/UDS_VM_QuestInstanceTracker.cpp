// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6c63e0

UClass * __cdecl UDS_VM_QuestInstanceTracker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInstanceTracker",
               &Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInstanceTracker,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestInstanceTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInstanceTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton;
}

// UDS_VM_QuestInstanceTracker @ 14b6c9c90

UDS_VM_QuestInstanceTracker * __thiscall
UDS_VM_QuestInstanceTracker::UDS_VM_QuestInstanceTracker
          (UDS_VM_QuestInstanceTracker *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceTracker__6B_;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_QuestInstanceTracker @ 14b6c9ce0

UDS_VM_QuestInstanceTracker * __thiscall
UDS_VM_QuestInstanceTracker::UDS_VM_QuestInstanceTracker
          (UDS_VM_QuestInstanceTracker *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceTracker__6B_;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_InstanceSlot).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_QuestInstanceTracker @ 14b6cc2c0

void __thiscall
UDS_VM_QuestInstanceTracker::~UDS_VM_QuestInstanceTracker(UDS_VM_QuestInstanceTracker *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceTracker__6B_;
  pFVar1 = (this->EntryBindingEventField_InstanceSlot).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf760

IClassDescriptor * __thiscall
UDS_VM_QuestInstanceTracker::GetFieldNotificationDescriptor(UDS_VM_QuestInstanceTracker *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestInstanceTracker::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0240

UClass * __cdecl UDS_VM_QuestInstanceTracker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInstanceTracker",
               &Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInstanceTracker,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestInstanceTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInstanceTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInstanceTracker.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestInstanceTracker @ 14b6d1000

void __cdecl UDS_VM_QuestInstanceTracker::StaticRegisterNativesUDS_VM_QuestInstanceTracker(void)

{
  return;
}

// BindModel @ 14bf41880

void __thiscall UDS_VM_QuestInstanceTracker::BindModel(UDS_VM_QuestInstanceTracker *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestInstanceTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnAddQuestDataDelegate,(UDS_VM_QuestInstanceTracker *)&stack0x00000010,
               (pmf_c33657ce *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestInstanceTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,(UDS_VM_QuestInstanceTracker *)&stack0x00000010,
               (pmf_c33657ce *)this);
  }
  return;
}

// OnQuestUpdate @ 14bf66880

void __thiscall
UDS_VM_QuestInstanceTracker::OnQuestUpdate(UDS_VM_QuestInstanceTracker *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_QuestManager *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  UDS_UserObjectListItem *pUStackX_20;
  FName FStack_98;
  int iStack_90;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_78;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_InstanceSlot);
  pUVar5 = UDS_QuestManager::GetInst();
  if (pUVar5 != (UDS_QuestManager *)0x0) {
    auStackX_8[0] = 8;
    TStack_88.ArrayNum = 1;
    TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&TStack_88.AllocatorInstance,1,&TStack_88.ArrayMax);
    memcpy(TStack_88.AllocatorInstance.Data,auStackX_8,1);
    UDS_QuestManager::GetQuestListByInProgress(&TStack_78,&TStack_88,false);
    uStackX_18 = TStack_78.ArrayNum;
    uVar9 = (ulonglong)(int)uStackX_18;
    pFVar1 = TStack_78.AllocatorInstance.Data + uVar9 * 4;
    FVar11.Data = TStack_78.AllocatorInstance.Data;
    while( true ) {
      pFVar10 = (FDS_ViewModelContext *)0x0;
      if (TStack_78.ArrayNum != (int)uVar9) {
        auStackX_10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (FVar11.Data == pFVar1) break;
      uVar2 = *(undefined4 *)FVar11.Data;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf88af7;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf88af7:
          if (TStack_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(TStack_78.AllocatorInstance.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar6 = ::operator_new(0x28);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_Quest__6B_;
        *(undefined4 *)&pFVar6[1]._padding_ = 0;
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
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Quest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
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
      pUVar8 = FDS_ViewModelContext_Quest::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_68.Object = pFVar10;
        TStack_68.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&TStack_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_68.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = QuestInstnaceSlot;
      *(undefined4 *)&pFVar10[1]._padding_ = uVar2;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_58.Object = pFVar10;
      TStack_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_00,&TStack_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pUStackX_20 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_InstanceSlot,
                 (TObjectPtr<UDS_UserObjectListItem>)&pUStackX_20);
      FVar11.Data = FVar11.Data + 4;
      uVar9 = (ulonglong)uStackX_18;
    }
    if (TStack_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_78.AllocatorInstance.Data);
    }
  }
  iStack_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_InstanceSlot.BitNumber;
  FStack_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_InstanceSlot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_98);
  return;
}

// OnSetViewModel @ 14bf6afd0

void __thiscall
UDS_VM_QuestInstanceTracker::OnSetViewModel
          (UDS_VM_QuestInstanceTracker *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateQuestList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf851b0

void __thiscall UDS_VM_QuestInstanceTracker::UnbindModel(UDS_VM_QuestInstanceTracker *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,this);
  }
  return;
}

// UpdateQuestList @ 14bf888c0

void __thiscall UDS_VM_QuestInstanceTracker::UpdateQuestList(UDS_VM_QuestInstanceTracker *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_QuestManager *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  UDS_UserObjectListItem *local_res20;
  FName local_98;
  int local_90;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_InstanceSlot);
  pUVar5 = UDS_QuestManager::GetInst();
  if (pUVar5 != (UDS_QuestManager *)0x0) {
    local_res8[0] = 8;
    local_88.ArrayNum = 1;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
    memcpy(local_88.AllocatorInstance.Data,local_res8,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_78,&local_88,false);
    local_res18 = local_78.ArrayNum;
    uVar9 = (ulonglong)(int)local_res18;
    pFVar1 = local_78.AllocatorInstance.Data + uVar9 * 4;
    FVar11.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar10 = (FDS_ViewModelContext *)0x0;
      if (local_78.ArrayNum != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar11.Data == pFVar1) break;
      uVar2 = *(undefined4 *)FVar11.Data;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf88af7;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf88af7:
          if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.AllocatorInstance.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar6 = ::operator_new(0x28);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_Quest__6B_;
        *(undefined4 *)&pFVar6[1]._padding_ = 0;
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
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Quest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
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
      pUVar8 = FDS_ViewModelContext_Quest::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar10;
        local_68.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = QuestInstnaceSlot;
      *(undefined4 *)&pFVar10[1]._padding_ = uVar2;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      local_res20 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_InstanceSlot,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
      FVar11.Data = FVar11.Data + 4;
      uVar9 = (ulonglong)local_res18;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_InstanceSlot.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_InstanceSlot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  return;
}

