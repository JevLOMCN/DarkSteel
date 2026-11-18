// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6eda70

UClass * __cdecl UDS_VM_TotalMenu_ItemSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_ItemSet",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_ItemSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu_ItemSet>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_ItemSet>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton;
}

// UDS_VM_TotalMenu_ItemSet @ 14b6f2990

UDS_VM_TotalMenu_ItemSet * __thiscall
UDS_VM_TotalMenu_ItemSet::UDS_VM_TotalMenu_ItemSet
          (UDS_VM_TotalMenu_ItemSet *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSet__6B_;
  (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayMax = 0;
  (this->TotalMenuIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TotalMenuIds).ArrayNum = 0;
  (this->TotalMenuIds).ArrayMax = 0;
  return this;
}

// UDS_VM_TotalMenu_ItemSet @ 14b6f29f0

UDS_VM_TotalMenu_ItemSet * __thiscall
UDS_VM_TotalMenu_ItemSet::UDS_VM_TotalMenu_ItemSet
          (UDS_VM_TotalMenu_ItemSet *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSet__6B_;
  (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Item).UserObjectList.ArrayMax = 0;
  (this->TotalMenuIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TotalMenuIds).ArrayNum = 0;
  (this->TotalMenuIds).ArrayMax = 0;
  return this;
}

// ~UDS_VM_TotalMenu_ItemSet @ 14b6f44e0

void __thiscall UDS_VM_TotalMenu_ItemSet::~UDS_VM_TotalMenu_ItemSet(UDS_VM_TotalMenu_ItemSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSet__6B_;
  pFVar1 = (this->TotalMenuIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Item).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6e00

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_ItemSet::GetFieldNotificationDescriptor(UDS_VM_TotalMenu_ItemSet *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_ItemSet::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f78a0

UClass * __cdecl UDS_VM_TotalMenu_ItemSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_ItemSet",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_ItemSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu_ItemSet>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_ItemSet>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSet.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_ItemSet @ 14b6f8490

void __cdecl UDS_VM_TotalMenu_ItemSet::StaticRegisterNativesUDS_VM_TotalMenu_ItemSet(void)

{
  return;
}

// OnSetViewModel @ 14bf6e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_ItemSet::OnSetViewModel
          (UDS_VM_TotalMenu_ItemSet *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> local_158;
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
  SafeCast<FDS_ViewModelContext_TotalMenuItemSet>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_TotalMenuItemSet *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TotalMenu_ItemSet::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x12,
                 L"FDS_ViewModelContext_TotalMenuItemSet is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TArray<enum_EDS_TotalMenuId,TSizedDefaultAllocator<32>_>::operator=
              (&this->TotalMenuIds,&(local_158.Object)->TotalMenuIds);
    SetMainListItem(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMainListItem @ 14bf7c210

void __thiscall UDS_VM_TotalMenu_ItemSet::SetMainListItem(UDS_VM_TotalMenu_ItemSet *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Item);
  pFVar10 = (this->TotalMenuIds).AllocatorInstance.Data;
  iVar2 = (this->TotalMenuIds).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 4;
  while( true ) {
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if ((this->TotalMenuIds).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EDS_TotalMenuId,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField_Item.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField_Item.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      return;
    }
    pUVar5 = GetTransientPackageAsObject();
    this_00 = NewObject<UDS_UserObjectListItem>(pUVar5);
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->ViewModelTemplateKey = None;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItem__6B_;
      pFVar9 = pFVar6;
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
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItem__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    pUVar8 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = TotalMenu_Item;
    *(undefined4 *)&pFVar9[1]._padding_ = *(undefined4 *)pFVar10;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    local_res10 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_Item,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar10 = pFVar10 + 4;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

