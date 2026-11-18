// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6293d0

UClass * __cdecl UDS_VM_ContentsStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsStatus",
               &Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsStatus,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContentsStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton;
}

// UDS_VM_ContentsStatus @ 14b62d6d0

UDS_VM_ContentsStatus * __thiscall
UDS_VM_ContentsStatus::UDS_VM_ContentsStatus(UDS_VM_ContentsStatus *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsStatus__6B_;
  (this->StatusDesc).StringTableID = 0;
  (this->StatusDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusDesc).StringEnumTableNameID.Number = 0;
  (this->StatusDesc).DateTime.Ticks = 0;
  (this->StatusDesc).TimeSpan.Ticks = 0;
  (this->StatusDesc).TimeExpressionType = None;
  (this->StatusDesc).IsExpression = false;
  (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).UniqueString.Data.ArrayNum = 0;
  (this->StatusDesc).UniqueString.Data.ArrayMax = 0;
  (this->StatusDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).FormatArgs.ArrayNum = 0;
  (this->StatusDesc).FormatArgs.ArrayMax = 0;
  (this->VM_StatusInfo).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->StatusDesc).StringTableType = None;
  return this;
}

// UDS_VM_ContentsStatus @ 14b62d780

UDS_VM_ContentsStatus * __thiscall
UDS_VM_ContentsStatus::UDS_VM_ContentsStatus
          (UDS_VM_ContentsStatus *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsStatus__6B_;
  (this->StatusDesc).StringTableID = 0;
  (this->StatusDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->StatusDesc).StringEnumTableNameID.Number = 0;
  (this->StatusDesc).DateTime.Ticks = 0;
  (this->StatusDesc).TimeSpan.Ticks = 0;
  (this->StatusDesc).TimeExpressionType = None;
  (this->StatusDesc).IsExpression = false;
  (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).UniqueString.Data.ArrayNum = 0;
  (this->StatusDesc).UniqueString.Data.ArrayMax = 0;
  (this->StatusDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusDesc).FormatArgs.ArrayNum = 0;
  (this->StatusDesc).FormatArgs.ArrayMax = 0;
  (this->VM_StatusInfo).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ContentsStatus).UserObjectList.ArrayMax = 0;
  this->PlayerEntityID = 0;
  this->CharID = 0;
  (this->StatusDesc).StringTableType = None;
  return this;
}

// ~UDS_VM_ContentsStatus @ 14b62f300

