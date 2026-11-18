// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 54

// SetListSwitcher_WrapperImpl @ 14b71abf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_RingCmd_Setting::SetListSwitcher_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  FName FStack_18;
  int iStack_10;
  
  FVar1 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0x138) != *(int *)param_2) {
    iStack_10 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
    *(int *)((longlong)param_1 + 0x138) = *(int *)param_2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  ResetEditData(param_1,true);
  return;
}

// SetCurrentRingCmdIndex_WrapperImpl @ 14b71ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetCurrentRingCmdIndex_WrapperImpl(void *param_1,void *param_2)

{
  FDelegateAllocation *pFVar1;
  UDS_ViewModelBase *pUVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_RingCmd *pFVar5;
  FDS_ViewModelContext_Dropdown *pFVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UObject *pUVar10;
  char *pcVar11;
  UObject *this;
  UFunction *pUVar12;
  UDS_LogManager *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FScriptContainerElement *pFVar16;
  char *pcVar17;
  undefined1 auStackY_3f8 [32];
  <lambda_1> a<Stack_3c8 [16];
  code *pcStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_3a8;
  FWeakObjectPtr FStack_3a0;
  FName FStack_398;
  FWeakObjectPtr FStack_390;
  FDS_Text FStack_388;
  FDS_Text FStack_338;
  FName aFStack_2e8 [2];
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> TStack_2d8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> TStack_2c8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_2b8;
  FName FStack_2a8;
  UObject *pUStack_2a0;
  FName *pFStack_298;
  void *pvStack_290;
  void *pvStack_288;
  void *pvStack_280;
  FName FStack_278;
  int iStack_270;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> TStack_268;
  FDestructionSentinel FStack_258;
  FDestructionSentinel FStack_240;
  FDelegateAllocation *pFStack_228;
  FDestructionSentinel FStack_220;
  FDelegateAllocation *pFStack_208;
  FDestructionSentinel FStack_200;
  undefined1 *puStack_1e8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_1d8;
  FReadAccessScope FStack_1c8;
  FReadAccessScope FStack_1b0;
  FReadAccessScope FStack_198;
  FReadAccessScope FStack_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  bVar7 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)
                     ((longlong)param_1 + 800),(void *)0x0);
  if (!bVar7) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 800));
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),param_1);
  }
  UDS_RingCommandDeckData::GetData
            ((ulong64)&FStack_390,UDS_PlayerData::MainPlayerEntityID,SUB41(*(undefined4 *)param_2,0)
            );
  bVar7 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&FStack_390,
                     (void *)0x0);
  if (bVar7) {
    return;
  }
  pUVar10 = FWeakObjectPtr::Get(&FStack_390);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),param_1);
  pUVar10 = FWeakObjectPtr::Get(&FStack_390);
  pcVar11 = strstr("&UDS_VM_W_B_RingCmd_Setting::OnChangedRingCmdDeck","::");
  if (pcVar11 == (char *)0x0) {
LAB_14bfd8bac:
    pcVar17 = &DAT_00000002;
LAB_14bfd8bb1:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar17 = pcVar11;
      pcVar11 = strstr(pcVar17 + 1,"::");
    } while (pcVar11 != (char *)0x0);
    if (pcVar17 == (char *)0x0) goto LAB_14bfd8bac;
    pcVar17 = pcVar17 + 2;
    if (*pcVar17 == '0') goto LAB_14bfd8bb1;
  }
  ::FName::FName(&FStack_2a8,pcVar17);
  if ((param_1 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  aFStack_2e8[0] = FStack_2a8;
  TStack_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a0.ObjectIndex = 0;
  FStack_3a0.ObjectSerialNumber = 0;
  FStack_398.ComparisonIndex.Value = 0;
  FStack_398.Number = 0;
  if ((param_1 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUStack_2a0 = param_1;
  if (param_1 == (void *)0x0) {
    pUStack_2a0 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_2a0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_2a0);
  }
  FWeakObjectPtr::operator=(&FStack_3a0,(FObjectPtr)&pUStack_2a0);
  FStack_398 = aFStack_2e8[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_3a8,&FStack_1c8);
  if ((FStack_398 == (FName)0x0) ||
     (this = FWeakObjectPtr::Get(&FStack_3a0), this == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_1c8);
  }
  else {
    pUVar12 = UObject::FindFunction(this,FStack_398);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_1c8);
    if (pUVar12 != (UFunction *)0x0) goto LAB_14bfd8cfa;
  }
  pFStack_298 = aFStack_2e8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_W_B_RingCmd_Setting>'::__l2::<lambda_1>::operator()(&pFStack_298);
LAB_14bfd8cfa:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_3a8,&FStack_180);
  TStack_268.Object = FStack_3a0;
  TStack_268.FunctionName = FStack_398;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_180);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),
             (FWriteAccessScope *)&FStack_258);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar10[1].field_0x8,a<Stack_3c8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar10 + 1),&TStack_268);
  if (FStack_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_258.Accessor,&FStack_258);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_3a8.AccessDetector);
  *(FWeakObjectPtr *)((longlong)param_1 + 800) = FStack_390;
  FVar4 = FFieldNotificationClassDescriptor::CurrentRingCmdIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0x170) != *(int *)param_2) {
    iStack_270 = FFieldNotificationClassDescriptor::CurrentRingCmdIndex.BitNumber;
    *(int *)((longlong)param_1 + 0x170) = *(int *)param_2;
    FStack_278 = FVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_278);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xd0),
             &FStack_1b0);
  pFVar1 = (FDelegateAllocation *)((longlong)param_1 + 0xd8);
  if (((*(int *)((longlong)param_1 + 0xe0) == 0) ||
      (pFVar1->DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar8 = (**(code **)(*(longlong *)pFVar1->DelegateAllocator + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_1b0);
    uStack_3b0 = 0;
    pcStack_3b8 = OnClickRingMenu;
    uStack_3ac = TStack_2b8.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xd0),
               (FWriteAccessScope *)&FStack_240);
    pFStack_228 = pFVar1;
    puVar14 = UE::Core::Private::DelegateAllocate(0x30,pFVar1);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar14[3] = 0;
      pvStack_290 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&pvStack_290);
      puVar14[4] = pcStack_3b8;
      puVar14[5] = CONCAT44(uStack_3ac,uStack_3b0);
    }
    if (FStack_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_240.Accessor,&FStack_240);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_1b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xe8),
             &FStack_198);
  pFVar1 = (FDelegateAllocation *)((longlong)param_1 + 0xf0);
  if (((*(int *)((longlong)param_1 + 0xf8) == 0) ||
      (pFVar1->DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar8 = (**(code **)(*(longlong *)pFVar1->DelegateAllocator + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_198);
    uStack_3b0 = 0;
    pcStack_3b8 = OnDoubleClickRingCmdSlot;
    uStack_3ac = TStack_2b8.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xe8),
               (FWriteAccessScope *)&FStack_220);
    pFStack_208 = pFVar1;
    puVar14 = UE::Core::Private::DelegateAllocate(0x30,pFVar1);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar14[3] = 0;
      pvStack_288 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&pvStack_288);
      puVar14[4] = pcStack_3b8;
      puVar14[5] = CONCAT44(uStack_3ac,uStack_3b0);
    }
    if (FStack_220.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_220.Accessor,&FStack_220);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_198);
  }
  if (*(longlong *)((longlong)param_1 + 0x120) != 0) {
    MakeContext<FDS_ViewModelContext_RingCmd>(&TStack_2d8);
    pFVar5 = TStack_2d8.Object;
    if ((TStack_2d8.Object == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&pFVar5->OnClickRingMenuDelegate,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 0xd0)
              );
    if ((pFVar5 == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&pFVar5->OnDoubleClickRingMenuDelegate,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 0xe8)
              );
    iVar9 = *(int *)((longlong)param_1 + 0x170);
    if ((pFVar5 == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5->RingCmdDeckNum = iVar9;
    pFVar5->bIsEditMode = true;
    pUVar2 = *(UDS_ViewModelBase **)((longlong)param_1 + 0x120);
    TStack_1d8.Object = (FDS_ViewModelContext *)TStack_2d8.Object;
    TStack_1d8.SharedReferenceCount.ReferenceController =
         TStack_2d8.SharedReferenceCount.ReferenceController;
    if (TStack_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(pUVar2,&TStack_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_2d8.SharedReferenceCount.ReferenceController);
  }
  if (*(longlong *)((longlong)param_1 + 0x128) != 0) {
    MakeContext<FDS_ViewModelContext_Dropdown>(&TStack_2c8);
    pFVar6 = TStack_2c8.Object;
    if (TStack_2c8.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 != (UDS_LogManager *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        TStack_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_168,"UDS_VM_W_B_RingCmd_Setting::SetCurrentRingCmdIndex",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar13,1,Warning,TStack_168.Ptr,0xef,L"dropDownContext is nullptr");
        if ((void *)TStack_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_168._padding_);
        }
      }
    }
    else {
      if ((TStack_2c8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar6->_padding_ = 0x117;
      pFVar6->DropdownIndex = 0;
      FStack_388.StringTableType = None;
      FStack_388.StringTableID = 0;
      FStack_388.DateTime.Ticks = 0;
      FStack_388.TimeSpan.Ticks = 0;
      FStack_388.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_388.StringEnumTableNameID.Number = 0;
      FStack_388.TimeExpressionType = None;
      FStack_388.IsExpression = false;
      FStack_388.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_388.UniqueString.Data.ArrayNum = 0;
      FStack_388.UniqueString.Data.ArrayMax = 0;
      FStack_388.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_388.FormatArgs.ArrayNum = 0;
      FStack_388.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_388,StringUi,0xbb9);
      iVar9 = (pFVar6->DropdownList).ArrayNum;
      if (iVar9 == (pFVar6->DropdownList).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(pFVar6->DropdownList).AllocatorInstance,
                           &(pFVar6->DropdownList).ArrayMax);
      }
      (pFVar6->DropdownList).ArrayNum = iVar9 + 1;
      pFVar16 = (pFVar6->DropdownList).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
      *pFVar16 = (FScriptContainerElement)FStack_388.StringTableType;
      *(long64 *)(pFVar16 + 8) = FStack_388.StringTableID;
      *(FName *)(pFVar16 + 0x10) = FStack_388.StringEnumTableNameID;
      *(long64 *)(pFVar16 + 0x18) = FStack_388.DateTime.Ticks;
      *(long64 *)(pFVar16 + 0x20) = FStack_388.TimeSpan.Ticks;
      *(EDS_TimeExpression *)(pFVar16 + 0x28) = FStack_388.TimeExpressionType;
      *(undefined8 *)(pFVar16 + 0x30) = 0;
      pFVar16[0x2c] = (FScriptContainerElement)FStack_388.IsExpression;
      *(FScriptContainerElement **)(pFVar16 + 0x30) =
           FStack_388.UniqueString.Data.AllocatorInstance.Data;
      FStack_388.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 0x38) = FStack_388.UniqueString.Data.ArrayNum;
      *(int *)(pFVar16 + 0x3c) = FStack_388.UniqueString.Data.ArrayMax;
      FStack_388.UniqueString.Data.ArrayNum = 0;
      FStack_388.UniqueString.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar16 + 0x40) = 0;
      *(FScriptContainerElement **)(pFVar16 + 0x40) = FStack_388.FormatArgs.AllocatorInstance.Data;
      FStack_388.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 0x48) = FStack_388.FormatArgs.ArrayNum;
      *(int *)(pFVar16 + 0x4c) = FStack_388.FormatArgs.ArrayMax;
      FStack_388.FormatArgs.ArrayNum = 0;
      FStack_388.FormatArgs.ArrayMax = 0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (FStack_388.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_388.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_388.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_388.UniqueString.Data.AllocatorInstance.Data);
      }
      FStack_338.StringTableType = None;
      FStack_338.StringTableID = 0;
      FStack_338.StringEnumTableNameID.ComparisonIndex.Value = 0;
      FStack_338.StringEnumTableNameID.Number = 0;
      FStack_338.TimeExpressionType = None;
      FStack_338.DateTime.Ticks = 0;
      FStack_338.TimeSpan.Ticks = 0;
      FStack_338.IsExpression = false;
      FStack_338.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_338.UniqueString.Data.ArrayNum = 0;
      FStack_338.UniqueString.Data.ArrayMax = 0;
      FStack_338.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_338.FormatArgs.ArrayNum = 0;
      FStack_338.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&FStack_338,StringUi,0xbbb);
      iVar9 = (pFVar6->DropdownList).ArrayNum;
      if (iVar9 == (pFVar6->DropdownList).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(pFVar6->DropdownList).AllocatorInstance,
                           &(pFVar6->DropdownList).ArrayMax);
      }
      (pFVar6->DropdownList).ArrayNum = iVar9 + 1;
      pFVar16 = (pFVar6->DropdownList).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
      *pFVar16 = (FScriptContainerElement)FStack_338.StringTableType;
      *(long64 *)(pFVar16 + 8) = FStack_338.StringTableID;
      *(FName *)(pFVar16 + 0x10) = FStack_338.StringEnumTableNameID;
      *(long64 *)(pFVar16 + 0x18) = FStack_338.DateTime.Ticks;
      *(long64 *)(pFVar16 + 0x20) = FStack_338.TimeSpan.Ticks;
      *(EDS_TimeExpression *)(pFVar16 + 0x28) = FStack_338.TimeExpressionType;
      *(undefined8 *)(pFVar16 + 0x30) = 0;
      pFVar16[0x2c] = (FScriptContainerElement)FStack_338.IsExpression;
      *(FScriptContainerElement **)(pFVar16 + 0x30) =
           FStack_338.UniqueString.Data.AllocatorInstance.Data;
      FStack_338.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 0x38) = FStack_338.UniqueString.Data.ArrayNum;
      *(int *)(pFVar16 + 0x3c) = FStack_338.UniqueString.Data.ArrayMax;
      FStack_338.UniqueString.Data.ArrayNum = 0;
      FStack_338.UniqueString.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar16 + 0x40) = 0;
      *(FScriptContainerElement **)(pFVar16 + 0x40) = FStack_338.FormatArgs.AllocatorInstance.Data;
      FStack_338.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 0x48) = FStack_338.FormatArgs.ArrayNum;
      *(int *)(pFVar16 + 0x4c) = FStack_338.FormatArgs.ArrayMax;
      FStack_338.FormatArgs.ArrayNum = 0;
      FStack_338.FormatArgs.ArrayMax = 0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (FStack_338.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_338.FormatArgs.AllocatorInstance.Data);
      }
      if (FStack_338.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_338.UniqueString.Data.AllocatorInstance.Data);
      }
      uStack_3b0 = 0;
      pcStack_3b8 = OnSortDropDownChanged;
      uStack_3ac = TStack_2b8.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickList,
                 (FWriteAccessScope *)&FStack_200);
      puStack_1e8 = &(pFVar6->OnClickList).field_0x8;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_1e8);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar14[3] = 0;
        pvStack_280 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&pvStack_280);
        puVar14[4] = pcStack_3b8;
        puVar14[5] = CONCAT44(uStack_3ac,uStack_3b0);
      }
      if (FStack_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_200.Accessor,&FStack_200);
      }
      pUVar2 = *(UDS_ViewModelBase **)((longlong)param_1 + 0x128);
      TStack_2b8.Object = (FDS_ViewModelContext *)TStack_2c8.Object;
      TStack_2b8.SharedReferenceCount.ReferenceController =
           TStack_2c8.SharedReferenceCount.ReferenceController;
      if (TStack_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext(pUVar2,&TStack_2b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_2c8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetClickNextRingCmdButton_WrapperImpl @ 14b71ac10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClickNextRingCmdButton_WrapperImpl(void *param_1,void *param_2)

{
  int aiStackX_8 [8];
  
  aiStackX_8[0] = *(int *)((longlong)param_1 + 0x170) + 1;
  aiStackX_8[0] =
       aiStackX_8[0] +
       (aiStackX_8[0] / 3 + (aiStackX_8[0] >> 0x1f) +
       (int)(((longlong)aiStackX_8[0] / 3 + ((longlong)aiStackX_8[0] >> 0x3f) & 0xffffffffU) >> 0x1f
            )) * -3;
  SetCurrentRingCmdIndex(param_1,aiStackX_8);
  UpdateData(param_1,false);
  return;
}

// SetClickPreRingCmdButton_WrapperImpl @ 14b71ac20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClickPreRingCmdButton_WrapperImpl(void *param_1,void *param_2)

{
  int aiStackX_8 [8];
  
  aiStackX_8[0] = *(int *)((longlong)param_1 + 0x170) + 2;
  aiStackX_8[0] =
       aiStackX_8[0] +
       (aiStackX_8[0] / 3 + (aiStackX_8[0] >> 0x1f) +
       (int)(((longlong)aiStackX_8[0] / 3 + ((longlong)aiStackX_8[0] >> 0x3f) & 0xffffffffU) >> 0x1f
            )) * -3;
  SetCurrentRingCmdIndex(param_1,aiStackX_8);
  UpdateData(param_1,false);
  return;
}

// SetClickItemListButton_WrapperImpl @ 14b71ac30

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClickItemListButton_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClicMenuInfoListButton_WrapperImpl @ 14b71ac40

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClicMenuInfoListButton_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClickSortOrderToAscend_WrapperImpl @ 14b71ac50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClickSortOrderToAscend_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0xffffffff;
  UpdateData(param_1,true);
  return;
}

// SetClickSortOrderToDescend_WrapperImpl @ 14b71aca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetClickSortOrderToDescend_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 1;
  UpdateData(param_1,true);
  return;
}

