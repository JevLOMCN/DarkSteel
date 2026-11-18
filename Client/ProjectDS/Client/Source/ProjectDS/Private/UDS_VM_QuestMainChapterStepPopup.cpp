// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6c5620

UClass * __cdecl UDS_VM_QuestMainChapterStepPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterStepPopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterStepPopup,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterStepPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterStepPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton;
}

// UDS_VM_QuestMainChapterStepPopup @ 14b6ca990

UDS_VM_QuestMainChapterStepPopup * __thiscall
UDS_VM_QuestMainChapterStepPopup::UDS_VM_QuestMainChapterStepPopup
          (UDS_VM_QuestMainChapterStepPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepPopup__6B_;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.ArrayMax = 0;
  this->QuestID = 0;
  return this;
}

// UDS_VM_QuestMainChapterStepPopup @ 14b6ca9f0

UDS_VM_QuestMainChapterStepPopup * __thiscall
UDS_VM_QuestMainChapterStepPopup::UDS_VM_QuestMainChapterStepPopup
          (UDS_VM_QuestMainChapterStepPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepPopup__6B_;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ChapterStepList).UserObjectList.ArrayMax = 0;
  this->QuestID = 0;
  return this;
}

// ~UDS_VM_QuestMainChapterStepPopup @ 14b6cc860

void __thiscall
UDS_VM_QuestMainChapterStepPopup::~UDS_VM_QuestMainChapterStepPopup
          (UDS_VM_QuestMainChapterStepPopup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepPopup__6B_;
  pFVar1 = (this->EntryBindingEventField_ChapterStepList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfa00

IClassDescriptor * __thiscall
UDS_VM_QuestMainChapterStepPopup::GetFieldNotificationDescriptor
          (UDS_VM_QuestMainChapterStepPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainChapterStepPopup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d06c0

UClass * __cdecl UDS_VM_QuestMainChapterStepPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterStepPopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterStepPopup,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterStepPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterStepPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainChapterStepPopup @ 14b6d1090

void __cdecl
UDS_VM_QuestMainChapterStepPopup::StaticRegisterNativesUDS_VM_QuestMainChapterStepPopup(void)

{
  return;
}

// GetChapterStepQuestListByQuestID @ 14bf570b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_VM_QuestMainChapterStepPopup::GetChapterStepQuestListByQuestID
          (UDS_VM_QuestMainChapterStepPopup *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FDS_QuestMainTableRow *this_00;
  ForAnyElementType FVar6;
  undefined1 local_res18 [8];
  TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < param_1) {
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)param_1,true);
    bVar4 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar4) {
      FDS_QuestMainTableRow::GetAll(&local_38);
      iVar3 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
      FVar6.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FDS_QuestMainTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (FVar6.Data == pFVar1) break;
        lVar2 = *(longlong *)FVar6.Data;
        if ((*(int *)(lVar2 + 0x24) == this_00->ChapterIndex) && (*(int *)(lVar2 + 8) <= param_1)) {
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               *(undefined4 *)(lVar2 + 8);
        }
        FVar6.Data = FVar6.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// OnSetViewModel @ 14bf6bc70

void __thiscall
UDS_VM_QuestMainChapterStepPopup::OnSetViewModel
          (UDS_VM_QuestMainChapterStepPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_Quest>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
    this->QuestID = (local_28.Object)->QuestID;
    UpdateChapterStepList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateChapterStepList @ 14bf86f90

void __thiscall
UDS_VM_QuestMainChapterStepPopup::UpdateChapterStepList(UDS_VM_QuestMainChapterStepPopup *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FDS_QuestMainTableRow *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_02;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ChapterStepList);
  iVar2 = this->QuestID;
  if (0 < iVar2) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)iVar2,true);
    bVar7 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar7) {
      FDS_QuestMainTableRow::GetAll(&local_78);
      iVar6 = local_78.ArrayNum;
      pFVar1 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
      FVar13.Data = local_78.AllocatorInstance.Data;
      while( true ) {
        if (local_78.ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FDS_QuestMainTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar13.Data == pFVar1) break;
        lVar4 = *(longlong *)FVar13.Data;
        if ((*(int *)(lVar4 + 0x24) == this_00->ChapterIndex) && (*(int *)(lVar4 + 8) <= iVar2)) {
          iVar8 = (int)local_80;
          if ((int)local_80 == local_80._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_88,(int *)((longlong)&local_80 + 4));
          }
          local_80 = CONCAT44(local_80._4_4_,iVar8 + 1);
          *(undefined4 *)(local_88.Data + (longlong)iVar8 * 4) = *(undefined4 *)(lVar4 + 8);
        }
        FVar13.Data = FVar13.Data + 8;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    iVar2 = (int)local_80;
    uVar12 = (ulonglong)(int)local_80;
    local_res20 = local_88.Data + uVar12 * 4;
    FVar13.Data = local_88.Data;
    while( true ) {
      pFVar1 = local_res20;
      if ((int)uVar12 != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar1) break;
      uVar3 = *(undefined4 *)FVar13.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf87203;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf87203:
          if (local_88.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_88.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar9 = ::operator_new(0x28);
      if (pFVar9 == (FDS_ViewModelContext *)0x0) {
        pFVar9 = (FDS_ViewModelContext *)0x0;
      }
      else {
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_Quest__6B_;
        *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
        pFVar9[1]._padding_ = 0;
        pFVar9->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
      }
      pTVar10 = ::operator_new(0x20);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Quest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar10[1].SharedReferenceCount = pFVar9;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_Quest::StaticStruct();
      pFVar9->DerivedStaticStruct = (UStruct *)pUVar11;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar9;
        local_68.SharedReferenceCount.ReferenceController = pTVar10;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = QuestMainChapterStepSlot;
      *(undefined4 *)&pFVar9[1]._padding_ = uVar3;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar10;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      local_res18 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_ChapterStepList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      uVar12 = local_80 & 0xffffffff;
      FVar13.Data = FVar13.Data + 4;
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_ChapterStepList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_ChapterStepList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  return;
}