void __thiscall UDS_VM_ContentsStatus::~UDS_VM_ContentsStatus(UDS_VM_ContentsStatus *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsStatus__6B_;
  pFVar1 = (this->EntryBindingEventField_ContentsStatus).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->StatusDesc).FormatArgs.AllocatorInstance.Data,
             (this->StatusDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->StatusDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatusDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631c90

IClassDescriptor * __thiscall
UDS_VM_ContentsStatus::GetFieldNotificationDescriptor(UDS_VM_ContentsStatus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContentsStatus::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632a20

UClass * __cdecl UDS_VM_ContentsStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsStatus",
               &Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsStatus,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContentsStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsStatus.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContentsStatus @ 14b6330d0

void __cdecl UDS_VM_ContentsStatus::StaticRegisterNativesUDS_VM_ContentsStatus(void)

{
  return;
}

// OnSetViewModel @ 14bdda270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsStatus::OnSetViewModel
          (UDS_VM_ContentsStatus *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TMap<EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusContentsInfo,int,0>_>
  *this_00;
  EDS_StatusType EVar2;
  EDS_StatusContentsInfo EVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  code *pcVar6;
  FDS_StatusInfo *pFVar7;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UDS_LogManager *pUVar13;
  FDS_StatusTableRow *this_01;
  UDS_CharStatusData *pUVar14;
  FDS_StatusInfo *pFVar15;
  UDS_VM_W_StatusUpgradeInfo *pUVar16;
  FDS_StatusInfoTableRow *this_02;
  int *piVar17;
  UObject *pUVar18;
  UDS_UserObjectListItem *pUVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FSharedReferencer<1> FVar24;
  atomic<int> *paVar25;
  float fVar26;
  undefined1 auStackY_838 [32];
  undefined1 local_7f8;
  undefined1 local_7f7 [7];
  FWeakObjectPtr local_7f0;
  TSharedPtr<FDS_ViewModelContext_ContentsStatus,1> local_7e8;
  uint local_7d8;
  FWeakObjectPtr local_7d0;
  FDS_StatusInfo *local_7c8;
  FDS_StatusTableRow *local_7c0;
  FScriptContainerElement *local_7b8;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_7a8;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_798;
  UDS_UserObjectListItem *local_788;
  FDS_EntryBindingEventField *local_780;
  FScriptContainerElement *local_778;
  longlong *local_770;
  TSharedPtr<FDS_ViewModelContext,1> *local_768;
  FName local_758;
  int local_750;
  FName local_748;
  int local_740;
  FName local_738;
  int local_730;
  TSharedPtr<FDS_ViewModelContext,1> local_728;
  TSharedPtr<FDS_ViewModelContext,1> local_718;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_838;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_768 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_728.Object = param_1->Object;
  local_728.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_728.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsStatus>(&local_7e8,&local_728);
  if (local_7e8.Object == (FDS_ViewModelContext_ContentsStatus *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_708._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_708,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_708.Ptr,0x17,L"context is Invalid.");
      if ((void *)local_708._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_708._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e8.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_7e8.Object == (FDS_ViewModelContext_ContentsStatus *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->PlayerEntityID = (local_7e8.Object)->PlayerEntityID;
    this->CharID = (local_7e8.Object)->CharID;
    EVar2 = (local_7e8.Object)->StatusType;
    this->StatusType = EVar2;
    this_01 = FDS_StatusTableRow::GetRef((longlong)(int)EVar2,true);
    local_7c0 = this_01;
    bVar9 = FDS_StatusTableRow::IsValid(this_01);
    if (bVar9) {
      FDS_Text::SetTextFromStringID(&this->StatusDesc,&this_01->ID_StatusDesc);
      plVar1 = &this->_padding_;
      local_750 = FFieldNotificationClassDescriptor::StatusDesc.BitNumber;
      local_758 = FFieldNotificationClassDescriptor::StatusDesc.FieldName;
      local_770 = plVar1;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_758);
      UDS_PlayerData::GetData((ulong64)&local_7d0,(local_7e8.Object)->PlayerEntityID,false);
      bVar9 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_7d0,(void *)0x0);
      if (bVar9) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_4c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4c8,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
          UDS_LogManager::PrintLog(pUVar13,1,Warning,local_4c8.Ptr,0x2c,L"playerData is nullptr.");
          if ((void *)local_4c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_4c8._padding_);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7e8.SharedReferenceCount.ReferenceController);
      }
      else {
        FWeakObjectPtr::Get(&local_7d0);
        UDS_CharStatusData::GetData((ulong64)&local_7f0);
        bVar9 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_7f0,
                           (void *)0x0);
        if (bVar9) {
          pUVar13 = UDS_LogManager::GetInst();
          if (pUVar13 != (UDS_LogManager *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            local_3a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_3a8,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar13,1,Warning,local_3a8.Ptr,0x33,L"charStatusData is nullptr.");
            if ((void *)local_3a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_3a8._padding_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_7e8.SharedReferenceCount.ReferenceController);
        }
        else {
          pUVar14 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_7f0);
          pFVar15 = UDS_CharStatusData::GetStatusInfo(pUVar14,this->StatusType);
          local_7c8 = pFVar15;
          if (pFVar15 == (FDS_StatusInfo *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            if (pUVar13 != (UDS_LogManager *)0x0) {
              pUVar13 = UDS_LogManager::GetInst();
              local_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_288,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar13,1,Warning,local_288.Ptr,0x3a,L"statusInfo is nullptr.");
              if ((void *)local_288._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_288._padding_);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_7e8.SharedReferenceCount.ReferenceController);
          }
          else {
            pUVar16 = (this->VM_StatusInfo).field0_0x0.DebugPtr;
            if (pUVar16 == (UDS_VM_W_StatusUpgradeInfo *)0x0) {
              pUVar16 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_StatusUpgradeInfo>
                                  ((UObject *)this);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar16 != (UDS_VM_W_StatusUpgradeInfo *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar16);
              }
              (this->VM_StatusInfo).field0_0x0.DebugPtr = pUVar16;
            }
            if (pUVar16 != (UDS_VM_W_StatusUpgradeInfo *)0x0) {
              MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_7a8);
              pFVar8 = local_7a8.Object;
              if (local_7a8.Object != (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
                if ((local_7a8.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(undefined4 *)&pFVar8->_padding_ = 0x1b9;
                pFVar8->StatusIconID = this_01->ID_StatusIcon;
                pFVar8->StatusNameID = (this_01->ID_StatusName).ID;
                pFVar8->IsUpagade = false;
                pFVar8->IsPlus = true;
                pFVar8->BeforeStatusValue = 0;
                pUVar14 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_7f0);
                fVar26 = UDS_CharStatusData::GetMaxStatus(pUVar14,this->StatusType);
                pFVar8->AfterStatusValue = (int)fVar26;
                pUVar14 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_7f0);
                iVar10 = UDS_CharStatusData::GetCharacterContentsStatus(pUVar14,this->StatusType);
                pFVar8->PlusStatusValue = iVar10;
                pFVar8->FormatType = this_01->InfoViewValueFormat;
                pUVar16 = (this->VM_StatusInfo).field0_0x0.DebugPtr;
                local_718.Object = (FDS_ViewModelContext *)local_7a8.Object;
                local_718.SharedReferenceCount.ReferenceController =
                     local_7a8.SharedReferenceCount.ReferenceController;
                if (local_7a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_7a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar16,&local_718);
                local_740 = FFieldNotificationClassDescriptor::VM_StatusInfo.BitNumber;
                local_748 = FFieldNotificationClassDescriptor::VM_StatusInfo.FieldName;
                (**(code **)(*plVar1 + 0x38))(plVar1,&local_748);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_7a8.SharedReferenceCount.ReferenceController);
            }
            local_780 = &this->EntryBindingEventField_ContentsStatus;
            FDS_EntryBindingEventField::Reset(local_780);
            local_7d8 = (this_01->ID_StatusInfo).ArrayNum;
            uVar20 = (ulonglong)(int)local_7d8;
            pFVar22 = (this_01->ID_StatusInfo).AllocatorInstance.Data;
            local_778 = pFVar22 + uVar20 * 4;
            while( true ) {
              pFVar23 = local_778;
              local_7b8 = pFVar22;
              if ((this_01->ID_StatusInfo).ArrayNum != (int)uVar20) {
                local_7f8 = 0;
                `TCheckedPointerIterator<enum_EDS_StatusContentsInfo_const_,int,0>::operator!='::
                __l2::<lambda_1>::operator()(&local_7f8);
              }
              if (pFVar22 == pFVar23) break;
              EVar3 = *(EDS_StatusContentsInfo *)pFVar22;
              this_02 = FDS_StatusInfoTableRow::GetRef((longlong)(int)EVar3,true);
              bVar9 = FDS_StatusInfoTableRow::IsValid(this_02);
              if (bVar9) {
                if (this_02->IsViewContents != false) {
                  this_00 = &pFVar15->ContentsStatusMap;
                  iVar10 = 0;
                  if (*(int *)&(pFVar15->ContentsStatusMap).field_0x8 !=
                      *(int *)&(pFVar15->ContentsStatusMap).field_0x34) {
                    puVar5 = *(undefined1 **)&(pFVar15->ContentsStatusMap).field_0x40;
                    puVar21 = &(pFVar15->ContentsStatusMap).field_0x38;
                    if (puVar5 != (undefined1 *)0x0) {
                      puVar21 = puVar5;
                    }
                    iVar11 = *(int *)(puVar21 +
                                     (ulonglong)
                                     (*(int *)&(pFVar15->ContentsStatusMap).field_0x48 + ~None &
                                     EVar3) * 4);
                    iVar10 = 0;
                    if (iVar11 != -1) {
                      do {
                        if (*(EDS_StatusContentsInfo *)
                             (*(longlong *)this_00 + (longlong)iVar11 * 0x10) == EVar3) {
                          piVar17 = TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
                                    ::FindChecked(this_00,EVar3);
                          iVar10 = *piVar17;
                          break;
                        }
                        iVar11 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar11 * 0x10);
                      } while (iVar11 != -1);
                    }
                  }
                  pFVar7 = local_7c8;
                  iVar11 = (this_02->ID_AddStatusContents).ArrayNum;
                  if (0 < iVar11) {
                    pFVar23 = (this_02->ID_AddStatusContents).AllocatorInstance.Data;
                    pFVar22 = pFVar23 + (longlong)iVar11 * 4;
                    while( true ) {
                      if ((this_02->ID_AddStatusContents).ArrayNum != iVar11) {
                        local_7f7[0] = 0;
                        `TCheckedPointerIterator<enum_EDS_StatusContentsInfo_const_,int,0>::
                        operator!='::__l2::<lambda_1>::operator()(local_7f7);
                      }
                      this_01 = local_7c0;
                      if (pFVar23 == pFVar22) break;
                      EVar3 = *(EDS_StatusContentsInfo *)pFVar23;
                      if (*(int *)&(pFVar7->ContentsStatusMap).field_0x8 ==
                          *(int *)&(pFVar15->ContentsStatusMap).field_0x34) {
LAB_14bddaa48:
                        pFVar23 = pFVar23 + 4;
                      }
                      else {
                        puVar5 = *(undefined1 **)&(pFVar15->ContentsStatusMap).field_0x40;
                        puVar21 = &(pFVar15->ContentsStatusMap).field_0x38;
                        if (puVar5 != (undefined1 *)0x0) {
                          puVar21 = puVar5;
                        }
                        iVar12 = *(int *)(puVar21 +
                                         (ulonglong)
                                         (*(int *)&(pFVar15->ContentsStatusMap).field_0x48 + ~None &
                                         EVar3) * 4);
                        if (iVar12 == -1) goto LAB_14bddaa48;
                        do {
                          if (*(EDS_StatusContentsInfo *)
                               (*(longlong *)this_00 + (longlong)iVar12 * 0x10) == EVar3) {
                            piVar17 = TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
                                      ::FindChecked(this_00,EVar3);
                            iVar10 = iVar10 + *piVar17;
                            goto LAB_14bddaa48;
                          }
                          iVar12 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar12 * 0x10);
                        } while (iVar12 != -1);
                        pFVar23 = pFVar23 + 4;
                      }
                    }
                  }
                  pUVar18 = GetTransientPackageAsObject();
                  pUVar19 = NewObject<UDS_UserObjectListItem>(pUVar18);
                  if (UE::GC::GIsIncrementalReachabilityPending == false) {
                    if (pUVar19 == (UDS_UserObjectListItem *)0x0) goto LAB_14bddabeb;
                  }
                  else {
                    if (pUVar19 == (UDS_UserObjectListItem *)0x0) goto LAB_14bddabeb;
                    UE::GC::MarkAsReachable((UObject *)pUVar19);
                  }
                  MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_798);
                  pFVar8 = local_798.Object;
                  FVar24.ReferenceController = local_798.SharedReferenceCount.ReferenceController;
                  if (local_798.Object != (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
                    if ((local_798.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    FVar24.ReferenceController = local_798.SharedReferenceCount.ReferenceController;
                    *(undefined4 *)&pFVar8->_padding_ = 0x1b9;
                    pFVar8->StatusIconID = 0;
                    pFVar8->StatusNameID = (this_02->ID_Name).ID;
                    pFVar8->IsUpagade = false;
                    pFVar8->IsPlus = false;
                    pFVar8->BeforeStatusValue = 0;
                    pFVar8->AfterStatusValue = iVar10;
                    pFVar8->PlusStatusValue = 0;
                    pFVar8->FormatType = this_01->InfoViewValueFormat;
                    if (local_798.SharedReferenceCount.ReferenceController ==
                        (TReferenceControllerBase<1> *)0x0) {
                      paVar25 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar25 = &(local_798.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount;
                      LOCK();
                      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
                      UNLOCK();
                    }
                    iVar10 = (pUVar19->ViewModelContextArray).ArrayNum;
                    piVar17 = &(pUVar19->ViewModelContextArray).ArrayMax;
                    if (iVar10 == *piVar17) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&(pUVar19->ViewModelContextArray).AllocatorInstance,
                                          piVar17);
                    }
                    (pUVar19->ViewModelContextArray).ArrayNum = iVar10 + 1;
                    pFVar22 = (pUVar19->ViewModelContextArray).AllocatorInstance.Data;
                    *(FDS_ViewModelContext_StatusUpgradeInfo **)(pFVar22 + (longlong)iVar10 * 0x10)
                         = pFVar8;
                    *(TReferenceControllerBase<1> **)(pFVar22 + (longlong)iVar10 * 0x10 + 8) =
                         FVar24.ReferenceController;
                    if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar24.ReferenceController);
                    local_788 = pUVar19;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)pUVar19);
                    }
                    FDS_EntryBindingEventField::Add
                              (local_780,(TObjectPtr<UDS_UserObjectListItem>)&local_788);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar24.ReferenceController);
                  pFVar15 = local_7c8;
                  this_01 = local_7c0;
                }
