// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetListButtonClickEvent_WrapperImpl @ 14b6fc8a0

void __cdecl
UDS_VM_WorldMapZoneList::SetListButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapEvent *pUVar1;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0xd8) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
                (&pUVar1->WorldMapLeftUITypeDelegate,REGION);
    }
  }
  iStack_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6fc8b0

UClass * __cdecl UDS_VM_WorldMapZoneList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapZoneList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapZoneList,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMapZoneList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapZoneList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton;
}

// UDS_VM_WorldMapZoneList @ 14b7023a0

UDS_VM_WorldMapZoneList * __thiscall
UDS_VM_WorldMapZoneList::UDS_VM_WorldMapZoneList
          (UDS_VM_WorldMapZoneList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ListUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneList__6B_;
  (this->VM_CommonEditableText).field0_0x0.DebugPtr = (UDS_VM_CommonEditableText *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ListButtonClickEvent)._padding_ = '\0';
  (this->ListButtonClickEvent).bIsCustomSelected = false;
  (this->ListButtonClickEvent).bIsLacked = false;
  (this->ListButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ListButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SearchText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchText).Data.ArrayNum = 0;
  (this->SearchText).Data.ArrayMax = 0;
  return this;
}

// UDS_VM_WorldMapZoneList @ 14b702430

UDS_VM_WorldMapZoneList * __thiscall
UDS_VM_WorldMapZoneList::UDS_VM_WorldMapZoneList
          (UDS_VM_WorldMapZoneList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ListUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneList__6B_;
  (this->VM_CommonEditableText).field0_0x0.DebugPtr = (UDS_VM_CommonEditableText *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ListButtonClickEvent)._padding_ = '\0';
  (this->ListButtonClickEvent).bIsCustomSelected = false;
  (this->ListButtonClickEvent).bIsLacked = false;
  (this->ListButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ListButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ListButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SearchText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchText).Data.ArrayNum = 0;
  (this->SearchText).Data.ArrayMax = 0;
  return this;
}

// ~UDS_VM_WorldMapZoneList @ 14b7037e0