// SetEditModeVisibility_WrapperImpl @ 14b71acb0

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetEditModeVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  if ((*(char *)((longlong)param_1 + 0x238) != *(char *)param_2) && (*(char *)param_2 == '\x04')) {
    pFVar1 = ::FName::FName(&FStackX_8,"Ani_OpenChange");
    *(FName *)((longlong)param_1 + 0x240) = *pFVar1;
    *(undefined1 *)((longlong)param_1 + 0x24c) = 2;
    iStack_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  FStack_18 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x238) != *(char *)param_2) {
    iStack_10 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    *(char *)((longlong)param_1 + 0x238) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEndChangeAniEvent_WrapperImpl @ 14b71acc0

void __cdecl
UDS_VM_W_B_RingCmd_Setting::SetEndChangeAniEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b71acd0

UClass * __cdecl UDS_VM_W_B_RingCmd_Setting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_RingCmd_Setting",
               &Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_RingCmd_Setting,0x3c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_B_RingCmd_Setting>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_RingCmd_Setting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton;
}

// UDS_VM_W_B_RingCmd_Setting @ 14b71e320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_RingCmd_Setting * __thiscall
UDS_VM_W_B_RingCmd_Setting::UDS_VM_W_B_RingCmd_Setting
          (UDS_VM_W_B_RingCmd_Setting *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_RingCmd_Setting__6B_;
  *(undefined8 *)&this->ItemSlotMouseButtonDownDelegate = 0;
  *(undefined8 *)&(this->ItemSlotMouseButtonDownDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ItemSlotMouseButtonDownDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ItemSlotMouseButtonUpDelegate = 0;
  *(undefined8 *)&(this->ItemSlotMouseButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ItemSlotMouseButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RingCmdSlotSelectEvent = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x8 = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x10 = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x18 = 2;
  (this->RingCmdViewModel).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd *)0x0;
  (this->SortDropDownViewModel).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->ItemListViewModel).field0_0x0.DebugPtr = (UDS_VM_ItemList *)0x0;
  (this->ItemListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemListEnty).UserObjectList.ArrayNum = 0;
  (this->ItemListEnty).UserObjectList.ArrayMax = 0;
  (this->MenuListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuListEnty).UserObjectList.ArrayNum = 0;
  (this->MenuListEnty).UserObjectList.ArrayMax = 0;
  (this->ActionListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionListEnty).UserObjectList.ArrayNum = 0;
  (this->ActionListEnty).UserObjectList.ArrayMax = 0;
  this->CurrentRingCmdIndex = 0;
  (this->ClickNextRingCmdButton)._padding_ = '\0';
  (this->ClickNextRingCmdButton).bIsCustomSelected = false;
  (this->ClickNextRingCmdButton).bIsLacked = false;
  (this->ClickNextRingCmdButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNextRingCmdButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextRingCmdButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextRingCmdButton).Delegate.field_0x10 = 0;
  (this->ClickPreRingCmdButton)._padding_ = '\0';
  (this->ClickPreRingCmdButton).bIsCustomSelected = false;
  (this->ClickPreRingCmdButton).bIsLacked = false;
  (this->ClickPreRingCmdButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPreRingCmdButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPreRingCmdButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPreRingCmdButton).Delegate.field_0x10 = 0;
  (this->ClickItemListButton)._padding_ = '\0';
  (this->ClickItemListButton).bIsCustomSelected = false;
  (this->ClickItemListButton).bIsLacked = false;
  (this->ClickItemListButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItemListButton).Delegate = 0;
  *(undefined8 *)&(this->ClickItemListButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItemListButton).Delegate.field_0x10 = 0;
  (this->ClicMenuInfoListButton)._padding_ = '\0';
  (this->ClicMenuInfoListButton).bIsCustomSelected = false;
  (this->ClicMenuInfoListButton).bIsLacked = false;
  (this->ClicMenuInfoListButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClicMenuInfoListButton).Delegate = 0;
  *(undefined8 *)&(this->ClicMenuInfoListButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClicMenuInfoListButton).Delegate.field_0x10 = 0;
  (this->ClickSortOrderToAscend)._padding_ = '\0';
  (this->ClickSortOrderToAscend).bIsCustomSelected = false;
  (this->ClickSortOrderToAscend).bIsLacked = false;
  (this->ClickSortOrderToAscend).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSortOrderToAscend).Delegate = 0;
  *(undefined8 *)&(this->ClickSortOrderToAscend).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSortOrderToAscend).Delegate.field_0x10 = 0;
  (this->ClickSortOrderToDescend)._padding_ = '\0';
  (this->ClickSortOrderToDescend).bIsCustomSelected = false;
  (this->ClickSortOrderToDescend).bIsLacked = false;
  (this->ClickSortOrderToDescend).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSortOrderToDescend).Delegate = 0;
  *(undefined8 *)&(this->ClickSortOrderToDescend).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSortOrderToDescend).Delegate.field_0x10 = 0;
  this->SortOrderSwitcher = 0;
  (this->OpenChangeAniEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).AnimationName.Number = 0;
  (this->OpenChangeAniEvent).AnimationEventType = None;
  (this->OpenChangeAniEvent).AnimationStateType = None;
  (this->OpenChangeAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndChangeAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndChangeAniEvent).AnimationName.Number = 0;
  (this->EndChangeAniEvent).AnimationPlayTime = 0.0;
  (this->EndChangeAniEvent).AnimationEventType = None;
  (this->EndChangeAniEvent).AnimationStateType = None;
  (this->EndChangeAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->CurrentRingCmdDeckData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RingCmdDeckDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements = 0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements.field_0x20 = 0;
  this->EditType = None;
  this->SortType = None;
  this->TempRingCommandSlotType = 0;
  this->TempSlotData = 0;
  this->TempSlotDataUID = 0;
  this->TempInfoID = 0;
  this->TempSlotIndex = 0;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x34 = 0;
  (this->ResigtedSlotData).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ResigtedSlotData).HashSize = 0;
  this->ItemDoubleClickFlag = false;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  this->SortOrder = Ascend;
  *(undefined8 *)&this->OnEventRingCmdItemSlotDelegate = 0;
  *(undefined8 *)&(this->OnEventRingCmdItemSlotDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventRingCmdItemSlotDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_W_B_RingCmd_Setting @ 14b71e650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_RingCmd_Setting * __thiscall
UDS_VM_W_B_RingCmd_Setting::UDS_VM_W_B_RingCmd_Setting
          (UDS_VM_W_B_RingCmd_Setting *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_RingCmd_Setting__6B_;
  *(undefined8 *)&this->ItemSlotMouseButtonDownDelegate = 0;
  *(undefined8 *)&(this->ItemSlotMouseButtonDownDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ItemSlotMouseButtonDownDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ItemSlotMouseButtonUpDelegate = 0;
  *(undefined8 *)&(this->ItemSlotMouseButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ItemSlotMouseButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RingCmdSlotSelectEvent = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x8 = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x10 = 0;
  *(undefined8 *)&(this->RingCmdSlotSelectEvent).field_0x18 = 2;
  (this->RingCmdViewModel).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd *)0x0;
  (this->SortDropDownViewModel).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->ItemListViewModel).field0_0x0.DebugPtr = (UDS_VM_ItemList *)0x0;
  (this->ItemListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemListEnty).UserObjectList.ArrayNum = 0;
  (this->ItemListEnty).UserObjectList.ArrayMax = 0;
  (this->MenuListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuListEnty).UserObjectList.ArrayNum = 0;
  (this->MenuListEnty).UserObjectList.ArrayMax = 0;
  (this->ActionListEnty).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionListEnty).UserObjectList.ArrayNum = 0;
  (this->ActionListEnty).UserObjectList.ArrayMax = 0;
  this->CurrentRingCmdIndex = 0;
  (this->ClickNextRingCmdButton)._padding_ = '\0';
  (this->ClickNextRingCmdButton).bIsCustomSelected = false;
  (this->ClickNextRingCmdButton).bIsLacked = false;
  (this->ClickNextRingCmdButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNextRingCmdButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextRingCmdButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextRingCmdButton).Delegate.field_0x10 = 0;
  (this->ClickPreRingCmdButton)._padding_ = '\0';
  (this->ClickPreRingCmdButton).bIsCustomSelected = false;
  (this->ClickPreRingCmdButton).bIsLacked = false;
  (this->ClickPreRingCmdButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPreRingCmdButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPreRingCmdButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPreRingCmdButton).Delegate.field_0x10 = 0;
  (this->ClickItemListButton)._padding_ = '\0';
  (this->ClickItemListButton).bIsCustomSelected = false;
  (this->ClickItemListButton).bIsLacked = false;
  (this->ClickItemListButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItemListButton).Delegate = 0;
  *(undefined8 *)&(this->ClickItemListButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItemListButton).Delegate.field_0x10 = 0;
  (this->ClicMenuInfoListButton)._padding_ = '\0';
  (this->ClicMenuInfoListButton).bIsCustomSelected = false;
  (this->ClicMenuInfoListButton).bIsLacked = false;
  (this->ClicMenuInfoListButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClicMenuInfoListButton).Delegate = 0;
  *(undefined8 *)&(this->ClicMenuInfoListButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClicMenuInfoListButton).Delegate.field_0x10 = 0;
  (this->ClickSortOrderToAscend)._padding_ = '\0';
  (this->ClickSortOrderToAscend).bIsCustomSelected = false;
  (this->ClickSortOrderToAscend).bIsLacked = false;
  (this->ClickSortOrderToAscend).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSortOrderToAscend).Delegate = 0;
  *(undefined8 *)&(this->ClickSortOrderToAscend).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSortOrderToAscend).Delegate.field_0x10 = 0;
  (this->ClickSortOrderToDescend)._padding_ = '\0';
  (this->ClickSortOrderToDescend).bIsCustomSelected = false;
  (this->ClickSortOrderToDescend).bIsLacked = false;
  (this->ClickSortOrderToDescend).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSortOrderToDescend).Delegate = 0;
  *(undefined8 *)&(this->ClickSortOrderToDescend).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSortOrderToDescend).Delegate.field_0x10 = 0;
  this->SortOrderSwitcher = 0;
  (this->OpenChangeAniEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).AnimationName.Number = 0;
  (this->OpenChangeAniEvent).AnimationEventType = None;
  (this->OpenChangeAniEvent).AnimationStateType = None;
  (this->OpenChangeAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndChangeAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndChangeAniEvent).AnimationName.Number = 0;
  (this->EndChangeAniEvent).AnimationPlayTime = 0.0;
  (this->EndChangeAniEvent).AnimationEventType = None;
  (this->EndChangeAniEvent).AnimationStateType = None;
  (this->EndChangeAniEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndChangeAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndChangeAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->CurrentRingCmdDeckData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RingCmdDeckDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements = 0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ResigtedSlotData).Elements.field_0x20 = 0;
  this->EditType = None;
  this->SortType = None;
  this->TempRingCommandSlotType = 0;
  this->TempSlotData = 0;
  this->TempSlotDataUID = 0;
  this->TempInfoID = 0;
  this->TempSlotIndex = 0;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x34 = 0;
  (this->ResigtedSlotData).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ResigtedSlotData).HashSize = 0;
  this->ItemDoubleClickFlag = false;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  this->SortOrder = Ascend;
  *(undefined8 *)&this->OnEventRingCmdItemSlotDelegate = 0;
  *(undefined8 *)&(this->OnEventRingCmdItemSlotDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventRingCmdItemSlotDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_B_RingCmd_Setting @ 14b71f980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::~UDS_VM_W_B_RingCmd_Setting(UDS_VM_W_B_RingCmd_Setting *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_RingCmd_Setting__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventRingCmdItemSlotDelegate);
  pvVar1 = *(void **)&(this->OnEventRingCmdItemSlotDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEventRingCmdItemSlotDelegate);
  (this->ResigtedSlotData).HashSize = 0;
  FVar2 = (this->ResigtedSlotData).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ResigtedSlotData).Elements);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Empty).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndChangeAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->EndChangeAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndChangeAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndChangeAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->EndChangeAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndChangeAniEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenChangeAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->OpenChangeAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenChangeAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenChangeAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->OpenChangeAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenChangeAniEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSortOrderToDescend).Delegate)
  ;
  pvVar1 = *(void **)&(this->ClickSortOrderToDescend).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSortOrderToDescend).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSortOrderToAscend).Delegate);
  pvVar1 = *(void **)&(this->ClickSortOrderToAscend).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSortOrderToAscend).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClicMenuInfoListButton).Delegate);
  pvVar1 = *(void **)&(this->ClicMenuInfoListButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClicMenuInfoListButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickItemListButton).Delegate);
  pvVar1 = *(void **)&(this->ClickItemListButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickItemListButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPreRingCmdButton).Delegate);
  pvVar1 = *(void **)&(this->ClickPreRingCmdButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPreRingCmdButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickNextRingCmdButton).Delegate);
  pvVar1 = *(void **)&(this->ClickNextRingCmdButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickNextRingCmdButton).Delegate);
  pFVar3 = (this->ActionListEnty).UserObjectList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MenuListEnty).UserObjectList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ItemListEnty).UserObjectList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RingCmdSlotSelectEvent).field_0x8,
             *(int *)&(this->RingCmdSlotSelectEvent).field_0x10);
  pvVar1 = *(void **)&(this->RingCmdSlotSelectEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RingCmdSlotSelectEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ItemSlotMouseButtonUpDelegate);
  pvVar1 = *(void **)&(this->ItemSlotMouseButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ItemSlotMouseButtonUpDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ItemSlotMouseButtonDownDelegate);
  pvVar1 = *(void **)&(this->ItemSlotMouseButtonDownDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ItemSlotMouseButtonDownDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7211e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_B_RingCmd_Setting::GetFieldNotificationDescriptor(UDS_VM_W_B_RingCmd_Setting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_RingCmd_Setting::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b721820

UClass * __cdecl UDS_VM_W_B_RingCmd_Setting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_RingCmd_Setting",
               &Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_RingCmd_Setting,0x3c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_B_RingCmd_Setting>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_RingCmd_Setting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_RingCmd_Setting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_RingCmd_Setting @ 14b721be0

void __cdecl UDS_VM_W_B_RingCmd_Setting::StaticRegisterNativesUDS_VM_W_B_RingCmd_Setting(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_B_RingCmd_Setting_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsDropDownVis @ 14b722b80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::execIsDropDownVis(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDropDownVis((UDS_VM_W_B_RingCmd_Setting *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChangedRingCmdDeck @ 14b723050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::execOnChangedRingCmdDeck(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedRingCmdDeck((UDS_VM_W_B_RingCmd_Setting *)param_1,local_res10);
  return;
}

// execOnDragStateChanged @ 14b7230e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_B_RingCmd_Setting::execOnDragStateChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnDragStateChanged((UDS_VM_W_B_RingCmd_Setting *)param_1,local_res10[0] != 0);
  return;
}

// BindModel @ 14bf9c860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::BindModel(UDS_VM_W_B_RingCmd_Setting *this)

{
  FDS_EventDelegate<bool_const_> *this_00;
  UDS_RingCommandUIEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar1 != (UDS_RingCommandUIEvent *)0x0) {
    this_00 = &pUVar1->OnRingCmdDragStateChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_RingCmd_Setting>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_VM_W_B_RingCmd_Setting *)&stack0x00000010,(pmf_57cd67f7 *)this);
  }
  return;
}

// InitViewModel @ 14bfb03c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::InitViewModel(UDS_VM_W_B_RingCmd_Setting *this)

{
  FName FVar1;
  FName FVar2;
  UDS_VM_W_RingCmd *pUVar3;
  UDS_VM_Dropdown *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_ItemList *pUVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  FName local_a8;
  int local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->RingCmdViewModel).field0_0x0.DebugPtr == (UDS_VM_W_RingCmd *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_RingCmd>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_W_RingCmd *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RingCmdViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->SortDropDownViewModel).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SortDropDownViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->ItemListViewModel).field0_0x0.DebugPtr == (UDS_VM_ItemList *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar5 = Z_Construct_UClass_UDS_VM_ItemList_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = Z_Construct_UClass_UDS_VM_ItemList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar7 = (UDS_VM_ItemList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_ItemList *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_ItemList *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->ItemListViewModel).field0_0x0.DebugPtr = pUVar7;
  }
  local_a0 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
  if (this->EditModeVisibility != Collapsed) {
    this->EditModeVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  this->EditType = None;
  return;
}

// IsDropDownVis @ 14bfb2d70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_B_RingCmd_Setting::IsDropDownVis(UDS_VM_W_B_RingCmd_Setting *this)

{
  return this->ListSwitcher == 1;
}

// OnChangedRingCmdDeck @ 14bfb73b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnChangedRingCmdDeck
          (UDS_VM_W_B_RingCmd_Setting *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res10;
  UDS_DataBase *local_res18 [2];
  
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_RingCommandDeckData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDS_DataBase *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_res10,
                       (void *)0x0);
    if (!bVar2) {
      UpdateData(this,false);
    }
  }
  return;
}