LAB_14bddabb2:
                uVar20 = (ulonglong)local_7d8;
                pFVar22 = local_7b8 + 4;
              }
              else {
                pUVar13 = UDS_LogManager::GetInst();
                if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bddabb2;
                pUVar13 = UDS_LogManager::GetInst();
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
                UDS_LogManager::PrintLog
                          (pUVar13,1,Warning,local_168.Ptr,0x5d,
                           L"statusInfoTableRow is Invalid. statusContentsInfo ID : %lld");
                if ((void *)local_168._padding_ == (void *)0x0) goto LAB_14bddabb2;
                FMemory::Free((void *)local_168._padding_);
                uVar20 = (ulonglong)local_7d8;
                pFVar22 = local_7b8 + 4;
              }
            }
            local_730 = FFieldNotificationClassDescriptor::EntryBindingEventField_ContentsStatus.
                        BitNumber;
            local_738 = FFieldNotificationClassDescriptor::EntryBindingEventField_ContentsStatus.
                        FieldName;
            (**(code **)(*local_770 + 0x38))(local_770,&local_738);
LAB_14bddabeb:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_7e8.SharedReferenceCount.ReferenceController);
          }
        }
      }
    }
    else {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 != (UDS_LogManager *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        local_5e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5e8,"UDS_VM_ContentsStatus::OnSetViewModel",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar13,1,Warning,local_5e8.Ptr,0x22,
                   L"statusTableRow is Invalid. StatusType : %d");
        if ((void *)local_5e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_5e8._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7e8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_768->SharedReferenceCount).ReferenceController);
  return;
}