void __thiscall UDS_VM_WorldMapZoneList::~UDS_VM_WorldMapZoneList(UDS_VM_WorldMapZoneList *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneList__6B_;
  pFVar1 = (this->SearchText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ListButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ListButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ListButtonClickEvent).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706310

IClassDescriptor * __thiscall
UDS_VM_WorldMapZoneList::GetFieldNotificationDescriptor(UDS_VM_WorldMapZoneList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMapZoneList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b707250

UClass * __cdecl UDS_VM_WorldMapZoneList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapZoneList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapZoneList,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMapZoneList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapZoneList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapZoneList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMapZoneList @ 14b707770

void __cdecl UDS_VM_WorldMapZoneList::StaticRegisterNativesUDS_VM_WorldMapZoneList(void)

{
  return;
}

// BindModel @ 14c004830

void __thiscall UDS_VM_WorldMapZoneList::BindModel(UDS_VM_WorldMapZoneList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->WorldMapLeftUITypeDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapZoneList>
              (&pUVar1->WorldMapLeftUITypeDelegate,(UDS_VM_WorldMapZoneList *)&stack0x00000010,
               (pmf_e28bb32f *)this);
  }
  return;
}

// CheckSearchTextMatch @ 14c006700

bool __thiscall
UDS_VM_WorldMapZoneList::CheckSearchTextMatch(UDS_VM_WorldMapZoneList *this,int param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FDS_MapIndexSpawnTableRow *this_00;
  FDS_StringWorldTableRow *pFVar2;
  longlong lVar3;
  FString local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ::FString::ToLower(&this->SearchText,&local_18);
  DS_Util::GetKMPPrefixTable(&local_18,&local_28);
  this_00 = FDS_MapIndexSpawnTableRow::Get((longlong)param_1,true);
  if (this_00 == (FDS_MapIndexSpawnTableRow *)0x0) {
    bVar1 = false;
  }
  else {
    pFVar2 = FDS_MapIndexSpawnTableRow::MapIndexNameTable(this_00);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar2->Text).Data.ArrayNum;
    lVar3 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar2->Text).Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    bVar1 = DS_Util::KMPSearch(&local_38,&local_18,&local_28);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// CreateEditableVM @ 14c010f00

void __thiscall UDS_VM_WorldMapZoneList::CreateEditableVM(UDS_VM_WorldMapZoneList *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UClass *pUVar6;
  TObjectPtr<UDS_VM_CommonEditableText>_u_0 TVar7;
  TObjectPtr<UDS_VM_CommonEditableText>_u_0 local_res10;
  TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> local_a8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FDS_Text local_88;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  MakeContext<FDS_ViewModelContext_CommonEditableText>(&local_a8);
  FVar2.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.Object != (FDS_ViewModelContext_CommonEditableText *)0x0) {
    *(undefined4 *)&(local_a8.Object)->_padding_ = 0x15c;
    (local_a8.Object)->MaxTextLength = 10;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    local_88.StringTableType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x4462b);
    FDS_Text::operator=(&(local_a8.Object)->DefaultText,&local_88);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    uStack_90 = 0;
    local_98 = OnTextChangedEvent;
    uStack_8c = local_a8.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_a8.Object)->OnTextChangedDelegate,(FWriteAccessScope *)&local_38);
    local_20 = &((local_a8.Object)->OnTextChangedDelegate).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapZoneList____A6AXAEBUFDS_ButtonEventField__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapZoneList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10 = (TObjectPtr<UDS_VM_CommonEditableText>_u_0)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapZoneList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
      puVar4[4] = local_98;
      puVar4[5] = CONCAT44(uStack_8c,uStack_90);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::CreateViewModel
              ((UObject *)&local_res10.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
    TVar7.DebugPtr = (UDS_VM_CommonEditableText *)0x0;
    if (local_res10.DebugPtr != (UDS_VM_CommonEditableText *)0x0) {
      pUVar6 = Z_Construct_UClass_UDS_VM_CommonEditableText_NoRegister();
      bVar3 = FObjectPtr::IsA(&local_res10.ObjectPtr,pUVar6);
      if (bVar3) {
        TVar7 = local_res10;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar7.DebugPtr != (UDS_VM_CommonEditableText *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    (this->VM_CommonEditableText).field0_0x0.DebugPtr = (UDS_VM_CommonEditableText *)TVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

// CreateListItemContext @ 14c011130

TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> * __thiscall
UDS_VM_WorldMapZoneList::CreateListItemContext
          (UDS_VM_WorldMapZoneList *this,
          TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *__return_storage_ptr__,
          EDS_MapRegionCategory param_1,int param_2,int param_3,
          TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr> param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_WorldMapRegionCategory *pFVar3;
  FDS_ViewModelContext_WorldMapRegionCategory *pFVar4;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDS_ViewModelContext_WorldMapRegionCategory *pFVar10;
  UObject *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  pFVar3 = ::operator_new(0x48);
  pFVar4 = (FDS_ViewModelContext_WorldMapRegionCategory *)0x0;
  pFVar10 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined2 *)&pFVar3->field_0x25 = 0;
    pFVar3->field_0x27 = 0;
    *(undefined2 *)&pFVar3->field_0x2d = 0;
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 1) = 0;
    *(undefined4 *)&(pFVar3->OnGetExpanded).field_0x14 = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapRegionCategory__6B_;
    pFVar3->ListIndex = 0;
    pFVar3->MapRegionCategory = MAIN_CATEGORY;
    pFVar3->MapindexSpawnTableID = 0;
    pFVar3->HasChild = false;
    *(undefined8 *)&(pFVar3->OnGetExpanded).field_0x0 = 0;
    *(undefined8 *)&(pFVar3->OnGetExpanded).field_0x8 = 0;
    *(undefined4 *)&(pFVar3->OnGetExpanded).field_0x10 = 0;
    pFVar10 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar10;
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapRegionCategory__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar10;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_WorldMapRegionCategory::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    local_48.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x1b6;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object->MapRegionCategory = param_1;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object->ListIndex = param_2;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object->MapindexSpawnTableID = param_3;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object->HasChild = 0 < param_5;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar7 = FWeakObjectPtr::Get(&param_4.WeakPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->OnGetExpanded,
             (FWriteAccessScope *)&local_38);
  local_20 = &(pFVar4->OnGetExpanded).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_B_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUDS_UserObjectTreeItem____A6A_B_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    puVar8[3] = 0;
    local_res10 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res10);
    puVar8[4] = UDS_UserObjectTreeItem::IsItemExpanded;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// InitViewModel @ 14c020520

void __thiscall UDS_VM_WorldMapZoneList::InitViewModel(UDS_VM_WorldMapZoneList *this)

{
  FName local_18;
  int local_10;
  
  UpdateZoneList(this);
  CreateEditableVM(this);
  this->ListUIVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// IsMainCategoryMatchedBySubCategories @ 14c022820

bool __thiscall
UDS_VM_WorldMapZoneList::IsMainCategoryMatchedBySubCategories
          (UDS_VM_WorldMapZoneList *this,FDS_MapMainCategoryTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FDS_MapMidCategoryTableRow *pFVar4;
  FDS_MapIndexSpawnTableRow *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_30 = (param_1->ID_MapMidCategory).ArrayNum;
  lVar8 = (longlong)local_30;
  pFVar1 = (param_1->ID_MapMidCategory).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar1,lVar8 << 2);
    iVar6 = local_30;
  }
  pFVar1 = local_38.Data + (longlong)iVar6 * 4;
  FVar11.Data = local_38.Data;
  iVar7 = iVar6;
  while( true ) {
    if (iVar7 != iVar6) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar11.Data == pFVar1) break;
    pFVar4 = FDS_MapMidCategoryTableRow::Get((longlong)*(int *)FVar11.Data,true);
    if (pFVar4 != (FDS_MapMidCategoryTableRow *)0x0) {
      bVar3 = CheckSearchTextMatch(this,pFVar4->ID_MapIndexSpawn);
      if (bVar3) {
LAB_14c0229cb:
        bVar3 = true;
        goto LAB_14c0229d1;
      }
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (pFVar4->ID_Name).ArrayNum;
      lVar8 = (longlong)local_40;
      pFVar2 = (pFVar4->ID_Name).AllocatorInstance.Data;
      if (local_40 == 0) {
        local_3c = 0;
        iVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_40,0,&local_48,local_40,&local_3c);
        memcpy(local_48.Data,pFVar2,lVar8 << 2);
        iVar7 = local_40;
      }
      pFVar2 = local_48.Data + (longlong)iVar7 * 4;
      FVar9.Data = local_48.Data;
      iVar10 = iVar7;
      while( true ) {
        if (iVar10 != iVar7) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar9.Data == pFVar2) break;
        iVar10 = *(int *)FVar9.Data;
        pFVar5 = FDS_MapIndexSpawnTableRow::Get((longlong)iVar10,true);
        if (pFVar5 != (FDS_MapIndexSpawnTableRow *)0x0) {
          bVar3 = CheckSearchTextMatch(this,iVar10);
          if (bVar3) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data);
            }
            goto LAB_14c0229cb;
          }
        }
        FVar9.Data = FVar9.Data + 4;
        iVar10 = local_40;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
    FVar11.Data = FVar11.Data + 4;
    iVar7 = local_30;
  }
  bVar3 = false;