// OnClicMenuInfoListButton @ 14bfb7d90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClicMenuInfoListButton
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickItemListButton @ 14bfba0b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickItemListButton
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickNextRingCmdButton @ 14bfba200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickNextRingCmdButton
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  int local_res8 [8];
  
  local_res8[0] = this->CurrentRingCmdIndex + 1;
  local_res8[0] =
       local_res8[0] +
       (local_res8[0] / 3 + (local_res8[0] >> 0x1f) +
       (int)(((longlong)local_res8[0] / 3 + ((longlong)local_res8[0] >> 0x3f) & 0xffffffffU) >> 0x1f
            )) * -3;
  SetCurrentRingCmdIndex(this,local_res8);
  UpdateData(this,false);
  return;
}

// OnClickPreRingCmdButton @ 14bfba250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickPreRingCmdButton
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  int local_res8 [8];
  
  local_res8[0] = this->CurrentRingCmdIndex + 2;
  local_res8[0] =
       local_res8[0] +
       (local_res8[0] / 3 + (local_res8[0] >> 0x1f) +
       (int)(((longlong)local_res8[0] / 3 + ((longlong)local_res8[0] >> 0x3f) & 0xffffffffU) >> 0x1f
            )) * -3;
  SetCurrentRingCmdIndex(this,local_res8);
  UpdateData(this,false);
  return;
}

// OnClickRingMenu @ 14bfba360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickRingMenu(UDS_VM_W_B_RingCmd_Setting *this,int param_1)

{
  TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *this_00;
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *this_01;
  EDS_RingCmdEditType EVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UDS_RingCommandDeckDataSet *pUVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  UDS_RingCommandDeckData *pUVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_638 [32];
  EDS_RingCmdEditType local_5f8 [8];
  int local_5f0 [2];
  undefined8 local_5e8;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_5d8;
  FWeakObjectPtr local_5c8;
  TSharedPtr<FDS_RingCommandSlotData,1> local_5c0;
  TSharedPtr<FDS_RingCommandSlotData,1> local_5a8;
  long64 local_598;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_590;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_580;
  undefined8 local_570;
  FScriptContainerElement *local_568;
  longlong lStack_560;
  FWeakObjectPtr local_558;
  FScriptContainerElement *local_550;
  longlong lStack_548;
  longlong local_540;
  FDS_RingCommandSlotData local_538;
  FDS_RingCommandSlotData *local_520;
  TReferenceControllerBase<1> *pTStack_518;
  longlong local_510;
  FDS_RingCommandSlotData local_4f0 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_638;
  this_00 = &this->CurrentRingCmdDeckData;
  local_5f0[0] = param_1;
  bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar4) {
    this_01 = &this->RingCmdDeckDataSet;
    bVar4 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      (this_01,(void *)0x0);
    if (!bVar4) {
      EVar1 = this->EditType;
      if (EVar1 == None) {
        ResetEditData(this,true);
        local_5f8[0] = ClickToTarget;
        SetEditType(this,local_5f8);
        this->TempSlotIndex = local_5f0[0];
        pUVar5 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        iVar3 = local_5f0[0];
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar5,*(int *)&pUVar6[2].field_0x8,iVar3);
        return;
      }
      if (EVar1 == ClickToClick) {
        FDS_RingCommandSlotData::FDS_RingCommandSlotData
                  ((FDS_RingCommandSlotData *)&local_568,this->CurrentRingCmdIndex,local_5f0[0]);
        FDS_RingCommandSlotData::SetSlotData
                  ((FDS_RingCommandSlotData *)&local_568,
                   (EDS_RingCmdType)this->TempRingCommandSlotType,&this->TempSlotData);
        local_5d8.AllocatorInstance.Data = local_568;
        local_5d8.ArrayNum = (undefined4)lStack_560;
        local_5d8.ArrayMax = lStack_560._4_4_;
        local_5c8 = local_558;
        local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_590.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,1,0,&local_590.AllocatorInstance,1,&local_590.ArrayMax);
        *(FScriptContainerElement **)local_590.AllocatorInstance.Data =
             local_5d8.AllocatorInstance.Data;
        *(undefined8 *)(local_590.AllocatorInstance.Data + 8) = local_5d8._8_8_;
        *(FWeakObjectPtr *)(local_590.AllocatorInstance.Data + 0x10) = local_5c8;
        FDS_RingCommandService::RequestRingCommandSetting(&local_590);
        FVar9.Data = local_590.AllocatorInstance.Data;
LAB_14bfba4ce:
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
      }
      else {
        if (EVar1 != ClickToTarget) {
          if (EVar1 != DoubleClick) {
            return;
          }
          FDS_RingCommandSlotData::FDS_RingCommandSlotData
                    ((FDS_RingCommandSlotData *)&local_520,this->CurrentRingCmdIndex,local_5f0[0]);
          local_5a8.Object = local_520;
          local_5a8.SharedReferenceCount.ReferenceController = pTStack_518;
          local_5e8 = local_510;
          local_5d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5d8.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,0,&local_5d8.AllocatorInstance,1,&local_5d8.ArrayMax);
          *(FDS_RingCommandSlotData **)local_5d8.AllocatorInstance.Data = local_5a8.Object;
          *(TReferenceControllerBase<1> **)(local_5d8.AllocatorInstance.Data + 8) =
               local_5a8.SharedReferenceCount.ReferenceController;
          *(long64 *)(local_5d8.AllocatorInstance.Data + 0x10) = local_5e8;
          FDS_RingCommandService::RequestRingCommandSetting(&local_5d8);
          FVar9.Data = local_5d8.AllocatorInstance.Data;
          goto LAB_14bfba4ce;
        }
        pUVar6 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        local_570 = *(longlong *)&pUVar6[4].field_0x20;
        if (local_570 < 0) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            local_4a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4a8,"UDS_VM_W_B_RingCmd_Setting::OnClickRingMenu",0x2b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar7,1,Warning,local_4a8.Ptr,0x273,
                       L"selectedDeckIndex\'s Value is less than 0.");
            FVar9.Data = (FScriptContainerElement *)local_4a8._padding_;
            goto LAB_14bfba4ce;
          }
        }
        else {
          UDS_RingCommandDeckData::GetData
                    ((ulong64)&local_5c8,UDS_PlayerData::MainPlayerEntityID,SUB81(local_570,0));
          bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_5c8,
                             (void *)0x0);
          if (bVar4) {
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 != (UDS_LogManager *)0x0) {
              pUVar7 = UDS_LogManager::GetInst();
              local_388._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_388,"UDS_VM_W_B_RingCmd_Setting::OnClickRingMenu",0x2b,Yes);
              UDS_LogManager::PrintLog
                        (pUVar7,1,Warning,local_388.Ptr,0x27a,L"selectedRingCmdDeckData is nullptr."
                        );
              FVar9.Data = (FScriptContainerElement *)local_388._padding_;
              goto LAB_14bfba4ce;
            }
          }
          else {
            pUVar8 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            UDS_RingCommandDeckData::GetRingCommandData(pUVar8,&local_5c0,local_5f0);
            pUVar8 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_5c8);
            UDS_RingCommandDeckData::GetRingCommandData
                      (pUVar8,&local_5a8,(int *)((longlong)&local_570 + 4));
            if ((local_5c0.Object == (FDS_RingCommandSlotData *)0x0) ||
               (local_5a8.Object == (FDS_RingCommandSlotData *)0x0)) {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5728349336106959491>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_RingCmd_Setting.cpp"
                                 ,0x283,"false");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 != (UDS_LogManager *)0x0) {
                pUVar7 = UDS_LogManager::GetInst();
                local_268._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_268,"UDS_VM_W_B_RingCmd_Setting::OnClickRingMenu",0x2b,Yes);
                UDS_LogManager::PrintLog
                          (pUVar7,1,Warning,local_268.Ptr,0x284,L"slotData is nullptr.");
                if ((void *)local_268._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_268._padding_);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5a8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5c0.SharedReferenceCount.ReferenceController);
            }
            else {
              FDS_RingCommandSlotData::FDS_RingCommandSlotData
                        ((FDS_RingCommandSlotData *)&local_550,(local_5a8.Object)->DeckNumber,
                         (local_5a8.Object)->SlotNumber);
              if ((local_5c0.Object == (FDS_RingCommandSlotData *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FDS_RingCommandSlotData::FDS_RingCommandSlotData
                        (&local_538,(local_5c0.Object)->DeckNumber,(local_5c0.Object)->SlotNumber);
              if ((local_5c0.Object == (FDS_RingCommandSlotData *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_598 = (local_5c0.Object)->SlotData;
              FDS_RingCommandSlotData::SetSlotData
                        ((FDS_RingCommandSlotData *)&local_550,(local_5c0.Object)->SlotType,
                         &local_598);
              if ((local_5a8.Object == (FDS_RingCommandSlotData *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_5e8 = (local_5a8.Object)->SlotData;
              FDS_RingCommandSlotData::SetSlotData
                        (&local_538,(local_5a8.Object)->SlotType,&local_5e8);
              local_580.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_5d8.AllocatorInstance.Data = local_550;
              local_5d8.ArrayNum = (undefined4)lStack_548;
              local_5d8.ArrayMax = lStack_548._4_4_;
              local_5e8 = local_540;
              local_580.ArrayNum = 2;
              local_4f0[0].SlotType = local_538.SlotType;
              local_4f0[0]._1_3_ = local_538._1_3_;
              local_4f0[0].DeckNumber = local_538.DeckNumber;
              local_4f0[0].SlotNumber = local_538.SlotNumber;
              local_4f0[0]._12_4_ = local_538._12_4_;
              local_598 = local_538.SlotData;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,2,0,&local_580.AllocatorInstance,2,&local_580.ArrayMax);
              *(FScriptContainerElement **)local_580.AllocatorInstance.Data =
                   local_5d8.AllocatorInstance.Data;
              *(undefined8 *)(local_580.AllocatorInstance.Data + 8) = local_5d8._8_8_;
              *(undefined4 *)(local_580.AllocatorInstance.Data + 0x10) = (undefined4)local_5e8;
              *(undefined4 *)(local_580.AllocatorInstance.Data + 0x14) = local_5e8._4_4_;
              *(undefined4 *)(local_580.AllocatorInstance.Data + 0x18) = local_4f0[0]._0_4_;
              *(int *)(local_580.AllocatorInstance.Data + 0x1c) = local_4f0[0].DeckNumber;
              *(int *)(local_580.AllocatorInstance.Data + 0x20) = local_4f0[0].SlotNumber;
              *(undefined4 *)(local_580.AllocatorInstance.Data + 0x24) = local_4f0[0]._12_4_;
              *(int *)(local_580.AllocatorInstance.Data + 0x28) = (int)local_598;
              *(int *)(local_580.AllocatorInstance.Data + 0x2c) =
                   (int)((ulonglong)local_598 >> 0x20);
              FDS_RingCommandService::RequestRingCommandSetting(&local_580);
              if (local_580.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_580.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5a8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5c0.SharedReferenceCount.ReferenceController);
            }
          }
        }
      }
      pUVar5 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&this_01->WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar5,*(int *)&pUVar6[2].field_0x8,-1);
      goto LAB_14bfbaa17;
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_B_RingCmd_Setting::OnClickRingMenu",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_148.Ptr,0x252,L"CurrentRingCmdDeckData is nullptr");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
LAB_14bfbaa17:
  ResetEditData(this,true);
  return;
}

// OnClickSortOrderToAscend @ 14bfbaca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickSortOrderToAscend
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  this->SortOrder = Ascend;
  UpdateData(this,true);
  return;
}

// OnClickSortOrderToDescend @ 14bfbacc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnClickSortOrderToDescend
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_ButtonEventField *param_1)

{
  this->SortOrder = Descend;
  UpdateData(this,true);
  return;
}

// OnDoubleClickRingCmdSlot @ 14bfbc340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnDoubleClickRingCmdSlot(UDS_VM_W_B_RingCmd_Setting *this,int param_1)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if (this->EditModeVisibility != SelfHitTestInvisible) {
    pFVar1 = ::FName::FName(&local_res8,"Ani_OpenChange");
    (this->OpenChangeAniEvent).AnimationName = *pFVar1;
    (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
  if (this->EditModeVisibility != SelfHitTestInvisible) {
    this->EditModeVisibility = SelfHitTestInvisible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this->EditType = DoubleClick;
  return;
}

// OnDragStateChanged @ 14bfbc3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnDragStateChanged(UDS_VM_W_B_RingCmd_Setting *this,bool param_1)

{
  FName *pFVar1;
  FName local_res18 [2];
  FName local_18;
  int local_10;
  
  if (param_1) {
    if (this->EditModeVisibility != SelfHitTestInvisible) {
      pFVar1 = ::FName::FName(local_res18,"Ani_OpenChange");
      (this->OpenChangeAniEvent).AnimationName = *pFVar1;
      (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
      local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
    if (this->EditModeVisibility != SelfHitTestInvisible) {
      this->EditModeVisibility = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this->EditType = Drag;
    return;
  }
  ResetEditData(this,true);
  return;
}

// OnEndAni @ 14bfbc520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnEndAni
          (UDS_VM_W_B_RingCmd_Setting *this,FDS_WidgetAnimationEventField *param_1)

{
  return;
}

// OnEventRingCmdItemSlot @ 14bfbcfd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnEventRingCmdItemSlot
          (UDS_VM_W_B_RingCmd_Setting *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  UClass *pUVar6;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr *pFVar7;
  UObject *pUVar8;
  long64 lVar9;
  FWeakObjectPtr FVar10;
  TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> *pTVar11;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  undefined8 local_20;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar4 + 1));
  if (!bVar3) {
    return;
  }
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  FVar10.ObjectIndex = 0;
  FVar10.ObjectSerialNumber = 0;
  if (FVar5 == (FWeakObjectPtr)0x0) {
LAB_14bfbd04c:
    FVar5 = FVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bfbd04c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res18 = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_28);
  if (!bVar3) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_28);
  FVar5 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 1));
  if (FVar5 != (FWeakObjectPtr)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bfbd0e5;
  }
  FVar5 = FVar10;
LAB_14bfbd0e5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res18 = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar3) {
    return;
  }
  this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res20);
  UDS_M_ItemImplBase::GetItemSlotType(this_00);
  pUVar4 = FWeakObjectPtr::Get(&local_28);
  iVar1 = *(int *)&pUVar4[5].field_0x8;
  if (iVar1 == 1) {
    local_res18.ObjectIndex._0_1_ = 3;
    SetEditType(this,(EDS_RingCmdEditType *)&local_res18);
    pTVar11 = &this->ItemListModel;
    bVar3 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals(pTVar11,(void *)0x0);
    if (bVar3) {
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&pTVar11->WeakPtr);
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar4[1].field_0x18,SelectedItemUID);
    pUVar8 = FWeakObjectPtr::Get(&pTVar11->WeakPtr);
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    lVar9 = (**(code **)(*(longlong *)pUVar4 + 0x388))(pUVar4);
  }
  else {
    if (iVar1 == 2) {
      ResetEditData(this,true);
      return;
    }
    if (iVar1 != 6) {
      if (iVar1 != 10) {
        return;
      }
      pUVar4 = FWeakObjectPtr::Get(&local_res20);
      pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar4 + 0x3a0))(pUVar4,&local_res18);
      OnItemListDoubleClicked(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar7);
      this->ItemDoubleClickFlag = true;
      return;
    }
    if (this->ItemDoubleClickFlag == true) {
      this->ItemDoubleClickFlag = false;
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar4 + 0x3a0))(pUVar4,&local_res18);
    OnItemSlotMouseButtonUp(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar7);
    pTVar11 = &this->ItemListModel;
    bVar3 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals(pTVar11,(void *)0x0);
    if (bVar3) {
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&pTVar11->WeakPtr);
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar4[1].field_0x18,SelectedItemUID);
    pUVar8 = FWeakObjectPtr::Get(&pTVar11->WeakPtr);
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    lVar9 = (**(code **)(*(longlong *)pUVar4 + 0x388))(pUVar4);
  }
  FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&pUVar8[1].field_0x18,SelectedItemUID,lVar9);
  pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  local_20 = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x2e0);
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_20);
  (*pcVar2)(pUVar4,local_res18,0);
  return;
}

