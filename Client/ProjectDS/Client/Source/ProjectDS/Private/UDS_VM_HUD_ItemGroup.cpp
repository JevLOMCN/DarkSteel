// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b669120

UClass * __cdecl UDS_VM_HUD_ItemGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ItemGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ItemGroup,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_ItemGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ItemGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton;
}

// UDS_VM_HUD_ItemGroup @ 14b66dc20

UDS_VM_HUD_ItemGroup * __thiscall
UDS_VM_HUD_ItemGroup::UDS_VM_HUD_ItemGroup(UDS_VM_HUD_ItemGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_HUD_ItemGroup @ 14b66dc70

UDS_VM_HUD_ItemGroup * __thiscall
UDS_VM_HUD_ItemGroup::UDS_VM_HUD_ItemGroup(UDS_VM_HUD_ItemGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_HUD_ItemGroup @ 14b66f3c0

void __thiscall UDS_VM_HUD_ItemGroup::~UDS_VM_HUD_ItemGroup(UDS_VM_HUD_ItemGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemGroup__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671ab0

IClassDescriptor * __thiscall
UDS_VM_HUD_ItemGroup::GetFieldNotificationDescriptor(UDS_VM_HUD_ItemGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_ItemGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6726a0

UClass * __cdecl UDS_VM_HUD_ItemGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ItemGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ItemGroup,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_ItemGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ItemGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ItemGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_ItemGroup @ 14b672bd0

void __cdecl UDS_VM_HUD_ItemGroup::StaticRegisterNativesUDS_VM_HUD_ItemGroup(void)

{
  return;
}

// OnSetViewModel @ 14bf68670

void __thiscall
UDS_VM_HUD_ItemGroup::OnSetViewModel
          (UDS_VM_HUD_ItemGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateListEntry(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateListEntry @ 14bf88010

void __thiscall UDS_VM_HUD_ItemGroup::UpdateListEntry(UDS_VM_HUD_ItemGroup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar8;
  ulonglong uVar9;
  UDS_UserObjectListItem *local_res10;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  iVar3 = DS_CommonDataHelper::DropItemMessageCount();
  if (0 < (int)(iVar3 + 1U)) {
    uVar9 = (ulonglong)(iVar3 + 1U);
    do {
      pUVar4 = GetTransientPackageAsObject();
      this_00 = NewObject<UDS_UserObjectListItem>(pUVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar5 = ::operator_new(0x30);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        pFVar5[1]._padding_ = 0;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_DropData__6B_;
        *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
        pFVar8 = pFVar5;
      }
      pFVar6 = ::operator_new(0x20);
      pFVar5 = (FDS_ViewModelContext *)0x0;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DropData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar8;
        pFVar5 = pFVar6;
      }
      if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_DropData::StaticStruct();
      *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar7;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar5->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_58.Object = pFVar8;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar8->ViewModelTemplateKey = HUD_ItemDrop;
      *(int *)&pFVar8[1]._padding_ = iVar3;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar8;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_UserObjectListItem::AddContext(this_00,&local_48);
      local_res10 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar5);
      iVar3 = iVar3 + -1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