LAB_14c0229d1:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// IsMidCategoryMatchedBySubCategories @ 14c022a10

bool __thiscall
UDS_VM_WorldMapZoneList::IsMidCategoryMatchedBySubCategories
          (UDS_VM_WorldMapZoneList *this,FDS_MapMidCategoryTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FDS_MapIndexSpawnTableRow *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->ID_Name).ArrayNum;
  lVar7 = (longlong)local_20;
  pFVar1 = (param_1->ID_Name).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar7 << 2);
    iVar5 = local_20;
  }
  pFVar1 = local_28.Data + (longlong)iVar5 * 4;
  FVar4.Data = local_28.Data;
  iVar6 = iVar5;
  while( true ) {
    if (iVar6 != iVar5) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    iVar6 = *(int *)FVar4.Data;
    pFVar3 = FDS_MapIndexSpawnTableRow::Get((longlong)iVar6,true);
    if (pFVar3 != (FDS_MapIndexSpawnTableRow *)0x0) {
      bVar2 = CheckSearchTextMatch(this,iVar6);
      if (bVar2) {
        bVar2 = true;
LAB_14c022ad3:
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
        return bVar2;
      }
    }
    FVar4.Data = FVar4.Data + 4;
    iVar6 = local_20;
  }
  bVar2 = false;
  goto LAB_14c022ad3;
}

// OnCloseInit @ 14c028960

