// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b627580

UClass * __cdecl UDS_VM_Customize_Component_SlotList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Customize_Component_SlotList",
               &Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Customize_Component_SlotList,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Customize_Component_SlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_Customize_Component_SlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton;
}

// UDS_VM_Customize_Component_SlotList @ 14b62e770

UDS_VM_Customize_Component_SlotList * __thiscall
UDS_VM_Customize_Component_SlotList::UDS_VM_Customize_Component_SlotList
          (UDS_VM_Customize_Component_SlotList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_SlotList__6B_;
  (this->EntryBindingEvent_Slots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_Slots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_Slots).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->ComponentTable = (FDS_CustomizingComponentTableRow *)0x0;
  return this;
}

// UDS_VM_Customize_Component_SlotList @ 14b62e810

UDS_VM_Customize_Component_SlotList * __thiscall
UDS_VM_Customize_Component_SlotList::UDS_VM_Customize_Component_SlotList
          (UDS_VM_Customize_Component_SlotList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_SlotList__6B_;
  (this->EntryBindingEvent_Slots).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent_Slots).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent_Slots).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->ComponentTable = (FDS_CustomizingComponentTableRow *)0x0;
  return this;
}

// ~UDS_VM_Customize_Component_SlotList @ 14b62f960

void __thiscall
UDS_VM_Customize_Component_SlotList::~UDS_VM_Customize_Component_SlotList
          (UDS_VM_Customize_Component_SlotList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_SlotList__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEvent_Slots).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631f30

IClassDescriptor * __thiscall
UDS_VM_Customize_Component_SlotList::GetFieldNotificationDescriptor
          (UDS_VM_Customize_Component_SlotList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Customize_Component_SlotList::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632ea0

UClass * __cdecl UDS_VM_Customize_Component_SlotList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Customize_Component_SlotList",
               &Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Customize_Component_SlotList,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Customize_Component_SlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_Customize_Component_SlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Customize_Component_SlotList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Customize_Component_SlotList @ 14b633190

void __cdecl
UDS_VM_Customize_Component_SlotList::StaticRegisterNativesUDS_VM_Customize_Component_SlotList(void)

{
  return;
}

// BindModel @ 14c06c360

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_Customize_Component_SlotList::BindModel(UDS_VM_Customize_Component_SlotList *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14c08c780

void __thiscall
UDS_VM_Customize_Component_SlotList::InitViewModel(UDS_VM_Customize_Component_SlotList *this)

{
  return;
}

// OnSetViewModel @ 14c0999a0

void __thiscall
UDS_VM_Customize_Component_SlotList::OnSetViewModel
          (UDS_VM_Customize_Component_SlotList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar9;
  FDS_CustomizingComponentTableRow *pFVar10;
  uint uVar11;
  longlong local_res18;
  UDS_VM_Customize_Component_SlotList *local_res20;
  UDS_UserObjectListItem *local_a8 [2];
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_CustomizeComponent,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CustomizeComponent>(&local_78,&local_58);
  if (local_78.Object == (FDS_ViewModelContext_CustomizeComponent *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar10 = (local_78.Object)->CustomizingComponentTable;
    if (pFVar10 == (FDS_CustomizingComponentTableRow *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      this->ComponentTable = pFVar10;
      FDS_Text::SetTextFromStringID(&this->TitleText,&pFVar10->ID_Title);
      local_90 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::TitleText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      FDS_EntryBindingEventField::Reset(&this->EntryBindingEvent_Slots);
      pFVar10 = this->ComponentTable;
      uVar11 = 0;
      if (0 < (pFVar10->Value).ArrayNum) {
        local_res18 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar11 < (pFVar10->Value).ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (FDS_ViewModelContext *)0x0;
          iVar1 = *(int *)((pFVar10->Value).AllocatorInstance.Data + local_res18);
          uVar5 = 0;
          if ((-1 < (int)uVar11) &&
             (pFVar10 = this->ComponentTable, uVar5 = 0,
             (int)uVar11 < (pFVar10->ID_ValueIcon).ArrayNum)) {
            if ((int)uVar11 < (pFVar10->ID_ValueIcon).ArrayNum) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar5 = *(uint *)((pFVar10->ID_ValueIcon).AllocatorInstance.Data + local_res18);
          }
          pFVar6 = ::operator_new(0x40);
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar6->field_0x1c = 0;
            *(undefined8 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
            *(undefined8 *)((longlong)&pFVar6[1].DerivedStaticStruct + 4) = 0;
            *(undefined4 *)&pFVar6[1].field_0x1c = 0;
            pFVar6->DerivedStaticStruct = (UStruct *)0x0;
            (pFVar6->ViewModelName).ComparisonIndex = 0;
            (pFVar6->ViewModelName).Number = 0;
            pFVar6->ViewModelTemplateKey = None;
            pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CustomizeSlot__6B_;
            *(undefined8 *)&pFVar6[1].ViewModelName.Number = 0;
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
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CustomizeSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            pTVar7->WeakReferenceCount = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
          }
          if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar8 = FDS_ViewModelContext_CustomizeSlot::StaticStruct();
          pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
          this_00 = UDS_ViewModelContextManager::GetInst();
          if (this_00 != (UDS_ViewModelContextManager *)0x0) {
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar9;
            local_68.SharedReferenceCount.ReferenceController = pTVar7;
            UDS_ViewModelContextManager::RegisterContext(this_00,&local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.SharedReferenceCount.ReferenceController);
          }
          pFVar9->ViewModelTemplateKey = W_CustomizeComponent_Slot;
          *(uint *)((longlong)&pFVar9[1].DerivedStaticStruct + 4) = uVar11;
          *(uint *)&pFVar9[1]._padding_ = uVar5;
          *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar1;
          *(int *)&pFVar9[1].DerivedStaticStruct = this->ComponentTable->ID;
          if ((local_78.Object == (FDS_ViewModelContext_CustomizeComponent *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar2 = (local_78.Object)->IntDefaultValue;
          if (iVar2 == 0) {
            iVar2 = this->ComponentTable->DefaultValueInt;
          }
          *(bool *)&pFVar9[1].ViewModelName.ComparisonIndex.Value = iVar1 == iVar2;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pFVar9[1].ViewModelName.Number,(FObjectPtr)&local_res20);
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48.Object = pFVar9;
          local_48.SharedReferenceCount.ReferenceController = pTVar7;
          UDS_UserObjectListItem::AddContext(this_01,&local_48);
          local_a8[0] = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEvent_Slots,(TObjectPtr<UDS_UserObjectListItem>)local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          uVar11 = uVar11 + 1;
          pFVar10 = this->ComponentTable;
          local_res18 = local_res18 + 4;
        } while ((int)uVar11 < (pFVar10->Value).ArrayNum);
      }
      local_80 = FFieldNotificationClassDescriptor::EntryBindingEvent_Slots.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::EntryBindingEvent_Slots.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c0adbc0

void __thiscall
UDS_VM_Customize_Component_SlotList::UnbindModel(UDS_VM_Customize_Component_SlotList *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014c0adbc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

