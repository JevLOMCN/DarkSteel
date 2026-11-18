// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetCommonHelpBtn_WrapperImpl @ 14b693960

void __cdecl UDS_VM_MailItem::SetCommonHelpBtn_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
  if (*(char *)((longlong)param_1 + 0xb0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b693970

UClass * __cdecl UDS_VM_MailItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MailItem",
               &Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton,
               StaticRegisterNativesUDS_VM_MailItem,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MailItem>,InternalVTableHelperCtorCaller<UDS_VM_MailItem>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton;
}

// UDS_VM_MailItem @ 14b699770

UDS_VM_MailItem * __thiscall
UDS_VM_MailItem::UDS_VM_MailItem(UDS_VM_MailItem *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailItem__6B_;
  (this->ItemsEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemsEntry).UserObjectList.ArrayNum = 0;
  (this->ItemsEntry).UserObjectList.ArrayMax = 0;
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
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->TitleText).StringTableType = StringUi;
  (this->TitleText).StringTableID = 0x27169;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// UDS_VM_MailItem @ 14b6998c0

UDS_VM_MailItem * __thiscall
UDS_VM_MailItem::UDS_VM_MailItem(UDS_VM_MailItem *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailItem__6B_;
  (this->ItemsEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemsEntry).UserObjectList.ArrayNum = 0;
  (this->ItemsEntry).UserObjectList.ArrayMax = 0;
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
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->TitleText).StringTableType = StringUi;
  (this->TitleText).StringTableID = 0x27169;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// ~UDS_VM_MailItem @ 14b69aed0

void __thiscall UDS_VM_MailItem::~UDS_VM_MailItem(UDS_VM_MailItem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MailItem__6B_;
  pFVar1 = (this->MailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoItemRewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_ActionPoint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  pFVar1 = (this->ItemsEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d3a0

IClassDescriptor * __thiscall UDS_VM_MailItem::GetFieldNotificationDescriptor(UDS_VM_MailItem *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MailItem::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dea0

UClass * __cdecl UDS_VM_MailItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MailItem",
               &Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton,
               StaticRegisterNativesUDS_VM_MailItem,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_MailItem>,InternalVTableHelperCtorCaller<UDS_VM_MailItem>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MailItem.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MailItem @ 14b69e750

void __cdecl UDS_VM_MailItem::StaticRegisterNativesUDS_VM_MailItem(void)

{
  return;
}

// OnSetViewModel @ 14bf053f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MailItem::OnSetViewModel(UDS_VM_MailItem *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  UDS_LogManager *pUVar4;
  int iVar5;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_Mail,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_Mail>(&local_158,&local_148);
  iVar5 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
  if (local_158.Object == (FDS_ViewModelContext_Mail *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MailItem::OnSetViewModel",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x1c,L"context is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (this->CommonHelpBtn != Collapsed) {
      this->CommonHelpBtn = Collapsed;
      local_160 = iVar5;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    iVar1 = ((local_158.Object)->MailUID).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (&this->MailUID,(wchar_t *)((local_158.Object)->MailUID).Data.AllocatorInstance.Data,
               iVar5);
    SetItemRewards(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCommonHelpBtn @ 14bf13810

void __thiscall UDS_VM_MailItem::SetCommonHelpBtn(UDS_VM_MailItem *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
  if (this->CommonHelpBtn != *param_1) {
    this->CommonHelpBtn = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemRewards @ 14bf15120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MailItem::SetItemRewards(UDS_VM_MailItem *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  SqlItemEquipmentTable *pSVar5;
  SqlItemStackableTable *pSVar6;
  code *pcVar7;
  FDS_ViewModelContext_MoneyDisplay *pFVar8;
  FDS_VMContext_RewardSlot *pFVar9;
  bool bVar10;
  bool bVar11;
  UDS_LogManager *pUVar12;
  UDS_MailDataSet *this_00;
  UObject *pUVar13;
  UDS_UserObjectListItem *pUVar14;
  UDS_ItemData *pUVar15;
  undefined8 *puVar16;
  FDS_ViewModelContext *pFVar17;
  UScriptStruct *pUVar18;
  UDS_ViewModelContextManager *this_01;
  FObjectPtr_u_0 FVar19;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar20;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  FDS_ViewModelContext *pFVar24;
  FSharedReferencer<1> FVar25;
  FDS_ViewModelContext *pFVar26;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b0 [8];
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr local_3a0;
  FWeakObjectPtr local_398;
  UDS_M_ItemImplBase *local_390;
  longlong local_388;
  UDS_M_ItemImplBase *local_380;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_378;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_368;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_358;
  UDS_UserObjectListItem *local_348;
  UDS_ItemData *local_340;
  UDS_UserObjectListItem *local_338;
  UDS_ItemData *local_330;
  UDS_UserObjectListItem *local_328 [2];
  FName local_318;
  int local_310;
  TSharedPtr<FDS_ViewModelContext,1> local_308;
  TSharedPtr<FDS_ViewModelContext,1> local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2e8;
  TSharedPtr<FDS_ViewModelContext,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  undefined1 local_2a8 [8];
  TReferenceControllerBase<1> *local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  undefined1 local_288 [8];
  TReferenceControllerBase<1> *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  FDS_EntryBindingEventField::Reset(&this->ItemsEntry);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_398);
  bVar10 = FWeakObjectPtr::IsValid(&local_398);
  if (bVar10) {
    this_00 = (UDS_MailDataSet *)FWeakObjectPtr::Get(&local_398);
    UDS_MailDataSet::GetMailData(this_00,(FString *)local_3b0);
    bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_3b0);
    if (bVar10) {
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_3b0);
      lVar3 = *(longlong *)&pUVar13[4].field_0x18;
      if (lVar3 != 0) {
        local_388 = lVar3;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_3b0);
        bVar10 = (bool)pUVar13[4].field_0x11;
        if ((*(ulonglong *)(lVar3 + 0x10) & 1) == 0) {
          plVar22 = (longlong *)(lVar3 + 0x10);
        }
        else {
          plVar22 = (longlong *)(*(ulonglong *)(lVar3 + 0x10) + 7);
        }
        plVar1 = plVar22 + *(int *)(lVar3 + 0x18);
        for (; plVar22 != plVar1; plVar22 = plVar22 + 1) {
          lVar4 = *plVar22;
          pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar14 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf15363;
          }
          else if (pUVar14 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar14);
LAB_14bf15363:
            MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_378);
            pFVar8 = local_378.Object;
            FVar25.ReferenceController = local_378.SharedReferenceCount.ReferenceController;
            if (local_378.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
              if ((local_378.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar25.ReferenceController = local_378.SharedReferenceCount.ReferenceController;
              *(undefined4 *)&pFVar8->_padding_ = 0x192;
              pFVar8->MoneyId = (longlong)*(int *)(lVar4 + 0x28);
              local_2c8.Object = (FDS_ViewModelContext *)local_378.Object;
              local_2c8.SharedReferenceCount.ReferenceController =
                   local_378.SharedReferenceCount.ReferenceController;
              pFVar8->Quantity = *(long64 *)(lVar4 + 0x20);
              if (local_378.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_378.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar14,&local_2c8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar25.ReferenceController);
            MakeContext<FDS_VMContext_RewardSlot>(&local_368);
            pFVar9 = local_368.Object;
            FVar25.ReferenceController = local_368.SharedReferenceCount.ReferenceController;
            if (local_368.Object != (FDS_VMContext_RewardSlot *)0x0) {
              if ((local_368.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar25.ReferenceController = local_368.SharedReferenceCount.ReferenceController;
              *(undefined4 *)&pFVar9->_padding_ = 0xb8;
              pFVar9->RewardSlotType = Money;
              local_2b8.Object = (FDS_ViewModelContext *)local_368.Object;
              local_2b8.SharedReferenceCount.ReferenceController =
                   local_368.SharedReferenceCount.ReferenceController;
              pFVar9->bIsReward = bVar10;
              if (local_368.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_368.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar14,&local_2b8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar25.ReferenceController);
            local_348 = pUVar14;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            FDS_EntryBindingEventField::Add
                      (&this->ItemsEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_348);
          }
        }
        if ((*(ulonglong *)(lVar3 + 0x28) & 1) == 0) {
          puVar23 = (undefined8 *)(lVar3 + 0x28);
        }
        else {
          puVar23 = (undefined8 *)(*(ulonglong *)(lVar3 + 0x28) + 7);
        }
        puVar2 = puVar23 + *(int *)(lVar3 + 0x30);
        for (; puVar23 != puVar2; puVar23 = puVar23 + 1) {
          pSVar5 = (SqlItemEquipmentTable *)*puVar23;
          pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar14 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf15523;
          }
          else if (pUVar14 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar14);
LAB_14bf15523:
            pUVar15 = NewObject<UDS_ItemData>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_ItemData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            UDS_ItemData::UpdateEquipmentItemData(pUVar15,pSVar5);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar15 != (UDS_ItemData *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UDS_ItemData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
            }
            local_3a8.ObjectIndex = 0;
            local_3a8.ObjectSerialNumber = 0;
            local_340 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_ItemData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FVar19.Handle = (UObject *)&local_340;
            FWeakObjectPtr::operator=(&local_3a8,(FObjectPtr)FVar19);
            TVar20.WeakPtr._1_7_ = FVar19._1_7_;
            TVar20.WeakPtr.ObjectIndex._0_1_ = 0x48;
            DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_390,TVar20);
            if (local_390 != (UDS_M_ItemImplBase *)0x0) {
              UDS_M_ItemImplBase::SetQuantity(local_390,1);
              puVar16 = (undefined8 *)
                        (**(code **)(local_390->_padding_ + 0x310))(local_390,local_2a8);
              local_2f8.Object = (FDS_ViewModelContext *)*puVar16;
              local_2f8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)puVar16[1];
              if (local_2f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_2f8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar14,&local_2f8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2a0);
              MakeContext<FDS_VMContext_RewardSlot>(&local_358);
              pFVar9 = local_358.Object;
              FVar25.ReferenceController = local_358.SharedReferenceCount.ReferenceController;
              if (local_358.Object != (FDS_VMContext_RewardSlot *)0x0) {
                if ((local_358.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar25.ReferenceController = local_358.SharedReferenceCount.ReferenceController;
                *(undefined4 *)&pFVar9->_padding_ = 0xb8;
                pFVar9->RewardSlotType = Item;
                local_298.Object = (FDS_ViewModelContext *)local_358.Object;
                local_298.SharedReferenceCount.ReferenceController =
                     local_358.SharedReferenceCount.ReferenceController;
                pFVar9->bIsReward = bVar10;
                if (local_358.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_358.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_UserObjectListItem::AddContext(pUVar14,&local_298);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar25.ReferenceController);
              local_338 = pUVar14;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar14);
              }
              FDS_EntryBindingEventField::Add
                        (&this->ItemsEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_338);
            }
          }
          lVar3 = local_388;
        }
        if ((*(ulonglong *)(lVar3 + 0x40) & 1) == 0) {
          puVar23 = (undefined8 *)(lVar3 + 0x40);
        }
        else {
          puVar23 = (undefined8 *)(*(ulonglong *)(lVar3 + 0x40) + 7);
        }
        puVar2 = puVar23 + *(int *)(lVar3 + 0x48);
        for (; puVar23 != puVar2; puVar23 = puVar23 + 1) {
          pSVar6 = (SqlItemStackableTable *)*puVar23;
          pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar14 != (UDS_UserObjectListItem *)0x0) goto LAB_14bf15743;
          }
          else if (pUVar14 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar14);
LAB_14bf15743:
            pUVar15 = NewObject<UDS_ItemData>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_ItemData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            UDS_ItemData::UpdateStackableItemData(pUVar15,pSVar6);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar15 != (UDS_ItemData *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UDS_ItemData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
            }
            pFVar24 = (FDS_ViewModelContext *)0x0;
            local_3a0.ObjectIndex = 0;
            local_3a0.ObjectSerialNumber = 0;
            local_330 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_ItemData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FVar19.Handle = (UObject *)&local_330;
            FWeakObjectPtr::operator=(&local_3a0,(FObjectPtr)FVar19);
            TVar21.WeakPtr._1_7_ = FVar19._1_7_;
            TVar21.WeakPtr.ObjectIndex._0_1_ = 0x48;
            DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_380,TVar21);
            if (local_380 != (UDS_M_ItemImplBase *)0x0) {
              UDS_M_ItemImplBase::SetQuantity(local_380,(pSVar6->_impl_).quantity_);
              puVar16 = (undefined8 *)
                        (**(code **)(local_380->_padding_ + 0x310))(local_380,local_288);
              local_2e8.Object = (FDS_ViewModelContext *)*puVar16;
              local_2e8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)puVar16[1];
              if (local_2e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_2e8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar14,&local_2e8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_280);
              pFVar17 = ::operator_new(0x28);
              pFVar26 = pFVar24;
              if (pFVar17 != (FDS_ViewModelContext *)0x0) {
                *(undefined4 *)&pFVar17->field_0x1c = 0;
                *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 2) = 0;
                *(undefined2 *)((longlong)&pFVar17[1]._padding_ + 6) = 0;
                *(undefined8 *)&pFVar17->DerivedStaticStruct = 0;
                (pFVar17->ViewModelName).ComparisonIndex = 0;
                (pFVar17->ViewModelName).Number = 0;
                pFVar17->ViewModelTemplateKey = None;
                pFVar17->_padding_ = (longlong)&___7FDS_VMContext_RewardSlot__6B_;
                *(undefined2 *)&pFVar17[1]._padding_ = 0;
                pFVar26 = pFVar17;
              }
              pFVar17 = ::operator_new(0x20);
              if (pFVar17 != (FDS_ViewModelContext *)0x0) {
                *(atomic<int> *)&pFVar17->DerivedStaticStruct = (atomic<int>)0x1;
                *(code **)&(pFVar17->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
                pFVar17->_padding_ =
                     (longlong)
                     &
                     ___7__TReferenceControllerWithDeleter_UFDS_VMContext_RewardSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
                ;
                ((atomic<int> *)&pFVar17->DerivedStaticStruct)[1] = (atomic<int>)0x1;
                *(FDS_ViewModelContext **)&pFVar17->ViewModelTemplateKey = pFVar26;
                pFVar24 = pFVar17;
              }
              if ((pFVar26 == (FDS_ViewModelContext *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar18 = FDS_VMContext_RewardSlot::StaticStruct();
              *(UScriptStruct **)&pFVar26->DerivedStaticStruct = pUVar18;
              this_01 = UDS_ViewModelContextManager::GetInst();
              if (this_01 != (UDS_ViewModelContextManager *)0x0) {
                if (pFVar24 != (FDS_ViewModelContext *)0x0) {
                  LOCK();
                  *(atomic<int> *)&pFVar24->DerivedStaticStruct =
                       (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
                  UNLOCK();
                }
                local_308.Object = pFVar26;
                local_308.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pFVar24;
                UDS_ViewModelContextManager::RegisterContext(this_01,&local_308);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_308.SharedReferenceCount.ReferenceController);
              }
              pFVar26->ViewModelTemplateKey = W_RewardSlot;
              *(undefined1 *)&pFVar26[1]._padding_ = 1;
              *(bool *)((longlong)&pFVar26[1]._padding_ + 1) = bVar10;
              if (pFVar24 != (FDS_ViewModelContext *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar24->DerivedStaticStruct =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
                UNLOCK();
              }
              local_2d8.Object = pFVar26;
              local_2d8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar24;
              UDS_UserObjectListItem::AddContext(pUVar14,&local_2d8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar24);
              local_328[0] = pUVar14;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar14);
              }
              FDS_EntryBindingEventField::Add
                        (&this->ItemsEntry,(TObjectPtr<UDS_UserObjectListItem>)local_328);
            }
          }
        }
        local_318 = FFieldNotificationClassDescriptor::ItemsEntry.FieldName;
        local_310 = FFieldNotificationClassDescriptor::ItemsEntry.BitNumber;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
      }
    }
    else {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_MailItem::SetItemRewards",0x1f,Yes);
        UDS_LogManager::PrintLog(pUVar12,1,Warning,local_158.Ptr,0x3a,L"mailData is invalid");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  else {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_MailItem::SetItemRewards",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar12,1,Warning,local_278.Ptr,0x33,L"mailDataSet is invalid");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  return;
}