void __thiscall UDS_VM_WorldMapZoneList::OnCloseInit(UDS_VM_WorldMapZoneList *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnListButtonClickEvent @ 14c02c0f0

void __thiscall
UDS_VM_WorldMapZoneList::OnListButtonClickEvent
          (UDS_VM_WorldMapZoneList *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  FName local_18;
  int local_10;
  
  if (this->ListUIVisibility == Visible) {
    this->ListUIVisibility = Collapsed;
  }
  else {
    this->ListUIVisibility = Visible;
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
                (&pUVar1->WorldMapLeftUITypeDelegate,REGION);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnTextChangedEvent @ 14c039d80

void __thiscall
UDS_VM_WorldMapZoneList::OnTextChangedEvent
          (UDS_VM_WorldMapZoneList *this,FDS_ButtonEventField *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange(&this->SearchText,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2);
  if ((this->SearchText).Data.ArrayNum < 2) {
    UpdateZoneList(this);
    return;
  }
  UpdateFilteredZoneList(this);
  return;
}

// OnWorldMapLeftUITypeCallBack @ 14c03bb50

void __thiscall
UDS_VM_WorldMapZoneList::OnWorldMapLeftUITypeCallBack
          (UDS_VM_WorldMapZoneList *this,EDS_LeftMenuType param_1)

{
  FName local_18;
  int local_10;
  
  if ((param_1 == MARKER) || (param_1 == MAPINDEX)) {
    this->ListUIVisibility = Collapsed;
    local_10 = FFieldNotificationClassDescriptor::ListUIVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ListUIVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c0493e0

void __thiscall UDS_VM_WorldMapZoneList::UnbindModel(UDS_VM_WorldMapZoneList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->WorldMapLeftUITypeDelegate,this);
    return;
  }
  return;
}

// UpdateFilteredZoneList @ 14c04a020

void __thiscall UDS_VM_WorldMapZoneList::UpdateFilteredZoneList(UDS_VM_WorldMapZoneList *this)

{
  FDS_MapMainCategoryTableRow *pFVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_UserObjectTreeItem *pUVar5;
  FDS_MapMidCategoryTableRow *pFVar6;
  FDS_MapIndexSpawnTableRow *pFVar7;
  UDS_UserObjectTreeItem *this_00;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FName FVar14;
  int iVar15;
  int iVar16;
  FSharedReferencer<1> FVar17;
  UDS_UserObjectTreeItem *local_res10;
  int local_res18;
  uint local_res20;
  ForAnyElementType local_138;
  uint local_130;
  int local_12c;
  ForAnyElementType local_128;
  uint local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  uint local_108;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  int local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  TArray<FDS_MapMainCategoryTableRow_const_*,TSizedDefaultAllocator<32>_> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  UDS_UserObjectTreeItem *local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_78;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_68;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  local_res18 = 0;
  FDS_MapMainCategoryTableRow::GetAll(&local_b8);
  uVar8 = (ulonglong)local_b8.ArrayNum;
  local_108 = local_b8.ArrayNum;
  pFVar13 = local_b8.AllocatorInstance.Data + uVar8 * 8;
  FVar12.Data = local_b8.AllocatorInstance.Data;
  local_c8 = pFVar13;
  do {
    local_c0 = FVar12.Data;
    if (local_b8.ArrayNum != (uint)uVar8) {
      `TCheckedPointerIterator<FDS_MapMainCategoryTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (FVar12.Data == pFVar13) {
      local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      return;
    }
    pFVar1 = *(FDS_MapMainCategoryTableRow **)FVar12.Data;
    if (pFVar1 != (FDS_MapMainCategoryTableRow *)0x0) {
      bVar2 = IsMainCategoryMatchedBySubCategories(this,pFVar1);
      bVar3 = CheckSearchTextMatch(this,pFVar1->ID_MapIndexSpawn);
      local_120 = (pFVar1->ID_MapMidCategory).ArrayNum;
      lVar11 = (longlong)(int)local_120;
      pFVar13 = (pFVar1->ID_MapMidCategory).AllocatorInstance.Data;
      local_128.Data = (FScriptContainerElement *)0x0;
      if (local_120 == 0) {
        local_11c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_120,0,&local_128,local_120,&local_11c);
        memcpy(local_128.Data,pFVar13,lVar11 << 2);
      }
      uVar10 = local_120;
      if (bVar2) {
LAB_14c04a131:
        pUVar4 = GetTransientPackageAsObject();
        pUVar5 = NewObject<UDS_UserObjectTreeItem>(pUVar4);
        local_98 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        UDS_UserObjectTreeItem::SetDepth(pUVar5,0);
        UDS_UserObjectTreeItem::SetItemExpanded(pUVar5,bVar2);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar5 != (UDS_UserObjectTreeItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
        }
        local_100.ObjectIndex = 0;
        local_100.ObjectSerialNumber = 0;
        local_res10 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_res10);
        iVar15 = local_res18;
        local_res18 = local_res18 + 1;
        CreateListItemContext
                  (this,&local_78,MAIN_CATEGORY,iVar15,pFVar1->ID_MapIndexSpawn,
                   (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_100,uVar10);
        FVar14 = (FName)local_78.SharedReferenceCount.ReferenceController;
        local_a8.Object = (FDS_ViewModelContext *)local_78.Object;
        local_a8.SharedReferenceCount.ReferenceController =
             local_78.SharedReferenceCount.ReferenceController;
        local_e8 = (FName)local_78.SharedReferenceCount.ReferenceController;
        if ((FName)local_78.SharedReferenceCount.ReferenceController != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_78.SharedReferenceCount.ReferenceController + 8) + 1);
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar5,&local_a8);
        if (bVar2) {
          uVar9 = (ulonglong)(int)local_120;
          local_res20 = local_120;
          pFVar13 = local_128.Data + uVar9 * 4;
          uVar8 = uVar9;
          FVar12.Data = local_128.Data;
          local_d8 = pFVar13;
          while( true ) {
            local_d0 = FVar12.Data;
            if ((int)uVar9 != (int)uVar8) {
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            FVar14 = local_e8;
            if (FVar12.Data == pFVar13) break;
            pFVar6 = FDS_MapMidCategoryTableRow::Get((longlong)*(int *)FVar12.Data,true);
            if (pFVar6 != (FDS_MapMidCategoryTableRow *)0x0) {
              local_110 = (pFVar6->ID_Name).ArrayNum;
              lVar11 = (longlong)local_110;
              pFVar13 = (pFVar6->ID_Name).AllocatorInstance.Data;
              local_118.Data = (FScriptContainerElement *)0x0;
              if (local_110 == 0) {
                local_10c = 0;
                iVar15 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_110,0,&local_118,local_110,&local_10c);
                memcpy(local_118.Data,pFVar13,lVar11 << 2);
                iVar15 = local_110;
              }
              pFVar13 = local_118.Data + (longlong)iVar15 * 4;
              FVar12.Data = local_118.Data;
              iVar16 = iVar15;
              while( true ) {
                if (iVar16 != iVar15) {
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_res10);
                }
                if (FVar12.Data == pFVar13) {
                  if (local_118.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.Data);
                  }
                  bVar2 = false;
                  goto LAB_14c04a363;
                }
                iVar16 = *(int *)FVar12.Data;
                pFVar7 = FDS_MapIndexSpawnTableRow::Get((longlong)iVar16,true);
                if ((pFVar7 != (FDS_MapIndexSpawnTableRow *)0x0) &&
                   (bVar2 = CheckSearchTextMatch(this,iVar16), bVar2)) break;
                FVar12.Data = FVar12.Data + 4;
                iVar16 = local_110;
              }
              if (local_118.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data);
              }
              bVar2 = true;
LAB_14c04a363:
              bVar3 = CheckSearchTextMatch(this,pFVar6->ID_MapIndexSpawn);
              local_138.Data = (FScriptContainerElement *)0x0;
              local_130 = (pFVar6->ID_Name).ArrayNum;
              lVar11 = (longlong)(int)local_130;
              pFVar13 = (pFVar6->ID_Name).AllocatorInstance.Data;
              if (local_130 == 0) {
                local_12c = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_130,0,&local_138,local_130,&local_12c);
                memcpy(local_138.Data,pFVar13,lVar11 << 2);
              }
              uVar10 = local_130;
              if (bVar2 == true) {
LAB_14c04a3e7:
                this_00 = NewObject<UDS_UserObjectTreeItem>((UObject *)this);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_00);
                }
                UDS_UserObjectTreeItem::SetDepth(this_00,1);
                UDS_UserObjectTreeItem::SetItemExpanded(this_00,bVar2);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (this_00 != (UDS_UserObjectTreeItem *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)this_00);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)this_00);
                  }
                }
                local_f8.ObjectIndex = 0;
                local_f8.ObjectSerialNumber = 0;
                local_res10 = this_00;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_00);
                }
                FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_res10);
                iVar15 = local_res18;
                local_res18 = local_res18 + 1;
                CreateListItemContext
                          (this,&local_68,MID_CATEGORY,iVar15,pFVar6->ID_MapIndexSpawn,
                           (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_f8,uVar10);
                local_res10 = this_00;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_00);
                }
                UDS_UserObjectTreeItem::AddChildItem
                          (pUVar5,(TObjectPtr<UDS_UserObjectTreeItem>)&local_res10);
                FVar17.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
                local_88.Object = (FDS_ViewModelContext *)local_68.Object;
                local_88.SharedReferenceCount.ReferenceController =
                     local_68.SharedReferenceCount.ReferenceController;
                local_a8.Object =
                     (FDS_ViewModelContext *)local_68.SharedReferenceCount.ReferenceController;
                if ((FDS_ViewModelContext_WorldMapRegionCategory *)
                    local_68.SharedReferenceCount.ReferenceController !=
                    (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) {
                  LOCK();
                  (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_68.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)this_00,&local_88);
                uVar10 = local_130;
                if (bVar2 == true) {
                  uVar8 = (ulonglong)(int)local_130;
                  pFVar13 = local_138.Data + uVar8 * 4;
                  FVar12.Data = local_138.Data;
                  while( true ) {
                    if ((uint)uVar8 != uVar10) {
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (&local_res10);
                    }
                    FVar17.ReferenceController = (TReferenceControllerBase<1> *)local_a8.Object;
                    pUVar5 = local_98;
                    if (FVar12.Data == pFVar13) break;
                    iVar15 = *(int *)FVar12.Data;
                    pFVar7 = FDS_MapIndexSpawnTableRow::Get((longlong)iVar15,true);
                    if ((pFVar7 != (FDS_MapIndexSpawnTableRow *)0x0) &&
                       (bVar2 = CheckSearchTextMatch(this,iVar15), bVar2)) {
                      pUVar5 = NewObject<UDS_UserObjectTreeItem>((UObject *)this);
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar5);
                      }
                      UDS_UserObjectTreeItem::SetDepth(pUVar5,2);
                      bVar2 = CheckSearchTextMatch(this,iVar15);
                      UDS_UserObjectTreeItem::SetItemExpanded(pUVar5,bVar2);
                      iVar16 = local_res18;
                      local_res18 = local_res18 + 1;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        if (pUVar5 != (UDS_UserObjectTreeItem *)0x0) {
                          UE::GC::MarkAsReachable((UObject *)pUVar5);
                        }
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                          UE::GC::MarkAsReachable((UObject *)pUVar5);
                        }
                      }
                      local_f0.ObjectIndex = 0;
                      local_f0.ObjectSerialNumber = 0;
                      local_res10 = pUVar5;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar5);
                      }
                      FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_res10);
                      CreateListItemContext
                                (this,&local_58,LOW_CATEGORY,iVar16,iVar15,
                                 (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_f0,0);
                      local_res10 = pUVar5;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar5);
                      }
                      UDS_UserObjectTreeItem::AddChildItem
                                (this_00,(TObjectPtr<UDS_UserObjectTreeItem>)&local_res10);
                      FVar17.ReferenceController = local_58.SharedReferenceCount.ReferenceController
                      ;
                      local_88.Object = (FDS_ViewModelContext *)local_58.Object;
                      local_88.SharedReferenceCount.ReferenceController =
                           local_58.SharedReferenceCount.ReferenceController;
                      if ((FDS_ViewModelContext_WorldMapRegionCategory *)
                          local_58.SharedReferenceCount.ReferenceController !=
                          (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) {
                        LOCK();
                        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                             (atomic<int>)
                             ((int)(local_58.SharedReferenceCount.ReferenceController)->
                                   SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar5,&local_88)
                      ;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(FVar17.ReferenceController);
                    }
                    uVar8 = (ulonglong)local_130;
                    FVar12.Data = FVar12.Data + 4;
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar17.ReferenceController);
              }
              else if (bVar3) {
                uVar10 = 0;
                goto LAB_14c04a3e7;
              }
              pFVar13 = local_d8;
              if (local_138.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data);
                pFVar13 = local_d8;
              }
            }
            uVar9 = (ulonglong)local_120;
            FVar12.Data = local_d0 + 4;
            uVar8 = (ulonglong)local_res20;
          }
        }
        local_res10 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar14);
        FVar12.Data = local_c0;
      }
      else if (bVar3) {
        uVar10 = 0;
        goto LAB_14c04a131;
      }
      pFVar13 = local_c8;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
        pFVar13 = local_c8;
      }
    }
    uVar8 = (ulonglong)local_108;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// UpdateZoneList @ 14c04f7c0

void __thiscall UDS_VM_WorldMapZoneList::UpdateZoneList(UDS_VM_WorldMapZoneList *this)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  FSharedReferencer<1> FVar3;
  UObject *pUVar4;
  UDS_UserObjectTreeItem *pUVar5;
  FDS_MapMidCategoryTableRow *pFVar6;
  UDS_UserObjectTreeItem *this_00;
  FDS_MapIndexSpawnTableRow *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  UDS_UserObjectTreeItem *local_res10;
  int local_res18;
  uint local_res20;
  ForAnyElementType local_128;
  uint local_120;
  int local_11c;
  ForAnyElementType local_118;
  uint local_110;
  int local_10c;
  uint local_108;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FName local_d8;
  int local_d0;
  UDS_UserObjectTreeItem *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  TArray<FDS_MapMainCategoryTableRow_const_*,TSizedDefaultAllocator<32>_> local_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_78;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_68;
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  iVar13 = 0;
  FDS_MapMainCategoryTableRow::GetAll(&local_b0);
  uVar8 = (ulonglong)local_b0.ArrayNum;
  local_108 = local_b0.ArrayNum;
  local_b8 = local_b0.AllocatorInstance.Data + uVar8 * 8;
  pFVar12 = local_b8;
  FVar14.Data = local_b0.AllocatorInstance.Data;
  while( true ) {
    local_e0 = FVar14.Data;
    if (local_b0.ArrayNum != (uint)uVar8) {
      `TCheckedPointerIterator<FDS_MapMainCategoryTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (FVar14.Data == pFVar12) break;
    lVar11 = *(longlong *)FVar14.Data;
    if (lVar11 == 0) {
      FVar14.Data = FVar14.Data + 8;
      uVar8 = (ulonglong)local_108;
    }
    else {
      local_110 = *(uint *)(lVar11 + 0x30);
      lVar10 = (longlong)(int)local_110;
      _Src = *(void **)(lVar11 + 0x28);
      local_118.Data = (FScriptContainerElement *)0x0;
      if (local_110 == 0) {
        local_10c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_110,0,&local_118,local_110,&local_10c);
        memcpy(local_118.Data,_Src,lVar10 << 2);
      }
      pUVar4 = GetTransientPackageAsObject();
      pUVar5 = NewObject<UDS_UserObjectTreeItem>(pUVar4);
      local_c8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      UDS_UserObjectTreeItem::SetDepth(pUVar5,0);
      uVar2 = local_110;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar5 != (UDS_UserObjectTreeItem *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
      }
      local_100.ObjectIndex = 0;
      local_100.ObjectSerialNumber = 0;
      local_res10 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_res10);
      CreateListItemContext
                (this,&local_78,MAIN_CATEGORY,iVar13,*(int *)(lVar11 + 0x20),
                 (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_100,uVar2);
      local_98.Object = (FDS_ViewModelContext *)local_78.Object;
      local_98.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      local_d8 = (FName)local_78.SharedReferenceCount.ReferenceController;
      if ((FName)local_78.SharedReferenceCount.ReferenceController != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8) =
             (atomic<int>)
             ((int)*(atomic<int> *)((longlong)local_78.SharedReferenceCount.ReferenceController + 8)
             + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar5,&local_98);
      uVar9 = (ulonglong)(int)local_110;
      local_res20 = local_110;
      pFVar12 = local_118.Data + uVar9 * 4;
      local_e8 = local_118.Data;
      uVar8 = uVar9;
      local_c0 = pFVar12;
      iVar13 = iVar13 + 1;
      while( true ) {
        if ((int)uVar9 != (int)uVar8) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (local_e8 == pFVar12) break;
        pFVar6 = FDS_MapMidCategoryTableRow::Get((longlong)*(int *)local_e8,true);
        if (pFVar6 != (FDS_MapMidCategoryTableRow *)0x0) {
          local_128.Data = (FScriptContainerElement *)0x0;
          local_120 = (pFVar6->ID_Name).ArrayNum;
          lVar11 = (longlong)(int)local_120;
          pFVar12 = (pFVar6->ID_Name).AllocatorInstance.Data;
          if (local_120 == 0) {
            local_11c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_120,0,&local_128,local_120,&local_11c);
            memcpy(local_128.Data,pFVar12,lVar11 << 2);
          }
          this_00 = NewObject<UDS_UserObjectTreeItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          UDS_UserObjectTreeItem::SetDepth(this_00,1);
          uVar2 = local_120;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (this_00 != (UDS_UserObjectTreeItem *)0x0) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
          }
          local_f8.ObjectIndex = 0;
          local_f8.ObjectSerialNumber = 0;
          local_res10 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_res10);
          local_res18 = iVar13 + 1;
          CreateListItemContext
                    (this,&local_68,MID_CATEGORY,iVar13,pFVar6->ID_MapIndexSpawn,
                     (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_f8,uVar2);
          local_res10 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectTreeItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          UDS_UserObjectTreeItem::AddChildItem
                    (pUVar5,(TObjectPtr<UDS_UserObjectTreeItem>)&local_res10);
          local_88.Object = (FDS_ViewModelContext *)local_68.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          local_98.Object =
               (FDS_ViewModelContext *)local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)this_00,&local_88);
          uVar2 = local_120;
          uVar8 = (ulonglong)(int)local_120;
          pFVar12 = local_128.Data + uVar8 * 4;
          FVar14.Data = local_128.Data;
          while( true ) {
            if ((uint)uVar8 != uVar2) {
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar14.Data == pFVar12) break;
            iVar13 = *(int *)FVar14.Data;
            pFVar7 = FDS_MapIndexSpawnTableRow::Get((longlong)iVar13,true);
            if (pFVar7 != (FDS_MapIndexSpawnTableRow *)0x0) {
              pUVar5 = NewObject<UDS_UserObjectTreeItem>((UObject *)this);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              UDS_UserObjectTreeItem::SetDepth(pUVar5,2);
              iVar1 = local_res18;
              local_res18 = local_res18 + 1;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar5 != (UDS_UserObjectTreeItem *)0x0) {
                  UE::GC::MarkAsReachable((UObject *)pUVar5);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar5);
                }
              }
              local_f0.ObjectIndex = 0;
              local_f0.ObjectSerialNumber = 0;
              local_res10 = pUVar5;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_res10);
              CreateListItemContext
                        (this,&local_58,LOW_CATEGORY,iVar1,iVar13,
                         (TWeakObjectPtr<UDS_UserObjectTreeItem,FWeakObjectPtr>)local_f0,0);
              local_res10 = pUVar5;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              UDS_UserObjectTreeItem::AddChildItem
                        (this_00,(TObjectPtr<UDS_UserObjectTreeItem>)&local_res10);
              FVar3.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
              local_88.Object = (FDS_ViewModelContext *)local_58.Object;
              local_88.SharedReferenceCount.ReferenceController =
                   local_58.SharedReferenceCount.ReferenceController;
              if (local_58.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext((UDS_UserObjectListItem *)pUVar5,&local_88);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar3.ReferenceController);
            }
            uVar8 = (ulonglong)local_120;
            FVar14.Data = FVar14.Data + 4;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_98.Object);
          pFVar12 = local_c0;
          pUVar5 = local_c8;
          iVar13 = local_res18;
          if (local_128.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data);
            pFVar12 = local_c0;
            pUVar5 = local_c8;
            iVar13 = local_res18;
          }
        }
        uVar9 = (ulonglong)local_110;
        local_e8 = local_e8 + 4;
        uVar8 = (ulonglong)local_res20;
      }
      local_res10 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_UserObjectTreeItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_d8);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      FVar14.Data = local_e0 + 8;
      uVar8 = (ulonglong)local_108;
      pFVar12 = local_b8;
    }
  }
  local_d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