// OnInputAction @ 14bfbd820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnInputAction
          (UDS_VM_W_B_RingCmd_Setting *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2
          )

{
  EDS_KeyActionType EVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_RingCommandDeckDataSet *this_00;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_RingCmdEditType local_148 [4];
  int local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->CurrentRingCmdDeckData,(void *)0x0);
  if ((bVar2) ||
     (bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->RingCmdDeckDataSet,(void *)0x0), bVar2)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_B_RingCmd_Setting::OnInputAction",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x6e,L"CurrentRingCmdDeckData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return;
  }
  EVar1 = *param_1;
  if (EVar1 == IA_RingCmd_Custom_PrevDeck) {
    local_144[0] = this->CurrentRingCmdIndex + 2;
    local_144[0] = local_144[0] +
                   (local_144[0] / 3 + (local_144[0] >> 0x1f) +
                   (int)(((longlong)local_144[0] / 3 + ((longlong)local_144[0] >> 0x3f) &
                         0xffffffffU) >> 0x1f)) * -3;
  }
  else {
    if (EVar1 != IA_RingCmd_Custom_NextDeck) {
      if (EVar1 == IA_RingCmd_RemoveDeckItem) {
        if (this->EditType != ClickToTarget) {
          return;
        }
        local_148[0] = DoubleClick;
        SetEditType(this,local_148);
        OnClickRingMenu(this,this->TempSlotIndex);
        return;
      }
      if (EVar1 != IA_UI_Cancel) {
        return;
      }
      bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        (&this->CurrentRingCmdDeckData,(void *)0x0);
      if (bVar2) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_W_B_RingCmd_Setting::OnInputAction",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x8d,L"ringCmdDeckData is nullptr");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        ResetEditData(this,true);
        return;
      }
      ResetEditData(this,true);
      this_00 = (UDS_RingCommandDeckDataSet *)
                FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
      pUVar4 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
      UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(this_00,*(int *)&pUVar4[2].field_0x8,-1);
      return;
    }
    local_144[0] = this->CurrentRingCmdIndex + 1;
    local_144[0] = local_144[0] +
                   (local_144[0] / 3 + (local_144[0] >> 0x1f) +
                   (int)(((longlong)local_144[0] / 3 + ((longlong)local_144[0] >> 0x3f) &
                         0xffffffffU) >> 0x1f)) * -3;
  }
  SetCurrentRingCmdIndex(this,local_144);
  UpdateData(this,false);
  return;
}

