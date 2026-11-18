// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6a25a0

UClass * __cdecl UDS_VM_MountCategoryList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountCategoryList",
               &Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountCategoryList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountCategoryList>,
               InternalVTableHelperCtorCaller<UDS_VM_MountCategoryList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton;
}

// UDS_VM_MountCategoryList @ 14b6a5050

UDS_VM_MountCategoryList * __thiscall
UDS_VM_MountCategoryList::UDS_VM_MountCategoryList
          (UDS_VM_MountCategoryList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryList__6B_;
  (this->MountCategoryListEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountCategoryListEntry).UserObjectList.ArrayNum = 0;
  (this->MountCategoryListEntry).UserObjectList.ArrayMax = 0;
  this->CurCategoryType = 0;
  this->CategoryMaxValue = 0;
  return this;
}

// UDS_VM_MountCategoryList @ 14b6a50b0

UDS_VM_MountCategoryList * __thiscall
UDS_VM_MountCategoryList::UDS_VM_MountCategoryList
          (UDS_VM_MountCategoryList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryList__6B_;
  (this->MountCategoryListEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MountCategoryListEntry).UserObjectList.ArrayNum = 0;
  (this->MountCategoryListEntry).UserObjectList.ArrayMax = 0;
  this->CurCategoryType = 0;
  this->CategoryMaxValue = 0;
  return this;
}

// ~UDS_VM_MountCategoryList @ 14b6a70d0

void __thiscall UDS_VM_MountCategoryList::~UDS_VM_MountCategoryList(UDS_VM_MountCategoryList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryList__6B_;
  pFVar1 = (this->MountCategoryListEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9780

IClassDescriptor * __thiscall
UDS_VM_MountCategoryList::GetFieldNotificationDescriptor(UDS_VM_MountCategoryList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MountCategoryList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa040

UClass * __cdecl UDS_VM_MountCategoryList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountCategoryList",
               &Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountCategoryList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountCategoryList>,
               InternalVTableHelperCtorCaller<UDS_VM_MountCategoryList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountCategoryList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountCategoryList @ 14b6aac60

void __cdecl UDS_VM_MountCategoryList::StaticRegisterNativesUDS_VM_MountCategoryList(void)

{
  return;
}

// BindModel @ 14bed8020

void __thiscall UDS_VM_MountCategoryList::BindModel(UDS_VM_MountCategoryList *this)

{
  return;
}

// InitViewModel @ 14bef3140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_VM_MountCategoryList::InitViewModel(UDS_VM_MountCategoryList *this)

{
  undefined1 auStackY_68 [32];
  ForAnyElementType local_28;
  int local_20;
  int local_1c [2];
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_1c[1] = 0x3020100;
  local_14 = 4;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,5,0,&local_28,5,local_1c);
  memcpy(local_28.Data,local_1c + 1,5);
  this->CategoryMaxValue = local_20;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  this->CurCategoryType = 1;
  SetCategoryList(this);
  return;
}

// OnSetViewModel @ 14bf05f10

void __thiscall
UDS_VM_MountCategoryList::OnSetViewModel
          (UDS_VM_MountCategoryList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCategoryList @ 14bf134d0

void __thiscall UDS_VM_MountCategoryList::SetCategoryList(UDS_VM_MountCategoryList *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  UEnum *this_02;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  FName local_res8;
  UDS_UserObjectListItem *local_res10;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FString local_48;
  
  FDS_EntryBindingEventField::Reset(&this->MountCategoryListEntry);
  uVar9 = 1;
  do {
    pFVar6 = (FDS_ViewModelContext *)0x0;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf13552;
    }
    else if (this_00 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bf13552:
      pFVar4 = ::operator_new(0x30);
      pFVar7 = pFVar6;
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
        (pFVar4->ViewModelName).ComparisonIndex = 0;
        (pFVar4->ViewModelName).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_MountCategoryListItem__6B_;
        pFVar4[1]._padding_ = 0;
        pFVar7 = pFVar4;
      }
      pFVar4 = ::operator_new(0x20);
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar4->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountCategoryListItem__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
        pFVar6 = pFVar4;
      }
      if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = FDS_ViewModelContext_MountCategoryListItem::StaticStruct();
      *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_88.Object = pFVar7;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      pFVar7->ViewModelTemplateKey = W_MountCategoryListSlot;
      *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 1;
      *(atomic<int> *)&pFVar7[1].DerivedStaticStruct = SUB84(uVar9,0);
      this_02 = StaticEnum<enum_EDS_MountCategoryType>();
      if (this_02 == (UEnum *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8627520946023956243>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                           0xed,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = 0;
      }
      else {
        UEnum::GetNameStringByValue(this_02,&local_48,uVar9 & 0xff);
        local_res8 = (FName)this_02->_padding_;
        ::FName::ToString(&local_res8,&local_78);
        ::FString::PrintfImpl(&local_68,L"%s_%s");
        iVar3 = DS_Util::GetEnumIconID(&local_68);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      *(int *)&pFVar7[1]._padding_ = iVar3;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_58.Object = pFVar7;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      local_res10 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->MountCategoryListEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
    }
    uVar8 = (int)SUB84(uVar9,0) + 1;
    uVar9 = (ulonglong)uVar8;
    if (4 < (int)uVar8) {
      local_90 = FFieldNotificationClassDescriptor::MountCategoryListEntry.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::MountCategoryListEntry.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      return;
    }
  } while( true );
}

// UnbindModel @ 14bf1e050

void __thiscall UDS_VM_MountCategoryList::UnbindModel(UDS_VM_MountCategoryList *this)

{
  return;
}

