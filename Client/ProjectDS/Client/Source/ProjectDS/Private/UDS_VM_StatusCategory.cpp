// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6e1e50

UClass * __cdecl UDS_VM_StatusCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategory",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategory,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton;
}

// UDS_VM_StatusCategory @ 14b6e6010

UDS_VM_StatusCategory * __thiscall
UDS_VM_StatusCategory::UDS_VM_StatusCategory(UDS_VM_StatusCategory *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategory__6B_;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->CategoryName).StringTableType = None;
  return this;
}

// UDS_VM_StatusCategory @ 14b6e60c0

UDS_VM_StatusCategory * __thiscall
UDS_VM_StatusCategory::UDS_VM_StatusCategory
          (UDS_VM_StatusCategory *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategory__6B_;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->CategoryName).StringTableType = None;
  return this;
}

// ~UDS_VM_StatusCategory @ 14b6e7390

void __thiscall UDS_VM_StatusCategory::~UDS_VM_StatusCategory(UDS_VM_StatusCategory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategory__6B_;
  pFVar1 = (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CategoryName).FormatArgs.AllocatorInstance.Data,
             (this->CategoryName).FormatArgs.ArrayNum);
  pFVar1 = (this->CategoryName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9980

IClassDescriptor * __thiscall
UDS_VM_StatusCategory::GetFieldNotificationDescriptor(UDS_VM_StatusCategory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StatusCategory::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea540

UClass * __cdecl UDS_VM_StatusCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategory",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategory,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StatusCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategory.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_StatusCategory @ 14b6eaca0

void __cdecl UDS_VM_StatusCategory::StaticRegisterNativesUDS_VM_StatusCategory(void)

{
  return;
}

// OnSetViewModel @ 14be3f9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategory::OnSetViewModel
          (UDS_VM_StatusCategory *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_StatusCategory *pFVar3;
  atomic<int> *paVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  UEnum *pUVar11;
  ulonglong uVar12;
  FDS_ViewModelContext *pFVar13;
  atomic<int> *paVar14;
  undefined1 auStackY_358 [32];
  undefined1 local_318 [4];
  atomic<int> local_314;
  uint local_310;
  TSharedPtr<FDS_ViewModelContext_StatusCategory,1> local_308;
  TSharedPtr<FDS_ViewModelContext,1> *local_2f8;
  FWeakObjectPtr local_2f0;
  UDS_UserObjectListItem *local_2e8;
  atomic<int> *local_2e0;
  undefined1 local_2d8 [40];
  FDS_ViewModelContext *local_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f8 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_2a8.Object = param_1->Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusCategory>(&local_308,&local_2a8);
  pFVar3 = local_308.Object;
  if (local_308.Object == (FDS_ViewModelContext_StatusCategory *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_StatusCategory::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x11,L"context is Invalid.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_308.Object == (FDS_ViewModelContext_StatusCategory *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->PlayerEntityID = pFVar3->PlayerEntityID;
    this->CharID = pFVar3->CharID;
    UDS_CharStatusData::GetData((ulong64)&local_2f0);
    bVar5 = FWeakObjectPtr::IsValid(&local_2f0);
    if ((!bVar5) && (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_StatusCategory::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0x1b,
                 L"charStatusData is Invalid. CharacterEntityID : %llu");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Status);
    local_310 = (pFVar3->StatusTypeList).ArrayNum;
    uVar12 = (ulonglong)(int)local_310;
    paVar14 = (atomic<int> *)(pFVar3->StatusTypeList).AllocatorInstance.Data;
    local_2e0 = paVar14 + uVar12;
    while( true ) {
      paVar4 = local_2e0;
      if ((pFVar3->StatusTypeList).ArrayNum != (int)uVar12) {
        local_318[0] = 0;
        `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_318);
      }
      if (paVar14 == paVar4) break;
      local_314 = *paVar14;
      pUVar7 = GetTransientPackageAsObject();
      this_00 = NewObject<UDS_UserObjectListItem>(pUVar7);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14be3fe10;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14be3fe10;
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar8 = ::operator_new(0x30);
      pFVar13 = (FDS_ViewModelContext *)0x0;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusCategorySlot__6B_;
        pFVar8[1]._padding_ = 0;
        pFVar13 = pFVar8;
      }
      pFVar9 = ::operator_new(0x20);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusCategorySlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar13;
        pFVar8 = pFVar9;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_StatusCategorySlot::StaticStruct();
      *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_2d8._32_8_ = pFVar13;
        local_2b0 = pFVar8;
        UDS_ViewModelContextManager::RegisterContext
                  (this_01,(TSharedPtr<FDS_ViewModelContext,1> *)(local_2d8 + 0x20));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_2b0);
      }
      pFVar13->ViewModelTemplateKey = StatusCategorySlot;
      pFVar13[1]._padding_ = this->PlayerEntityID;
      *(int *)&pFVar13[1].DerivedStaticStruct = this->CharID;
      ((atomic<int> *)&pFVar13[1].DerivedStaticStruct)[1] = local_314;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_298.Object = pFVar13;
      local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_UserObjectListItem::AddContext(this_00,&local_298);
      local_2e8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_Status,(TObjectPtr<UDS_UserObjectListItem>)&local_2e8
                );
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      uVar12 = (ulonglong)local_310;
      paVar14 = paVar14 + 1;
    }
    if ((local_308.Object == (FDS_ViewModelContext_StatusCategory *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = StaticEnum<enum_EDS_StatusCategoryType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_2d8,(int)pUVar11);
    FDS_Text::SetTextFromStringEnumTable(&this->CategoryName,(FName *)local_2d8);
    local_2d8._24_4_ = FFieldNotificationClassDescriptor::CategoryName.BitNumber;
    local_2d8._16_4_ =
         FFieldNotificationClassDescriptor::CategoryName.FieldName.ComparisonIndex.Value;
    local_2d8._20_4_ = FFieldNotificationClassDescriptor::CategoryName.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_2d8 + 0x10);
LAB_14be3fe10:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    param_1 = local_2f8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