// OnItemListDoubleClicked @ 14bfbe4a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnItemListDoubleClicked
          (UDS_VM_W_B_RingCmd_Setting *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  TSharedPtr<FDS_RingCommandSlotData,1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr local_res10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_58;
  FDS_RingCommandSlotData local_48;
  
  local_res10 = param_1.WeakPtr;
  bVar5 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if ((!bVar5) &&
     (bVar5 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        (&this->CurrentRingCmdDeckData,(void *)0x0), !bVar5)) {
    pUVar8 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
    local_68.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)&pUVar8[2].field_0x18;
    pTVar1 = *(TSharedPtr<FDS_RingCommandSlotData,1> **)&pUVar8[2].field_0x10;
    local_60 = iVar7;
    if (iVar7 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,0,&local_68,iVar7,&local_5c);
      ConstructItems<TSharedPtr<FDS_RingCommandSlotData,1>,TSharedPtr<FDS_RingCommandSlotData,1>,int>
                (local_68.Data,pTVar1,iVar7);
    }
    uVar10 = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if (0 < local_60) {
      lVar11 = 0;
      do {
        uVar9 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < local_60) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(local_68.Data + lVar11) != 0) {
          uVar6 = 0;
          if ((int)uVar10 < local_60) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar4.Data = local_68.Data;
          if ((*(longlong *)(local_68.Data + lVar11) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (**(char **)(FVar4.Data + lVar11) == '\x01') {
            uVar6 = 0;
            if ((int)uVar10 < local_60) {
              uVar6 = uVar9;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar4.Data = local_68.Data;
            if ((*(longlong *)(local_68.Data + lVar11) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(FVar4.Data + lVar11);
            pUVar8 = FWeakObjectPtr::Get(&local_res10);
            if (*(longlong *)(lVar2 + 0x10) == (longlong)*(int *)&pUVar8[8].field_0x10) {
              pUVar8 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
              FDS_RingCommandSlotData::FDS_RingCommandSlotData
                        (&local_48,*(int *)&pUVar8[2].field_0x8,uVar10);
              if (((local_58.AllocatorInstance.Data <= &local_48) &&
                  (&local_48 <
                   (FDS_RingCommandSlotData *)
                   (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x18))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = local_58.ArrayNum;
              if (local_58.ArrayNum == local_58.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_58.AllocatorInstance,&local_58.ArrayMax);
              }
              local_58.ArrayNum = iVar7 + 1;
              *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 0x18) =
                   local_48._0_8_;
              *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) =
                   local_48._8_8_;
              *(long64 *)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) =
                   local_48.SlotData;
            }
          }
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < local_60);
    }
    FDS_RingCommandService::RequestRingCommandSetting(&local_58);
    ResetEditData(this,true);
    UpdateData(this,false);
    if ((FDS_RingCommandSlotData *)local_58.AllocatorInstance.Data != (FDS_RingCommandSlotData *)0x0
       ) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
              ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_68.Data,local_60);
    if ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_68.Data !=
        (TSharedPtr<FDS_RingCommandSlotData,1> *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// OnItemSlotMouseButtonUp @ 14bfbe860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnItemSlotMouseButtonUp
          (UDS_VM_W_B_RingCmd_Setting *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  EDS_RingCmdEditType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_RingCommandDeckDataSet *pUVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  FName *pFVar9;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_228 [32];
  FName local_1e8;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_1e0;
  TSharedPtr<FDS_RingCommandSlotData,1> local_1d0;
  FName local_1b8;
  FName FStack_1b0;
  longlong local_1a8 [2];
  FName local_198;
  int local_190;
  FName local_188;
  FName FStack_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName FStack_160;
  FName local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_res10 = param_1.WeakPtr;
  bVar5 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar5) {
    EVar1 = this->EditType;
    if ((EVar1 == None) || (EVar1 == ClickToClick)) {
      this->TempRingCommandSlotType = 0;
      this->TempSlotData = 0;
      this->TempInfoID = 0;
      this->TempSlotIndex = 0;
      this->TempSlotDataUID = 0;
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      this->TempSlotDataUID = *(long64 *)&pUVar7[8].field_0x8;
      if (this->EditModeVisibility != SelfHitTestInvisible) {
        pFVar9 = ::FName::FName(&local_170,"Ani_OpenChange");
        (this->OpenChangeAniEvent).AnimationName = *pFVar9;
        (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
        local_190 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
        local_198 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      }
      iVar4 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
      if (this->EditModeVisibility != SelfHitTestInvisible) {
        this->EditModeVisibility = SelfHitTestInvisible;
        FStack_1b0.ComparisonIndex.Value = iVar4;
        local_1b8 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      this->EditType = ClickToClick;
      this->TempRingCommandSlotType = 1;
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      this->TempSlotData = (longlong)*(int *)&pUVar7[8].field_0x10;
    }
    else if (EVar1 == ClickToTarget) {
      bVar5 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        (&this->CurrentRingCmdDeckData,(void *)0x0);
      if ((bVar5) ||
         (bVar5 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                            (&this->RingCmdDeckDataSet,(void *)0x0), bVar5)) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_W_B_RingCmd_Setting::OnItemSlotMouseButtonUp",0x33,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_148.Ptr,0x209,L"ringCmdDeckData is nullptr");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        ResetEditData(this,true);
      }
      else {
        pUVar6 = (UDS_RingCommandDeckDataSet *)
                 FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
        UDS_RingCommandDeckDataSet::GetSelectedRingCommandData(pUVar6,&local_1d0);
        if (local_1d0.Object != (FDS_RingCommandSlotData *)0x0) {
          FDS_RingCommandSlotData::FDS_RingCommandSlotData
                    ((FDS_RingCommandSlotData *)&local_188,(local_1d0.Object)->DeckNumber,
                     (local_1d0.Object)->SlotNumber);
          pUVar7 = FWeakObjectPtr::Get(&local_res10);
          local_1a8[0] = (longlong)*(int *)&pUVar7[8].field_0x10;
          FDS_RingCommandSlotData::SetSlotData((FDS_RingCommandSlotData *)&local_188,Item,local_1a8)
          ;
          local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8 = local_188;
          FStack_1b0 = FStack_180;
          local_1e8 = local_178;
          local_1e0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,0,&local_1e0.AllocatorInstance,1,&local_1e0.ArrayMax);
          local_168 = local_1b8;
          FStack_160 = FStack_1b0;
          *(FName *)local_1e0.AllocatorInstance.Data = local_1b8;
          *(FName *)(local_1e0.AllocatorInstance.Data + 8) = FStack_1b0;
          local_158 = local_1e8;
          *(FName *)(local_1e0.AllocatorInstance.Data + 0x10) = local_1e8;
          FDS_RingCommandService::RequestRingCommandSetting(&local_1e0);
          if ((FName *)local_1e0.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_1e0.AllocatorInstance.Data);
          }
          pUVar6 = (UDS_RingCommandDeckDataSet *)
                   FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
          pUVar7 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
          UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar6,*(int *)&pUVar7[2].field_0x8,-1);
          ResetEditData(this,true);
          if ((local_1d0.Object == (FDS_RingCommandSlotData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_1d0.Object)->DeckNumber != this->CurrentRingCmdIndex) {
            local_1e8.ComparisonIndex.Value = (local_1d0.Object)->DeckNumber;
            SetCurrentRingCmdIndex(this,(int *)&local_1e8);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bfc6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnSetViewModel
          (UDS_VM_W_B_RingCmd_Setting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  undefined1 *puVar1;
  EDS_ContentsTabFrameType EVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> TVar9;
  UDS_LogManager *pUVar10;
  UDS_RingCommandDeckDataSet *this_00;
  UObject *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FName *pFVar14;
  undefined1 auStackY_238 [32];
  EDS_RingCmdType local_208 [8];
  FWeakObjectPtr local_200;
  FName local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8 [2];
  FName local_1d8;
  int local_1d0;
  UDS_VM_W_B_RingCmd_Setting *local_1c8;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b0;
  FDestructionSentinel local_1a0;
  undefined1 *local_188;
  undefined1 local_180 [8];
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TVar9 = TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)local_180);
                    /* WARNING: Load size is inaccurate */
  (this->RingCmdDeckDataSet).WeakPtr = *TVar9.WeakPtr;
  bVar7 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    (&this->RingCmdDeckDataSet,(void *)0x0);
  if (bVar7) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_B_RingCmd_Setting::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_158.Ptr,0x3d,L"RingCmdDeckDataSet is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14bfc72de;
  }
  this_00 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
  pUVar11 = FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
  UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(this_00,*(int *)&pUVar11[4].field_0x20,-1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnEventRingCmdItemSlotDelegate,&local_178);
  puVar1 = &(this->OnEventRingCmdItemSlotDelegate).field_0x8;
  if ((*(int *)&(this->OnEventRingCmdItemSlotDelegate).field_0x10 == 0) ||
     (*(longlong **)puVar1 == (longlong *)0x0)) {
LAB_14bfc6e24:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    iStack_1f0 = 0;
    local_1f8 = (FName)OnEventRingCmdItemSlot;
    uStack_1ec = local_1b0.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnEventRingCmdItemSlotDelegate,(FWriteAccessScope *)&local_1a0);
    local_188 = puVar1;
    puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar12[3] = 0;
      local_1c8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_1c8);
      *(FName *)(puVar12 + 4) = local_1f8;
      puVar12[5] = CONCAT44(uStack_1ec,iStack_1f0);
    }
    if (local_1a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
    }
  }
  else {
    cVar8 = (**(code **)(**(longlong **)puVar1 + 0x38))();
    if (cVar8 == '\0') goto LAB_14bfc6e24;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
  }
  local_1b0.Object = param_1->Object;
  local_1b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_1c0,&local_1b0);
  iVar6 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
  if (local_1c0.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_B_RingCmd_Setting::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,0x4a,L"context is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    EVar2 = (local_1c0.Object)->TabFrameID;
    if (EVar2 == RingCmd_Setting_Item) {
      if (this->ListSwitcher != 1) {
        this->ListSwitcher = 1;
        iStack_1f0 = iVar6;
        local_1f8 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
      }
      ResetEditData(this,true);
    }
    else {
      if (EVar2 == RingCmd_Setting_Menu) {
        if (this->ListSwitcher != 2) {
          this->ListSwitcher = 2;
          iStack_1f0 = iVar6;
          local_1f8 = FVar5;
          (**(code **)(this->_padding_ + 0x38))();
        }
        if (this->ListSwitcher == 1) {
          bVar7 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                            (&this->ItemListModel,(void *)0x0);
          if (!bVar7) {
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&pUVar11[1].field_0x18,SelectedItemUID);
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            local_1e8[0] = 0;
            local_200.ObjectIndex = 0;
            local_200.ObjectSerialNumber = 0;
            pcVar4 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
            FWeakObjectPtr::operator=(&local_200,(FObjectPtr)local_1e8);
            (*pcVar4)(pUVar11,local_200,0);
          }
        }
        else {
LAB_14bfc7207:
          local_208[0] = None;
          TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->RingCmdSlotSelectEvent,local_208,0,false);
        }
LAB_14bfc7223:
        if (this->EditModeVisibility != Collapsed) {
          local_1d0 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
          pFVar14 = &local_1d8;
          local_1d8 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
LAB_14bfc7249:
          this->EditModeVisibility = Collapsed;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
        }
      }
      else {
        if (EVar2 == RingCmd_Setting_Skill) {
          if (this->ListSwitcher != 3) {
            this->ListSwitcher = 3;
            iStack_1f0 = iVar6;
            local_1f8 = FVar5;
            (**(code **)(this->_padding_ + 0x38))();
          }
          if (this->ListSwitcher != 1) goto LAB_14bfc7207;
          bVar7 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                            (&this->ItemListModel,(void *)0x0);
          if (!bVar7) {
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&pUVar11[1].field_0x18,SelectedItemUID);
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            local_1e8[0] = 0;
            local_200.ObjectIndex = 0;
            local_200.ObjectSerialNumber = 0;
            pcVar4 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
            FWeakObjectPtr::operator=(&local_200,(FObjectPtr)local_1e8);
            (*pcVar4)(pUVar11,local_200,0);
          }
          goto LAB_14bfc7223;
        }
        if (this->ListSwitcher != 0) {
          this->ListSwitcher = 0;
          local_1d0 = iVar6;
          local_1d8 = FVar5;
          (**(code **)(this->_padding_ + 0x38))();
        }
        if (this->ListSwitcher == 1) {
          bVar7 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                            (&this->ItemListModel,(void *)0x0);
          if (!bVar7) {
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&pUVar11[1].field_0x18,SelectedItemUID);
            pUVar11 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            local_1e8[0] = 0;
            local_200.ObjectIndex = 0;
            local_200.ObjectSerialNumber = 0;
            pcVar4 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
            FWeakObjectPtr::operator=(&local_200,(FObjectPtr)local_1e8);
            (*pcVar4)(pUVar11,local_200,0);
          }
        }
        else {
          local_208[0] = None;
          TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->RingCmdSlotSelectEvent,local_208,0,false);
        }
        if (this->EditModeVisibility != Collapsed) {
          local_1f8 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
          pFVar14 = &local_1f8;
          iStack_1f0 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
          goto LAB_14bfc7249;
        }
      }
      this->EditType = None;
      this->TempRingCommandSlotType = 0;
      this->TempSlotData = 0;
      this->TempInfoID = 0;
      this->TempSlotIndex = 0;
      this->TempSlotDataUID = 0;
    }
    SetCurrentRingCmdIndex(this,&this->CurrentRingCmdIndex);
    this->SortType = Equip;
    UpdateData(this,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
LAB_14bfc72de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSlotInfoListDoubleClicked @ 14bfceea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnSlotInfoListDoubleClicked
          (UDS_VM_W_B_RingCmd_Setting *this,int param_1,EDS_RingCmdType param_2)

{
  TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *this_00;
  TSharedPtr<FDS_RingCommandSlotData,1> *pTVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_68;
  FDS_RingCommandSlotData local_58;
  
  if (0 < param_1) {
    this_00 = &this->CurrentRingCmdDeckData;
    bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_78.Data = (FScriptContainerElement *)0x0;
      iVar6 = *(int *)&pUVar7[2].field_0x18;
      pTVar1 = *(TSharedPtr<FDS_RingCommandSlotData,1> **)&pUVar7[2].field_0x10;
      local_70 = iVar6;
      if (iVar6 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,0,&local_78,iVar6,&local_6c);
        ConstructItems<TSharedPtr<FDS_RingCommandSlotData,1>,TSharedPtr<FDS_RingCommandSlotData,1>,int>
                  (local_78.Data,pTVar1,iVar6);
      }
      uVar8 = 0;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      if (0 < local_70) {
        lVar10 = 0;
        do {
          uVar9 = ~uVar8 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar8 < local_70) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(local_78.Data + lVar10) != 0) {
            uVar5 = 0;
            if ((int)uVar8 < local_70) {
              uVar5 = uVar9;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar3.Data = local_78.Data;
            if ((*(longlong *)(local_78.Data + lVar10) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (**(EDS_RingCmdType **)(FVar3.Data + lVar10) == param_2) {
              uVar5 = 0;
              if ((int)uVar8 < local_70) {
                uVar5 = uVar9;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar3.Data = local_78.Data;
              if ((*(longlong *)(local_78.Data + lVar10) == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(longlong *)(*(longlong *)(FVar3.Data + lVar10) + 0x10) == (longlong)param_1) {
                pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                FDS_RingCommandSlotData::FDS_RingCommandSlotData
                          (&local_58,*(int *)&pUVar7[2].field_0x8,uVar8);
                if (((local_68.AllocatorInstance.Data <= &local_58) &&
                    (&local_58 <
                     (FDS_RingCommandSlotData *)
                     (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x18))) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = local_68.ArrayNum;
                if (local_68.ArrayNum == local_68.ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x818,&local_68.AllocatorInstance,&local_68.ArrayMax);
                }
                local_68.ArrayNum = iVar6 + 1;
                *(undefined8 *)(local_68.AllocatorInstance.Data + (longlong)iVar6 * 0x18) =
                     local_58._0_8_;
                *(undefined8 *)(local_68.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8) =
                     local_58._8_8_;
                *(long64 *)(local_68.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 0x10) =
                     local_58.SlotData;
              }
            }
          }
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((int)uVar8 < local_70);
      }
      FDS_RingCommandService::RequestRingCommandSetting(&local_68);
      ResetEditData(this,true);
      UpdateData(this,false);
      if ((FDS_RingCommandSlotData *)local_68.AllocatorInstance.Data !=
          (FDS_RingCommandSlotData *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
                ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_78.Data,local_70);
      if ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_78.Data !=
          (TSharedPtr<FDS_RingCommandSlotData,1> *)0x0) {
        FMemory::Free(local_78.Data);
      }
    }
  }
  return;
}

// OnSlotInfoMouseButtonUp @ 14bfcf240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnSlotInfoMouseButtonUp
          (UDS_VM_W_B_RingCmd_Setting *this,int param_1,EDS_RingCmdType param_2)

{
  EDS_RingCmdEditType EVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UDS_RingCommandDeckDataSet *pUVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  FName *pFVar8;
  undefined1 auStackY_238 [32];
  EDS_RingCmdType local_1f8 [8];
  long64 local_1f0;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_1e8;
  TSharedPtr<FDS_RingCommandSlotData,1> local_1d8;
  FName local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FName local_1b8 [2];
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int iStack_190;
  undefined4 uStack_18c;
  long64 local_188;
  FName local_180;
  FName local_178;
  int iStack_170;
  undefined4 uStack_16c;
  long64 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  EVar1 = this->EditType;
  local_1f8[0] = param_2;
  if ((EVar1 == None) || (EVar1 == ClickToClick)) {
    this->TempRingCommandSlotType = 0;
    this->TempSlotData = 0;
    this->TempInfoID = 0;
    this->TempSlotIndex = 0;
    this->TempSlotDataUID = 0;
    TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->RingCmdSlotSelectEvent,local_1f8,param_1,true);
    this->TempInfoID = param_1;
    if (this->EditModeVisibility != SelfHitTestInvisible) {
      pFVar8 = ::FName::FName(&local_180,"Ani_OpenChange");
      (this->OpenChangeAniEvent).AnimationName = *pFVar8;
      (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
      local_1a0 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
    iVar3 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
    if (this->EditModeVisibility != SelfHitTestInvisible) {
      this->EditModeVisibility = SelfHitTestInvisible;
      _iStack_1c0 = CONCAT44(uStack_1bc,iVar3);
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
    this->TempRingCommandSlotType = (uint)local_1f8[0];
    this->EditType = ClickToClick;
    this->TempSlotData = (longlong)param_1;
  }
  else if (EVar1 == ClickToTarget) {
    bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                      (&this->CurrentRingCmdDeckData,(void *)0x0);
    if ((bVar4) ||
       (bVar4 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                          (&this->RingCmdDeckDataSet,(void *)0x0), bVar4)) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_B_RingCmd_Setting::OnSlotInfoMouseButtonUp",0x33,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x232,L"CurrentRingCmdDeckData is nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      ResetEditData(this,true);
    }
    else {
      pUVar5 = (UDS_RingCommandDeckDataSet *)
               FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
      UDS_RingCommandDeckDataSet::GetSelectedRingCommandData(pUVar5,&local_1d8);
      if (local_1d8.Object != (FDS_RingCommandSlotData *)0x0) {
        FDS_RingCommandSlotData::FDS_RingCommandSlotData
                  ((FDS_RingCommandSlotData *)&local_198,(local_1d8.Object)->DeckNumber,
                   (local_1d8.Object)->SlotNumber);
        local_1b8[0] = (FName)(longlong)param_1;
        FDS_RingCommandSlotData::SetSlotData
                  ((FDS_RingCommandSlotData *)&local_198,local_1f8[0],(long64 *)local_1b8);
        local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8 = local_198;
        iStack_1c0 = iStack_190;
        uStack_1bc = uStack_18c;
        local_1f0 = local_188;
        local_1e8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,1,0,&local_1e8.AllocatorInstance,1,&local_1e8.ArrayMax);
        local_178 = local_1c8;
        iStack_170 = iStack_1c0;
        uStack_16c = uStack_1bc;
        *(FName *)local_1e8.AllocatorInstance.Data = local_1c8;
        *(undefined8 *)(local_1e8.AllocatorInstance.Data + 8) = _iStack_1c0;
        local_168 = local_1f0;
        *(long64 *)(local_1e8.AllocatorInstance.Data + 0x10) = local_1f0;
        FDS_RingCommandService::RequestRingCommandSetting(&local_1e8);
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        pUVar5 = (UDS_RingCommandDeckDataSet *)
                 FWeakObjectPtr::Get(&(this->RingCmdDeckDataSet).WeakPtr);
        pUVar6 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
        UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(pUVar5,*(int *)&pUVar6[2].field_0x8,-1);
        ResetEditData(this,true);
        if ((local_1d8.Object == (FDS_RingCommandSlotData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((local_1d8.Object)->DeckNumber != this->CurrentRingCmdIndex) {
          local_1f0 = CONCAT44(local_1f0._4_4_,(local_1d8.Object)->DeckNumber);
          SetCurrentRingCmdIndex(this,(int *)&local_1f0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSortDropDownChanged @ 14bfcf5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::OnSortDropDownChanged(UDS_VM_W_B_RingCmd_Setting *this,int param_1)

{
  if (param_1 == 0) {
    this->SortType = Equip;
  }
  else if (param_1 == 1) {
    this->SortType = Grade;
    UpdateData(this,false);
    return;
  }
  UpdateData(this,false);
  return;
}

// PlayOpenAni @ 14bfd3140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::PlayOpenAni(UDS_VM_W_B_RingCmd_Setting *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Ani_OpenChange");
  (this->OpenChangeAniEvent).AnimationName = *pFVar1;
  (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// ResetEditData @ 14bfd56e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::ResetEditData(UDS_VM_W_B_RingCmd_Setting *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  EDS_RingCmdType local_res10 [8];
  undefined8 local_res18;
  FName local_28;
  int local_20;
  
  if (param_1) {
    if (this->ListSwitcher == 1) {
      bVar2 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                        (&this->ItemListModel,(void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                  ((FDS_DataContainer *)&pUVar3[1].field_0x18,SelectedItemUID);
        pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        local_res18 = 0;
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        (*pcVar1)(pUVar3,local_res8,0);
      }
    }
    else {
      local_res10[0] = None;
      TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->RingCmdSlotSelectEvent,local_res10,0,false);
    }
    local_20 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
    if (this->EditModeVisibility != Collapsed) {
      this->EditModeVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    this->EditType = None;
  }
  this->TempRingCommandSlotType = 0;
  this->TempSlotData = 0;
  this->TempInfoID = 0;
  this->TempSlotIndex = 0;
  this->TempSlotDataUID = 0;
  return;
}

// SetActionListEntry @ 14bfd59f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::SetActionListEntry(UDS_VM_W_B_RingCmd_Setting *this)

{
  longlong *plVar1;
  code *pcVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  FName FVar5;
  undefined4 uVar6;
  UDS_UserObjectListItem *pUVar7;
  bool bVar8;
  UObject *pUVar9;
  FDS_ViewModelContext *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar13;
  ulong64 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<FSetElementId> FVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  EDS_RingCmdType local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr local_res20;
  TArray<FDS_ActionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_150;
  undefined8 local_140;
  UDS_VM_W_B_RingCmd_Setting *local_138;
  UDS_VM_W_B_RingCmd_Setting *local_130;
  longlong local_128;
  UDS_UserObjectListItem *local_120;
  UDS_UserObjectListItem *local_118;
  FScriptContainerElement *local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  UStruct **local_78;
  FDestructionSentinel local_70;
  FDS_ViewModelContext *local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RingCmdSlotSelectEvent
             ,(FWriteAccessScope *)&local_a8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->RingCmdSlotSelectEvent);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FDS_EntryBindingEventField::Reset(&this->ActionListEnty);
  FDS_ActionBaseTableRow::GetAll(&local_160);
  iVar17 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
  if (local_160.ArrayNum == 0) {
    plVar1 = &this->_padding_;
    if (this->ListSwitcher != 0) {
      this->ListSwitcher = 0;
      local_100 = iVar17;
      local_108 = FVar5;
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    if (this->ListSwitcher == 1) {
      bVar8 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                        (&this->ItemListModel,(void *)0x0);
      if (!bVar8) {
        pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                  ((FDS_DataContainer *)&pUVar9[1].field_0x18,SelectedItemUID);
        pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        local_140 = 0;
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x2e0);
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_140);
        (*pcVar2)(pUVar9,local_res20,0);
      }
    }
    else {
      local_res8[0] = None;
      TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->RingCmdSlotSelectEvent,local_res8,0,false);
    }
    iVar17 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
    if (this->EditModeVisibility != Collapsed) {
      this->EditModeVisibility = Collapsed;
      local_f0 = iVar17;
      local_f8 = FVar5;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_f8);
    }
    this->EditType = None;
    this->TempRingCommandSlotType = 0;
    this->TempSlotData = 0;
    this->TempInfoID = 0;
    this->TempSlotIndex = 0;
    this->TempSlotDataUID = 0;
  }
  else {
    uVar16 = (ulonglong)local_160.ArrayNum;
    uVar6 = local_150.SharedReferenceCount.ReferenceController._4_4_;
    pFVar20 = local_160.AllocatorInstance.Data + uVar16 * 8;
    local_res18 = local_160.ArrayNum;
    FVar19.Data = local_160.AllocatorInstance.Data;
    local_110 = pFVar20;
    while( true ) {
      if (local_160.ArrayNum != (uint)uVar16) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_ActionBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar19.Data == pFVar20) break;
      local_128 = *(longlong *)FVar19.Data;
      if (local_128 != 0) {
        local_120 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_120 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_120);
        }
        pFVar10 = ::operator_new(0x68);
        if (pFVar10 == (FDS_ViewModelContext *)0x0) {
          pFVar10 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar10->_padding_ = 0;
          pFVar10->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar10->ViewModelName).ComparisonIndex = 0;
          (pFVar10->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
          pFVar10[1]._padding_ = 0;
          pFVar10[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar10[1].ViewModelName.ComparisonIndex = 0;
          pFVar10[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar10[1].ViewModelTemplateKey = 0;
          pFVar10[2]._padding_ = 0;
          pFVar10[2].DerivedStaticStruct = (UStruct *)0x0;
          pFVar10[2].ViewModelName.ComparisonIndex = 0;
          pFVar10[2].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar10[2].ViewModelTemplateKey = 0;
          pFVar10[3]._padding_ = 0;
          pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmdSlotInfo__6B_;
        }
        pTVar11 = ::operator_new(0x20);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmdSlotInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar10;
        }
        if (pFVar10 == (FDS_ViewModelContext *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pUVar12 = FDS_ViewModelContext_RingCmdSlotInfo::StaticStruct();
        pFVar10->DerivedStaticStruct = (UStruct *)pUVar12;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_d8.Object = pFVar10;
          local_d8.SharedReferenceCount.ReferenceController = pTVar11;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
        }
        pFVar10->ViewModelTemplateKey = W_RingCommandSlot;
        local_c8 = OnSlotInfoMouseButtonUp;
        uStack_c0 = 0;
        uStack_bc = uVar6;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar10 + 1),
                   (FWriteAccessScope *)&local_90);
        local_78 = &pFVar10[1].DerivedStaticStruct;
        puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_78);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          *(undefined1 *)(puVar13 + 1) = 3;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar13[3] = 0;
          local_138 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_138);
          puVar13[4] = local_c8;
          puVar13[5] = CONCAT44(uStack_bc,uStack_c0);
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        uStack_b0 = 0;
        local_b8 = OnSlotInfoListDoubleClicked;
        uStack_ac = uVar6;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar10[1].ViewModelTemplateKey,(FWriteAccessScope *)&local_70);
        local_58 = pFVar10 + 2;
        puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_58);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          *(undefined1 *)(puVar13 + 1) = 3;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar13[3] = 0;
          local_130 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_130);
          puVar13[4] = local_b8;
          puVar13[5] = CONCAT44(uStack_ac,uStack_b0);
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        pUVar7 = local_120;
        pFVar10[2].ViewModelName = (FName)&this->RingCmdSlotSelectEvent;
        *(uint *)&pFVar10[2].field_0x1c = (uint)*(byte *)(local_128 + 8);
        *(undefined1 *)&pFVar10[2].ViewModelTemplateKey = W_LoginWorld;
        if (*(int *)&(this->ResigtedSlotData).Elements.field_0x8 !=
            *(int *)&(this->ResigtedSlotData).Elements.field_0x34) {
          FVar3 = (this->ResigtedSlotData).Hash.SecondaryData;
          FVar18 = (ForElementType<FSetElementId>)&(this->ResigtedSlotData).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar18 = FVar3;
          }
          iVar17 = *(int *)((longlong)FVar18 +
                           ((ulonglong)((this->ResigtedSlotData).HashSize - 1) &
                           ((ulonglong)*(byte *)(local_128 + 8) + 0x9e377a79 ^ 3)) * 4);
          if (iVar17 != -1) {
            lVar4 = *(longlong *)&(this->ResigtedSlotData).Elements;
            do {
              lVar15 = (longlong)iVar17;
              if ((*(int *)(lVar4 + lVar15 * 0x18) == 3) &&
                 (*(ulonglong *)(lVar4 + 8 + lVar15 * 0x18) == (ulonglong)*(byte *)(local_128 + 8)))
              goto LAB_14bfd5f44;
              iVar17 = *(int *)(lVar4 + 0x10 + lVar15 * 0x18);
            } while (iVar17 != -1);
          }
        }
        iVar17 = -1;
LAB_14bfd5f44:
        *(bool *)&pFVar10[3]._padding_ = iVar17 != -1;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_150.Object = pFVar10;
        local_150.SharedReferenceCount.ReferenceController = pTVar11;
        UDS_UserObjectListItem::AddContext(local_120,&local_150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        local_118 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FDS_EntryBindingEventField::Add
                  (&this->ActionListEnty,(TObjectPtr<UDS_UserObjectListItem>)&local_118);
        pFVar20 = local_110;
      }
      uVar16 = (ulonglong)local_res18;
      FVar19.Data = FVar19.Data + 8;
    }
    local_e0 = FFieldNotificationClassDescriptor::ActionListEnty.BitNumber;
    local_e8 = FFieldNotificationClassDescriptor::ActionListEnty.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// SetCurrentRingCmdIndex @ 14bfd8aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::SetCurrentRingCmdIndex(UDS_VM_W_B_RingCmd_Setting *this,int *param_1)

{
  undefined1 *puVar1;
  UDS_VM_W_RingCmd *this_00;
  UDS_VM_Dropdown *this_01;
  code *pcVar2;
  FName FVar3;
  FDS_ViewModelContext_RingCmd *pFVar4;
  FDS_ViewModelContext_Dropdown *pFVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UObject *pUVar9;
  char *pcVar10;
  UObject *this_02;
  UFunction *pUVar11;
  UDS_LogManager *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FScriptContainerElement *pFVar15;
  char *pcVar16;
  undefined1 auStackY_3f8 [32];
  <lambda_1> local_3c8 [16];
  code *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a8;
  FWeakObjectPtr local_3a0;
  FName local_398;
  FWeakObjectPtr local_390;
  FDS_Text local_388;
  FDS_Text local_338;
  FName local_2e8 [2];
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  FName local_2a8;
  UDS_VM_W_B_RingCmd_Setting *local_2a0;
  FName *local_298;
  UDS_VM_W_B_RingCmd_Setting *local_290;
  UDS_VM_W_B_RingCmd_Setting *local_288;
  UDS_VM_W_B_RingCmd_Setting *local_280;
  FName local_278;
  int local_270;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_268;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  undefined1 *local_228;
  FDestructionSentinel local_220;
  undefined1 *local_208;
  FDestructionSentinel local_200;
  undefined1 *local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  FReadAccessScope local_1c8;
  FReadAccessScope local_1b0;
  FReadAccessScope local_198;
  FReadAccessScope local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  bVar6 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->CurrentRingCmdDeckData,(void *)0x0);
  if (!bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),(UObject *)this)
    ;
  }
  UDS_RingCommandDeckData::GetData
            ((ulong64)&local_390,UDS_PlayerData::MainPlayerEntityID,SUB41(*param_1,0));
  bVar6 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_390,
                     (void *)0x0);
  if (bVar6) {
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_390);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),(UObject *)this);
  pUVar9 = FWeakObjectPtr::Get(&local_390);
  pcVar10 = strstr("&UDS_VM_W_B_RingCmd_Setting::OnChangedRingCmdDeck","::");
  if (pcVar10 == (char *)0x0) {
LAB_14bfd8bac:
    pcVar16 = &DAT_00000002;
LAB_14bfd8bb1:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar16 = pcVar10;
      pcVar10 = strstr(pcVar16 + 1,"::");
    } while (pcVar10 != (char *)0x0);
    if (pcVar16 == (char *)0x0) goto LAB_14bfd8bac;
    pcVar16 = pcVar16 + 2;
    if (*pcVar16 == '0') goto LAB_14bfd8bb1;
  }
  ::FName::FName(&local_2a8,pcVar16);
  if ((this == (UDS_VM_W_B_RingCmd_Setting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2e8[0] = local_2a8;
  local_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3a0.ObjectIndex = 0;
  local_3a0.ObjectSerialNumber = 0;
  local_398.ComparisonIndex.Value = 0;
  local_398.Number = 0;
  if ((this == (UDS_VM_W_B_RingCmd_Setting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2a0 = this;
  if (this == (UDS_VM_W_B_RingCmd_Setting *)0x0) {
    local_2a0 = (UDS_VM_W_B_RingCmd_Setting *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_2a0 != (UDS_VM_W_B_RingCmd_Setting *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2a0);
  }
  FWeakObjectPtr::operator=(&local_3a0,(FObjectPtr)&local_2a0);
  local_398 = local_2e8[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_3a8,&local_1c8);
  if ((local_398 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&local_3a0), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
  }
  else {
    pUVar11 = UObject::FindFunction(this_02,local_398);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
    if (pUVar11 != (UFunction *)0x0) goto LAB_14bfd8cfa;
  }
  local_298 = local_2e8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_W_B_RingCmd_Setting>'::__l2::<lambda_1>::operator()(&local_298);
LAB_14bfd8cfa:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_3a8,&local_180);
  local_268.Object = local_3a0;
  local_268.FunctionName = local_398;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_180);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),
             (FWriteAccessScope *)&local_258);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar9[1].field_0x8,local_3c8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),&local_268);
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
  (this->CurrentRingCmdDeckData).WeakPtr = local_390;
  FVar3 = FFieldNotificationClassDescriptor::CurrentRingCmdIndex.FieldName;
  if (this->CurrentRingCmdIndex != *param_1) {
    local_270 = FFieldNotificationClassDescriptor::CurrentRingCmdIndex.BitNumber;
    this->CurrentRingCmdIndex = *param_1;
    local_278 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickRingMenuDelegate,&local_1b0);
  puVar1 = &(this->OnClickRingMenuDelegate).field_0x8;
  if (((*(int *)&(this->OnClickRingMenuDelegate).field_0x10 == 0) ||
      (*(longlong **)puVar1 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)puVar1 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b0);
    uStack_3b0 = 0;
    local_3b8 = OnClickRingMenu;
    uStack_3ac = local_2b8.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnClickRingMenuDelegate,(FWriteAccessScope *)&local_240);
    local_228 = puVar1;
    puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar13[3] = 0;
      local_290 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_290);
      puVar13[4] = local_3b8;
      puVar13[5] = CONCAT44(uStack_3ac,uStack_3b0);
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDoubleClickRingMenuDelegate,&local_198);
  puVar1 = &(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (((*(int *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 == 0) ||
      (*(longlong **)puVar1 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)puVar1 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_198);
    uStack_3b0 = 0;
    local_3b8 = OnDoubleClickRingCmdSlot;
    uStack_3ac = local_2b8.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDoubleClickRingMenuDelegate,(FWriteAccessScope *)&local_220);
    local_208 = puVar1;
    puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar13[3] = 0;
      local_288 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_288);
      puVar13[4] = local_3b8;
      puVar13[5] = CONCAT44(uStack_3ac,uStack_3b0);
    }
    if (local_220.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_198);
  }
  if ((this->RingCmdViewModel).field0_0x0.DebugPtr != (UDS_VM_W_RingCmd *)0x0) {
    MakeContext<FDS_ViewModelContext_RingCmd>(&local_2d8);
    pFVar4 = local_2d8.Object;
    if ((local_2d8.Object == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&pFVar4->OnClickRingMenuDelegate,&this->OnClickRingMenuDelegate);
    if ((pFVar4 == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&pFVar4->OnDoubleClickRingMenuDelegate,&this->OnDoubleClickRingMenuDelegate);
    iVar8 = this->CurrentRingCmdIndex;
    if ((pFVar4 == (FDS_ViewModelContext_RingCmd *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4->RingCmdDeckNum = iVar8;
    pFVar4->bIsEditMode = true;
    this_00 = (this->RingCmdViewModel).field0_0x0.DebugPtr;
    local_1d8.Object = (FDS_ViewModelContext *)local_2d8.Object;
    local_1d8.SharedReferenceCount.ReferenceController =
         local_2d8.SharedReferenceCount.ReferenceController;
    if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  if ((this->SortDropDownViewModel).field0_0x0.DebugPtr != (UDS_VM_Dropdown *)0x0) {
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_2c8);
    pFVar5 = local_2c8.Object;
    if (local_2c8.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_B_RingCmd_Setting::SetCurrentRingCmdIndex",0x32,Yes);
        UDS_LogManager::PrintLog(pUVar12,1,Warning,local_168.Ptr,0xef,L"dropDownContext is nullptr")
        ;
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      if ((local_2c8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x117;
      pFVar5->DropdownIndex = 0;
      local_388.StringTableType = None;
      local_388.StringTableID = 0;
      local_388.DateTime.Ticks = 0;
      local_388.TimeSpan.Ticks = 0;
      local_388.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_388.StringEnumTableNameID.Number = 0;
      local_388.TimeExpressionType = None;
      local_388.IsExpression = false;
      local_388.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.UniqueString.Data.ArrayNum = 0;
      local_388.UniqueString.Data.ArrayMax = 0;
      local_388.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.FormatArgs.ArrayNum = 0;
      local_388.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_388,StringUi,0xbb9);
      iVar8 = (pFVar5->DropdownList).ArrayNum;
      if (iVar8 == (pFVar5->DropdownList).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(pFVar5->DropdownList).AllocatorInstance,
                           &(pFVar5->DropdownList).ArrayMax);
      }
      (pFVar5->DropdownList).ArrayNum = iVar8 + 1;
      pFVar15 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar8 * 0x50;
      *pFVar15 = (FScriptContainerElement)local_388.StringTableType;
      *(long64 *)(pFVar15 + 8) = local_388.StringTableID;
      *(FName *)(pFVar15 + 0x10) = local_388.StringEnumTableNameID;
      *(long64 *)(pFVar15 + 0x18) = local_388.DateTime.Ticks;
      *(long64 *)(pFVar15 + 0x20) = local_388.TimeSpan.Ticks;
      *(EDS_TimeExpression *)(pFVar15 + 0x28) = local_388.TimeExpressionType;
      *(undefined8 *)(pFVar15 + 0x30) = 0;
      pFVar15[0x2c] = (FScriptContainerElement)local_388.IsExpression;
      *(FScriptContainerElement **)(pFVar15 + 0x30) =
           local_388.UniqueString.Data.AllocatorInstance.Data;
      local_388.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 0x38) = local_388.UniqueString.Data.ArrayNum;
      *(int *)(pFVar15 + 0x3c) = local_388.UniqueString.Data.ArrayMax;
      local_388.UniqueString.Data.ArrayNum = 0;
      local_388.UniqueString.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar15 + 0x40) = 0;
      *(FScriptContainerElement **)(pFVar15 + 0x40) = local_388.FormatArgs.AllocatorInstance.Data;
      local_388.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 0x48) = local_388.FormatArgs.ArrayNum;
      *(int *)(pFVar15 + 0x4c) = local_388.FormatArgs.ArrayMax;
      local_388.FormatArgs.ArrayNum = 0;
      local_388.FormatArgs.ArrayMax = 0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_388.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.FormatArgs.AllocatorInstance.Data);
      }
      if (local_388.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.UniqueString.Data.AllocatorInstance.Data);
      }
      local_338.StringTableType = None;
      local_338.StringTableID = 0;
      local_338.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_338.StringEnumTableNameID.Number = 0;
      local_338.TimeExpressionType = None;
      local_338.DateTime.Ticks = 0;
      local_338.TimeSpan.Ticks = 0;
      local_338.IsExpression = false;
      local_338.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_338.UniqueString.Data.ArrayNum = 0;
      local_338.UniqueString.Data.ArrayMax = 0;
      local_338.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_338.FormatArgs.ArrayNum = 0;
      local_338.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_338,StringUi,0xbbb);
      iVar8 = (pFVar5->DropdownList).ArrayNum;
      if (iVar8 == (pFVar5->DropdownList).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(pFVar5->DropdownList).AllocatorInstance,
                           &(pFVar5->DropdownList).ArrayMax);
      }
      (pFVar5->DropdownList).ArrayNum = iVar8 + 1;
      pFVar15 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar8 * 0x50;
      *pFVar15 = (FScriptContainerElement)local_338.StringTableType;
      *(long64 *)(pFVar15 + 8) = local_338.StringTableID;
      *(FName *)(pFVar15 + 0x10) = local_338.StringEnumTableNameID;
      *(long64 *)(pFVar15 + 0x18) = local_338.DateTime.Ticks;
      *(long64 *)(pFVar15 + 0x20) = local_338.TimeSpan.Ticks;
      *(EDS_TimeExpression *)(pFVar15 + 0x28) = local_338.TimeExpressionType;
      *(undefined8 *)(pFVar15 + 0x30) = 0;
      pFVar15[0x2c] = (FScriptContainerElement)local_338.IsExpression;
      *(FScriptContainerElement **)(pFVar15 + 0x30) =
           local_338.UniqueString.Data.AllocatorInstance.Data;
      local_338.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 0x38) = local_338.UniqueString.Data.ArrayNum;
      *(int *)(pFVar15 + 0x3c) = local_338.UniqueString.Data.ArrayMax;
      local_338.UniqueString.Data.ArrayNum = 0;
      local_338.UniqueString.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar15 + 0x40) = 0;
      *(FScriptContainerElement **)(pFVar15 + 0x40) = local_338.FormatArgs.AllocatorInstance.Data;
      local_338.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar15 + 0x48) = local_338.FormatArgs.ArrayNum;
      *(int *)(pFVar15 + 0x4c) = local_338.FormatArgs.ArrayMax;
      local_338.FormatArgs.ArrayNum = 0;
      local_338.FormatArgs.ArrayMax = 0;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_338.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.FormatArgs.AllocatorInstance.Data);
      }
      if (local_338.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.UniqueString.Data.AllocatorInstance.Data);
      }
      uStack_3b0 = 0;
      local_3b8 = OnSortDropDownChanged;
      uStack_3ac = local_2b8.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickList,
                 (FWriteAccessScope *)&local_200);
      local_1e8 = &(pFVar5->OnClickList).field_0x8;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1e8);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[3] = 0;
        local_280 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_280);
        puVar13[4] = local_3b8;
        puVar13[5] = CONCAT44(uStack_3ac,uStack_3b0);
      }
      if (local_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
      }
      this_01 = (this->SortDropDownViewModel).field0_0x0.DebugPtr;
      local_2b8.Object = (FDS_ViewModelContext *)local_2c8.Object;
      local_2b8.SharedReferenceCount.ReferenceController =
           local_2c8.SharedReferenceCount.ReferenceController;
      if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_2b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetEditModeVisibility @ 14bfd9710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::SetEditModeVisibility
          (UDS_VM_W_B_RingCmd_Setting *this,ESlateVisibility *param_1)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if ((this->EditModeVisibility != *param_1) && (*param_1 == SelfHitTestInvisible)) {
    pFVar1 = ::FName::FName(&local_res8,"Ani_OpenChange");
    (this->OpenChangeAniEvent).AnimationName = *pFVar1;
    (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_18 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
  if (this->EditModeVisibility != *param_1) {
    local_10 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    this->EditModeVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEditType @ 14bfd97d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::SetEditType
          (UDS_VM_W_B_RingCmd_Setting *this,EDS_RingCmdEditType *param_1)

{
  FName *pFVar1;
  ESlateVisibility EVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  EVar2 = Collapsed;
  if (*param_1 != None) {
    EVar2 = SelfHitTestInvisible;
  }
  if ((this->EditModeVisibility != EVar2) && (*param_1 != None)) {
    pFVar1 = ::FName::FName(&local_res8,"Ani_OpenChange");
    (this->OpenChangeAniEvent).AnimationName = *pFVar1;
    (this->OpenChangeAniEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
  if (this->EditModeVisibility != EVar2) {
    this->EditModeVisibility = EVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this->EditType = *param_1;
  return;
}

// SetItemListEntry @ 14bfdabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::SetItemListEntry(UDS_VM_W_B_RingCmd_Setting *this)

{
  TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> *this_00;
  FWeakObjectPtr *pFVar1;
  EDS_SortingType EVar2;
  EDS_SortOrder EVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_LogManager *pUVar11;
  UEnum *pUVar12;
  FName FVar13;
  FString *pFVar14;
  UDS_M_ItemList *pUVar15;
  FDS_DataContainer *pFVar16;
  UDS_ModelBase *pUVar17;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ForElementType<FSetElementId> FVar21;
  UDS_VM_ItemList *this_01;
  FWeakObjectPtr *pFVar22;
  undefined1 auStackY_268 [32];
  EDS_RingCmdType local_238 [8];
  undefined1 local_230 [24];
  TSharedPtr<FDS_ViewModelContext,1> local_218;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  undefined1 local_1f8 [64];
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  undefined1 local_1a8 [64];
  void *local_168;
  undefined4 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FDS_EntryBindingEventField::Reset(&this->ItemListEnty);
  if ((this->ItemListViewModel).field0_0x0.DebugPtr != (UDS_VM_ItemList *)0x0) {
    pUVar9 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)&local_158,pUVar10);
    local_158._padding_ = (longlong)pUVar9;
    local_230._0_8_ = StaticConstructObject_Internal((FStaticConstructObjectParameters *)&local_158)
    ;
    if (local_158._padding_ != 0) {
      plVar20 = &local_158._padding_;
      if ((longlong *)local_158._padding_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_158._padding_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    this_00 = &this->ItemListModel;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_230._0_8_);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_230);
    bVar6 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (bVar6) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_B_RingCmd_Setting::SetItemListEntry",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0x10f,L"itemListModel is nullptr.")
        ;
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      EVar2 = this->SortType;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_1f8._32_8_ = 0;
      local_1f8._40_4_ = 0;
      local_1f8._52_4_ = 0;
      local_1b8 = (ForElementType<FSetElementId>)0x0;
      local_1b0 = 0;
      local_1a8._0_8_ = 0;
      local_1a8._8_8_ = 0;
      local_1a8._32_8_ = 0;
      local_1a8._40_4_ = 0;
      local_1a8._52_4_ = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_1f8._44_4_ = 0x80;
      local_1f8._48_4_ = 0xffffffff;
      local_1a8._44_4_ = 0x80;
      local_1a8._48_4_ = 0xffffffff;
      pUVar12 = StaticEnum<enum_EDS_SortingType>();
      if (pUVar12 == (UEnum *)0x0) {
        ::FString::FString((FString *)local_230,L"");
      }
      else {
        UEnum::GetNameStringByValue(pUVar12,(FString *)local_230,(ulonglong)EVar2);
      }
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)local_1f8,(EDS_ItemListData)&local_218);
      uVar4 = *(undefined8 *)FVar13;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
      if (local_1f8._8_4_ != local_1f8._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)((longlong)local_1f8 + 0x38);
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_1b8;
        }
        iVar8 = *(int *)((longlong)FVar21 + (ulonglong)(local_1b0 - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            plVar20 = (longlong *)((longlong)iVar8 * 0x20 + local_1f8._0_8_);
            if (*plVar20 == *(longlong *)FVar13) {
              if (plVar20 != (longlong *)0x0) {
                pFVar14 = (FString *)(plVar20 + 1);
                goto LAB_14bfdae77;
              }
              break;
            }
            iVar8 = (int)plVar20[3];
          } while (iVar8 != -1);
        }
      }
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::EmplaceByHash<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_1f8,uVar7,(FName *)FVar13);
LAB_14bfdae77:
      iVar8 = (int)local_230._8_8_ + -1;
      if ((int)local_230._8_8_ == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(pFVar14,(wchar_t *)local_230._0_8_,iVar8);
      if ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      pUVar12 = StaticEnum<enum_EDS_InventoryType>();
      if (pUVar12 == (UEnum *)0x0) {
        ::FString::FString((FString *)local_230,L"");
      }
      else {
        UEnum::GetNameStringByValue(pUVar12,(FString *)local_230,1);
      }
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)local_1f8,(EDS_ItemListData)&local_218);
      uVar4 = *(undefined8 *)FVar13;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
      if (local_1f8._8_4_ != local_1f8._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)((longlong)local_1f8 + 0x38);
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_1b8;
        }
        iVar8 = *(int *)((longlong)FVar21 + (ulonglong)(local_1b0 - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            plVar20 = (longlong *)((longlong)iVar8 * 0x20 + local_1f8._0_8_);
            if (*plVar20 == *(longlong *)FVar13) {
              if (plVar20 != (longlong *)0x0) {
                pFVar14 = (FString *)(plVar20 + 1);
                goto LAB_14bfdaf67;
              }
              break;
            }
            iVar8 = (int)plVar20[3];
          } while (iVar8 != -1);
        }
      }
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::EmplaceByHash<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_1f8,uVar7,(FName *)FVar13);
LAB_14bfdaf67:
      iVar8 = (int)local_230._8_8_ + -1;
      if ((int)local_230._8_8_ == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(pFVar14,(wchar_t *)local_230._0_8_,iVar8);
      if ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      pUVar12 = StaticEnum<enum_EDS_FilterType>();
      if (pUVar12 == (UEnum *)0x0) {
        ::FString::FString((FString *)local_230,L"");
      }
      else {
        UEnum::GetNameStringByValue(pUVar12,(FString *)local_230,0x29);
      }
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)local_1f8,(EDS_ItemListData)&local_218);
      uVar4 = *(undefined8 *)FVar13;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_1f8,(int)((ulonglong)uVar4 >> 0x20) + uVar7,(FName *)FVar13);
      iVar8 = (int)local_230._8_8_ + -1;
      if ((int)local_230._8_8_ == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(pFVar14,(wchar_t *)local_230._0_8_,iVar8);
      if ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      pUVar12 = StaticEnum<enum_EDS_ItemSlotStateType>();
      if (pUVar12 == (UEnum *)0x0) {
        ::FString::FString((FString *)local_230,L"");
      }
      else {
        UEnum::GetNameStringByValue(pUVar12,(FString *)local_230,0xc);
      }
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)local_1f8,(EDS_ItemListData)&local_218);
      uVar4 = *(undefined8 *)FVar13;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
      if (local_1f8._8_4_ != local_1f8._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)((longlong)local_1f8 + 0x38);
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_1b8;
        }
        iVar8 = *(int *)((longlong)FVar21 + (ulonglong)(local_1b0 - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            plVar20 = (longlong *)((longlong)iVar8 * 0x20 + local_1f8._0_8_);
            if (*plVar20 == *(longlong *)FVar13) {
              if (plVar20 != (longlong *)0x0) {
                pFVar14 = (FString *)(plVar20 + 1);
                goto LAB_14bfdb0e7;
              }
              break;
            }
            iVar8 = (int)plVar20[3];
          } while (iVar8 != -1);
        }
      }
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::EmplaceByHash<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_1f8,uVar7,(FName *)FVar13);
LAB_14bfdb0e7:
      iVar8 = (int)local_230._8_8_ + -1;
      if ((int)local_230._8_8_ == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(pFVar14,(wchar_t *)local_230._0_8_,iVar8);
      if ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      EVar3 = this->SortOrder;
      pUVar12 = StaticEnum<enum_EDS_SortOrder>();
      if (pUVar12 == (UEnum *)0x0) {
        ::FString::FString((FString *)local_230,L"");
      }
      else {
        UEnum::GetNameStringByValue(pUVar12,(FString *)local_230,(longlong)(int)EVar3);
      }
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
                         ((FDS_DataContainer *)local_1f8,(EDS_ItemListData)&local_218);
      uVar4 = *(undefined8 *)FVar13;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)local_1f8,(int)((ulonglong)uVar4 >> 0x20) + uVar7,(FName *)FVar13);
      iVar8 = (int)local_230._8_8_ + -1;
      if ((int)local_230._8_8_ == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange(pFVar14,(wchar_t *)local_230._0_8_,iVar8);
      if ((FWeakObjectPtr)local_230._0_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      pUVar15 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar16 = FDS_DataContainer::FDS_DataContainer
                          ((FDS_DataContainer *)&local_158,(FDS_DataContainer *)local_1f8);
      UDS_M_ItemList::InitModel(pUVar15,pFVar16);
      pUVar17 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_ModelBase::AddUpdateModelDelegate(pUVar17,&this->OnEventRingCmdItemSlotDelegate);
      pUVar15 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pTVar18 = UDS_M_ItemList::GetItemModelList(pUVar15);
      iVar8 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
      FVar13 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
      if (pTVar18->ArrayNum == 0) {
        if (this->ListSwitcher != 0) {
          this->ListSwitcher = 0;
          local_218.SharedReferenceCount.ReferenceController._0_4_ = iVar8;
          local_218.Object = (FDS_ViewModelContext *)FVar13;
          (**(code **)(this->_padding_ + 0x38))();
        }
        if (this->ListSwitcher == 1) {
          bVar6 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
          if (!bVar6) {
            pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&pUVar9[1].field_0x18,SelectedItemUID);
            pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            local_230._0_4_ = 0;
            local_230._4_4_ = 0;
            local_208.ObjectIndex = 0;
            local_208.ObjectSerialNumber = 0;
            pcVar5 = *(code **)(*(longlong *)pUVar9 + 0x2e0);
            FWeakObjectPtr::operator=(&local_208,(FObjectPtr)local_230);
            (*pcVar5)(pUVar9,local_208,0);
          }
        }
        else {
          local_238[0] = None;
          TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->RingCmdSlotSelectEvent,local_238,0,false);
        }
        iVar8 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
        FVar13 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
        if (this->EditModeVisibility != Collapsed) {
          this->EditModeVisibility = Collapsed;
          local_218.SharedReferenceCount.ReferenceController._0_4_ = iVar8;
          local_218.Object = (FDS_ViewModelContext *)FVar13;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
        }
        this_01 = (this->ItemListViewModel).field0_0x0.DebugPtr;
        this->EditType = None;
        this->TempRingCommandSlotType = 0;
        this->TempSlotData = 0;
        this->TempInfoID = 0;
        this->TempSlotIndex = 0;
        this->TempSlotDataUID = 0;
        pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        puVar19 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x310))(pUVar9,local_230);
      }
      else {
        pUVar15 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        pTVar18 = UDS_M_ItemList::GetItemModelList(pUVar15);
        pFVar22 = (FWeakObjectPtr *)(pTVar18->AllocatorInstance).Data;
        iVar8 = pTVar18->ArrayNum;
        pFVar1 = pFVar22 + iVar8;
        while( true ) {
          if (pTVar18->ArrayNum != iVar8) {
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_238);
          }
          if (pFVar22 == pFVar1) break;
          local_230._0_8_ = *pFVar22;
          bVar6 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)local_230,
                             (void *)0x0);
          if (!bVar6) {
            FVar13 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)local_230);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar13 != (FName)0x0)) {
              UE::GC::MarkAsReachable((UObject *)FVar13);
            }
            local_208.ObjectIndex = 0;
            local_208.ObjectSerialNumber = 0;
            local_218.Object = (FDS_ViewModelContext *)FVar13;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar13 != (FName)0x0)) {
              UE::GC::MarkAsReachable((UObject *)FVar13);
            }
            FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_218);
            bVar6 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)&local_208,
                               (void *)0x0);
            if (!bVar6) {
              pUVar9 = FWeakObjectPtr::Get(&local_208);
              (**(code **)(*(longlong *)pUVar9 + 0x380))(pUVar9);
              pUVar17 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_208);
              local_200.ObjectIndex = 0;
              local_200.ObjectSerialNumber = 0;
              local_218.Object = (FDS_ViewModelContext *)0x0;
              FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_218);
              UDS_ModelBase::UpdateModel
                        (pUVar17,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_200);
            }
          }
          pFVar22 = pFVar22 + 1;
        }
        this_01 = (this->ItemListViewModel).field0_0x0.DebugPtr;
        pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        puVar19 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x310))(pUVar9,local_230);
      }
      local_218.Object = (FDS_ViewModelContext *)*puVar19;
      local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar19[1]
      ;
      if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_230._8_8_);
      local_160 = 0;
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1a8);
      local_1b0 = 0;
      if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1f8);
    }
  }
  return;
}

// SetListSwitcher @ 14bfdb700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::SetListSwitcher(UDS_VM_W_B_RingCmd_Setting *this,int *param_1)

{
  FName FVar1;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
  if (this->ListSwitcher != *param_1) {
    local_10 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
    this->ListSwitcher = *param_1;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  ResetEditData(this,true);
  return;
}

// SetMenuListEntry @ 14bfdb760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::SetMenuListEntry(UDS_VM_W_B_RingCmd_Setting *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FName FVar7;
  UDS_UserObjectListItem *pUVar8;
  bool bVar9;
  uint uVar10;
  TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FDS_ViewModelContext *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar17;
  ulong64 uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<FSetElementId> FVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  FDS_ViewModelContext *pFVar24;
  EDS_RingCmdType local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  uint local_res20;
  ForAnyElementType local_178;
  uint local_170;
  uint local_16c;
  FWeakObjectPtr local_168;
  undefined8 local_160;
  UDS_VM_W_B_RingCmd_Setting *local_158;
  UDS_VM_W_B_RingCmd_Setting *local_150;
  longlong local_148;
  UDS_UserObjectListItem *local_140;
  UDS_UserObjectListItem *local_138;
  FScriptContainerElement *local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  code *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  code *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  UStruct **local_78;
  FDestructionSentinel local_70;
  FDS_ViewModelContext *local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RingCmdSlotSelectEvent
             ,(FWriteAccessScope *)&local_a8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->RingCmdSlotSelectEvent);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FDS_EntryBindingEventField::Reset(&this->MenuListEnty);
  pTVar11 = FDS_ContentsTotalMenuTableRow::GetAll(&local_c8);
  pFVar20 = (FScriptContainerElement *)0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_16c = 0;
  pFVar22 = (pTVar11->AllocatorInstance).Data;
  pFVar2 = pFVar22 + (longlong)pTVar11->ArrayNum * 8;
  FVar23.Data = pFVar20;
  for (; pFVar22 != pFVar2; pFVar22 = pFVar22 + 8) {
    if ((*(longlong *)pFVar22 != 0) && (*(char *)(*(longlong *)pFVar22 + 0x60) != '\0')) {
      uVar10 = (uint)pFVar20;
      if ((FVar23.Data <= pFVar22) &&
         ((pFVar22 < FVar23.Data + (longlong)(int)local_16c * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), FVar23.Data = local_178.Data, uVar10 = local_170, bVar9)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar10 == local_16c) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_178,(int *)&local_16c);
        FVar23.Data = local_178.Data;
      }
      local_170 = uVar10 + 1;
      *(longlong *)(FVar23.Data + (longlong)(int)uVar10 * 8) = *(longlong *)pFVar22;
      pFVar20 = (FScriptContainerElement *)(ulonglong)local_170;
      FVar23.Data = local_178.Data;
    }
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
    pFVar20 = (FScriptContainerElement *)(ulonglong)local_170;
    FVar23.Data = local_178.Data;
  }
  iVar3 = FFieldNotificationClassDescriptor::ListSwitcher.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::ListSwitcher.FieldName;
  uVar10 = (uint)pFVar20;
  if (uVar10 == 0) {
    plVar1 = &this->_padding_;
    if (this->ListSwitcher != 0) {
      this->ListSwitcher = 0;
      local_120 = iVar3;
      local_128 = FVar7;
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    if (this->ListSwitcher == 1) {
      bVar9 = TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
                        (&this->ItemListModel,(void *)0x0);
      if (!bVar9) {
        pUVar12 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                  ((FDS_DataContainer *)&pUVar12[1].field_0x18,SelectedItemUID);
        pUVar12 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        local_160 = 0;
        local_168.ObjectIndex = 0;
        local_168.ObjectSerialNumber = 0;
        pcVar6 = *(code **)(*(longlong *)pUVar12 + 0x2e0);
        FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
        (*pcVar6)(pUVar12,local_168,0);
      }
    }
    else {
      local_res8[0] = None;
      TMulticastDelegate<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->RingCmdSlotSelectEvent,local_res8,0,false);
    }
    iVar3 = FFieldNotificationClassDescriptor::EditModeVisibility.BitNumber;
    FVar7 = FFieldNotificationClassDescriptor::EditModeVisibility.FieldName;
    if (this->EditModeVisibility != Collapsed) {
      this->EditModeVisibility = Collapsed;
      local_110 = iVar3;
      local_118 = FVar7;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_118);
    }
    this->EditType = None;
    this->TempRingCommandSlotType = 0;
    this->TempSlotData = 0;
    this->TempInfoID = 0;
    this->TempSlotIndex = 0;
    this->TempSlotDataUID = 0;
  }
  else {
    uVar19 = (ulonglong)(int)uVar10;
    local_130 = FVar23.Data + uVar19 * 8;
    local_res20 = uVar10;
    while( true ) {
      pFVar2 = local_130;
      pFVar24 = (FDS_ViewModelContext *)0x0;
      if ((int)pFVar20 != (int)uVar19) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_ContentsTotalMenuTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        pFVar20 = (FScriptContainerElement *)(ulonglong)local_170;
      }
      if (FVar23.Data == pFVar2) break;
      lVar4 = *(longlong *)FVar23.Data;
      local_148 = lVar4;
      if (lVar4 != 0) {
        local_140 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_140 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_140);
        }
        iVar3 = *(int *)(lVar4 + 8);
        if (*(int *)&(this->ResigtedSlotData).Elements.field_0x8 !=
            *(int *)&(this->ResigtedSlotData).Elements.field_0x34) {
          FVar5 = (this->ResigtedSlotData).Hash.SecondaryData;
          FVar21 = (ForElementType<FSetElementId>)&(this->ResigtedSlotData).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar21 = FVar5;
          }
          local_res18 = *(int *)((longlong)FVar21 +
                                (ulonglong)
                                ((this->ResigtedSlotData).HashSize - 1U &
                                ((iVar3 >> 0x1f) * 0x17 + -0x61c885c7 + iVar3 ^ 2U)) * 4);
          if (local_res18 != -1) {
            lVar4 = *(longlong *)&(this->ResigtedSlotData).Elements;
            do {
              lVar13 = (longlong)local_res18;
              if ((*(int *)(lVar4 + lVar13 * 0x18) == 2) &&
                 (*(longlong *)(lVar4 + 8 + lVar13 * 0x18) == (longlong)iVar3)) goto LAB_14bfdbb1d;
              local_res18 = *(int *)(lVar4 + 0x10 + lVar13 * 0x18);
            } while (local_res18 != -1);
          }
        }
        local_res18 = -1;
LAB_14bfdbb1d:
        pFVar14 = ::operator_new(0x68);
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          pFVar14->_padding_ = 0;
          pFVar14->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar14->ViewModelName).ComparisonIndex = 0;
          (pFVar14->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar14->ViewModelTemplateKey = 0;
          pFVar14[1]._padding_ = 0;
          pFVar14[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar14[1].ViewModelName.ComparisonIndex = 0;
          pFVar14[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar14[1].ViewModelTemplateKey = 0;
          pFVar14[2]._padding_ = 0;
          pFVar14[2].DerivedStaticStruct = (UStruct *)0x0;
          pFVar14[2].ViewModelName.ComparisonIndex = 0;
          pFVar14[2].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar14[2].ViewModelTemplateKey = 0;
          pFVar14[3]._padding_ = 0;
          pFVar14->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmdSlotInfo__6B_;
          pFVar24 = pFVar14;
        }
        pTVar15 = ::operator_new(0x20);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar15->SharedReferenceCount = (atomic<int>)0x1;
          pTVar15[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar15->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmdSlotInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar15->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar15[1].SharedReferenceCount = pFVar24;
        }
        if ((pFVar24 == (FDS_ViewModelContext *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar16 = FDS_ViewModelContext_RingCmdSlotInfo::StaticStruct();
        pFVar24->DerivedStaticStruct = (UStruct *)pUVar16;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f8.Object = pFVar24;
          local_f8.SharedReferenceCount.ReferenceController = pTVar15;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        pFVar24->ViewModelTemplateKey = W_RingCommandSlot;
        local_e8 = OnSlotInfoMouseButtonUp;
        uStack_e0 = 0;
        iStack_dc = local_c8.ArrayMax;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar24 + 1),
                   (FWriteAccessScope *)&local_90);
        local_78 = &pFVar24[1].DerivedStaticStruct;
        puVar17 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_78);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          *(undefined1 *)(puVar17 + 1) = 2;
          uVar18 = FDelegateHandle::GenerateNewID();
          puVar17[2] = uVar18;
          *puVar17 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar17[3] = 0;
          local_158 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_158);
          puVar17[4] = local_e8;
          puVar17[5] = CONCAT44(iStack_dc,uStack_e0);
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        uStack_d0 = 0;
        local_d8 = OnSlotInfoListDoubleClicked;
        iStack_cc = local_c8.ArrayMax;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar24[1].ViewModelTemplateKey,(FWriteAccessScope *)&local_70);
        local_58 = pFVar24 + 2;
        puVar17 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_58);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          *(undefined1 *)(puVar17 + 1) = 2;
          uVar18 = FDelegateHandle::GenerateNewID();
          puVar17[2] = uVar18;
          *puVar17 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_RingCmd_Setting____A6AXH_ZUFDefaultDelegateUserPolicy__W4EDS_RingCmdType____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar17[3] = 0;
          local_150 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_150);
          puVar17[4] = local_d8;
          puVar17[5] = CONCAT44(iStack_cc,uStack_d0);
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        pUVar8 = local_140;
        pFVar24[2].ViewModelName = (FName)&this->RingCmdSlotSelectEvent;
        *(undefined4 *)&pFVar24[2].field_0x1c = *(undefined4 *)(local_148 + 8);
        *(undefined1 *)&pFVar24[2].ViewModelTemplateKey = W_Login;
        *(bool *)&pFVar24[3]._padding_ = local_res18 != -1;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8.Object = pFVar24;
        local_b8.SharedReferenceCount.ReferenceController = pTVar15;
        UDS_UserObjectListItem::AddContext(local_140,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        local_138 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FDS_EntryBindingEventField::Add
                  (&this->MenuListEnty,(TObjectPtr<UDS_UserObjectListItem>)&local_138);
        pFVar20 = (FScriptContainerElement *)(ulonglong)local_170;
      }
      uVar19 = (ulonglong)local_res20;
      FVar23.Data = FVar23.Data + 8;
    }
    local_100 = FFieldNotificationClassDescriptor::MenuListEnty.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::MenuListEnty.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// StopOpenAni @ 14bfdead0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::StopOpenAni(UDS_VM_W_B_RingCmd_Setting *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Ani_OpenChange");
  (this->OpenChangeAniEvent).AnimationName = *pFVar1;
  (this->OpenChangeAniEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OpenChangeAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdfb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_RingCmd_Setting::UnbindModel(UDS_VM_W_B_RingCmd_Setting *this)

{
  UDS_RingCommandUIEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar1 != (UDS_RingCommandUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRingCmdDragStateChanged,this);
    return;
  }
  return;
}

// UpdateData @ 14bfe3070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_RingCmd_Setting::UpdateData(UDS_VM_W_B_RingCmd_Setting *this,bool param_1)

{
  TSet<TTuple<int,__int64>,DefaultKeyFuncs<TTuple<int,__int64>,0>,FDefaultSetAllocator> *this_00;
  int iVar1;
  FDS_RingCommandSlotData *pFVar2;
  FName FVar3;
  bool bVar4;
  UObject *pUVar5;
  ForAnyElementType FVar6;
  TSharedPtr<FDS_RingCommandSlotData,1> *pTVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  TTuple<int,__int64> local_res18;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  uint local_48 [2];
  long64 local_40;
  
  bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    (&this->CurrentRingCmdDeckData,(void *)0x0);
  if (!bVar4) {
    this_00 = &this->ResigtedSlotData;
    if (*(int *)&(this->ResigtedSlotData).Elements.field_0x8 !=
        *(int *)&(this->ResigtedSlotData).Elements.field_0x34) {
      TSet<TTuple<int,__int64>,DefaultKeyFuncs<TTuple<int,__int64>,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
      iVar1 = *(int *)&(this->ResigtedSlotData).Elements.field_0xc;
      *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x8 = 0;
      if (iVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->ResigtedSlotData).Elements.field_0xc);
      }
      *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->ResigtedSlotData).Elements.field_0x28 = 0;
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->CurrentRingCmdDeckData).WeakPtr);
    local_58.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)&pUVar5[2].field_0x18;
    pTVar7 = *(TSharedPtr<FDS_RingCommandSlotData,1> **)&pUVar5[2].field_0x10;
    local_50 = iVar1;
    if (iVar1 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_58,iVar1,&local_4c);
      ConstructItems<TSharedPtr<FDS_RingCommandSlotData,1>,TSharedPtr<FDS_RingCommandSlotData,1>,int>
                (local_58.Data,pTVar7,iVar1);
    }
    iVar1 = local_50;
    pTVar7 = (TSharedPtr<FDS_RingCommandSlotData,1> *)(local_58.Data + (longlong)local_50 * 0x10);
    FVar6.Data = local_58.Data;
    while( true ) {
      if (local_50 != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FDS_RingCommandSlotData,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if ((TSharedPtr<FDS_RingCommandSlotData,1> *)FVar6.Data == pTVar7) break;
      pFVar2 = ((TSharedPtr<FDS_RingCommandSlotData,1> *)FVar6.Data)->Object;
      if ((pFVar2 != (FDS_RingCommandSlotData *)0x0) && (pFVar2->SlotType != None)) {
        local_40 = pFVar2->SlotData;
        local_48[0] = (uint)pFVar2->SlotType;
        TSet<TTuple<int,__int64>,DefaultKeyFuncs<TTuple<int,__int64>,0>,FDefaultSetAllocator>::
        Emplace<TTuple<int,__int64>_>(this_00,&local_res18,(bool *)local_48);
      }
      FVar6.Data = FVar6.Data + 0x10;
    }
    if (param_1) {
      iVar1 = this->ListSwitcher;
      if (iVar1 == 1) {
        SetItemListEntry(this);
      }
      else if (iVar1 == 2) {
        SetMenuListEntry(this);
      }
      else if (iVar1 == 3) {
        SetActionListEntry(this);
      }
      iVar1 = FFieldNotificationClassDescriptor::SortOrderSwitcher.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::SortOrderSwitcher.FieldName;
      uVar8 = (uint)(this->SortOrder != Ascend);
      if (this->SortOrderSwitcher != uVar8) {
        this->SortOrderSwitcher = uVar8;
        local_70 = iVar1;
        local_78 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      }
      local_60 = FFieldNotificationClassDescriptor::IsDropDownVis.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::IsDropDownVis.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
              ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_58.Data,local_50);
    if ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_58.Data !=
        (TSharedPtr<FDS_RingCommandSlotData,1> *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

