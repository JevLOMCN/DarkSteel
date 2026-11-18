// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b725430

UClass * __cdecl UDS_VM_W_Common_Coin_ToolTip::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_Coin_ToolTip",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_Coin_ToolTip,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_Coin_ToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_Coin_ToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton;
}

// UDS_VM_W_Common_Coin_ToolTip @ 14b7287b0

UDS_VM_W_Common_Coin_ToolTip * __thiscall
UDS_VM_W_Common_Coin_ToolTip::UDS_VM_W_Common_Coin_ToolTip
          (UDS_VM_W_Common_Coin_ToolTip *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bShowEtcCoins = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Coin_ToolTip__6B_;
  (this->DisplayMoneyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMoneyArray).ArrayNum = 0;
  (this->DisplayMoneyArray).ArrayMax = 0;
  return this;
}

// UDS_VM_W_Common_Coin_ToolTip @ 14b728810

UDS_VM_W_Common_Coin_ToolTip * __thiscall
UDS_VM_W_Common_Coin_ToolTip::UDS_VM_W_Common_Coin_ToolTip
          (UDS_VM_W_Common_Coin_ToolTip *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->bShowEtcCoins = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Coin_ToolTip__6B_;
  (this->DisplayMoneyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayMoneyArray).ArrayNum = 0;
  (this->DisplayMoneyArray).ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_Common_Coin_ToolTip @ 14b7296f0

void __thiscall
UDS_VM_W_Common_Coin_ToolTip::~UDS_VM_W_Common_Coin_ToolTip(UDS_VM_W_Common_Coin_ToolTip *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_Coin_ToolTip__6B_;
  pFVar1 = (this->DisplayMoneyArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72b060

IClassDescriptor * __thiscall
UDS_VM_W_Common_Coin_ToolTip::GetFieldNotificationDescriptor(UDS_VM_W_Common_Coin_ToolTip *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_Coin_ToolTip::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72ba60

UClass * __cdecl UDS_VM_W_Common_Coin_ToolTip::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_Coin_ToolTip",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_Coin_ToolTip,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_Coin_ToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_Coin_ToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_Coin_ToolTip.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_Coin_ToolTip @ 14b72bee0

void __cdecl UDS_VM_W_Common_Coin_ToolTip::StaticRegisterNativesUDS_VM_W_Common_Coin_ToolTip(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Common_Coin_ToolTip_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCurrFrameMoneyData @ 14b72cd80

void __cdecl
UDS_VM_W_Common_Coin_ToolTip::execCurrFrameMoneyData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = CurrFrameMoneyData((UDS_VM_W_Common_Coin_ToolTip *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execIsShowEtcCoins @ 14b72ce00

void __cdecl
UDS_VM_W_Common_Coin_ToolTip::execIsShowEtcCoins(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowEtcCoins((UDS_VM_W_Common_Coin_ToolTip *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execTotalMoneyData @ 14b72d730

void __cdecl
UDS_VM_W_Common_Coin_ToolTip::execTotalMoneyData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TotalMoneyData((UDS_VM_W_Common_Coin_ToolTip *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// CurrFrameMoneyData @ 14bdbb320

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_Common_Coin_ToolTip::CurrFrameMoneyData
          (UDS_VM_W_Common_Coin_ToolTip *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  UObject *pUVar8;
  UDS_UserObjectListItem *pUVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_EntryBindingEventField *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_00;
  atomic<int> *paVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  local_res10 = (this->DisplayMoneyArray).ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  pFVar16 = (this->DisplayMoneyArray).AllocatorInstance.Data;
  local_res20 = pFVar16 + uVar7;
  do {
    pFVar3 = local_res20;
    pFVar14 = (FDS_ViewModelContext *)0x0;
    if ((this->DisplayMoneyArray).ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EDS_MoneyType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar3) {
      return __return_storage_ptr__;
    }
    FVar2 = *pFVar16;
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_UserObjectListItem>(pUVar8);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 == (UDS_UserObjectListItem *)0x0) goto LAB_14bdbb573;
    }
    else {
      if (pUVar9 == (UDS_UserObjectListItem *)0x0) {
LAB_14bdbb573:
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<205780773733662749>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_W_Common_Coin_ToolTip.cpp"
                           ,0x1d,"false");
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        pcVar4 = (code *)swi(3);
        pFVar11 = (FDS_EntryBindingEventField *)(*pcVar4)();
        return pFVar11;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pFVar10 = ::operator_new(0x28);
    pFVar15 = pFVar14;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar10->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar10[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar10[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
      (pFVar10->ViewModelName).ComparisonIndex = 0;
      (pFVar10->ViewModelName).Number = 0;
      pFVar10->ViewModelTemplateKey = None;
      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyData__6B_;
      *(undefined1 *)&pFVar10[1]._padding_ = 0;
      pFVar15 = pFVar10;
    }
    pFVar10 = ::operator_new(0x20);
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar15;
      pFVar14 = pFVar10;
    }
    if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FDS_EntryBindingEventField *)(*pcVar4)();
      return pFVar11;
    }
    pUVar12 = FDS_ViewModelContext_MoneyData::StaticStruct();
    *(UScriptStruct **)&pFVar15->DerivedStaticStruct = pUVar12;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar14 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar14->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar14->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_58.Object = pFVar15;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar15->ViewModelTemplateKey = Data_Money;
    *(FScriptContainerElement *)&pFVar15[1]._padding_ = FVar2;
    if (pFVar14 == (FDS_ViewModelContext *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = (atomic<int> *)&pFVar14->DerivedStaticStruct;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    iVar6 = (pUVar9->ViewModelContextArray).ArrayNum;
    piVar1 = &(pUVar9->ViewModelContextArray).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pUVar9->ViewModelContextArray).AllocatorInstance,piVar1);
    }
    (pUVar9->ViewModelContextArray).ArrayNum = iVar6 + 1;
    pFVar3 = (pUVar9->ViewModelContextArray).AllocatorInstance.Data;
    *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar15;
    *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pFVar14;
    if (pFVar14 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
    local_res18 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
    pFVar16 = pFVar16 + 1;
    uVar7 = (ulonglong)local_res10;
  } while( true );
}

// IsShowEtcCoins @ 14bdc9580

bool __thiscall UDS_VM_W_Common_Coin_ToolTip::IsShowEtcCoins(UDS_VM_W_Common_Coin_ToolTip *this)

{
  return this->bShowEtcCoins;
}

// OnSetViewModel @ 14bdde270

void __thiscall
UDS_VM_W_Common_Coin_ToolTip::OnSetViewModel
          (UDS_VM_W_Common_Coin_ToolTip *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_CommonCoinTooltip,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_CommonCoinTooltip>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_CommonCoinTooltip *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<205780773733662737>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_W_Common_Coin_ToolTip.cpp"
                       ,0x11,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=
              (&this->DisplayMoneyArray,&(local_28.Object)->DisplayMoneyArray);
    this->bShowEtcCoins = (local_28.Object)->bShowEtcCoins;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// TotalMoneyData @ 14bdeb040

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_Common_Coin_ToolTip::TotalMoneyData
          (UDS_VM_W_Common_Coin_ToolTip *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_MoneyData *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *pUVar11;
  FDS_EntryBindingEventField *pFVar12;
  ulonglong uVar13;
  atomic<unsigned_char> *paVar14;
  FScriptContainerElement *pFVar15;
  atomic<int> *paVar16;
  ForAnyElementType FVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  TArray<FDS_MoneyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext_MoneyData,1> local_58;
  
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (this->bShowEtcCoins == true) {
    FDS_MoneyBaseTableRow::GetAll(&local_68);
    uVar13 = (ulonglong)local_68.ArrayNum;
    pFVar15 = local_68.AllocatorInstance.Data + uVar13 * 8;
    local_res10 = local_68.ArrayNum;
    FVar17.Data = local_68.AllocatorInstance.Data;
    local_res20 = pFVar15;
    while( true ) {
      if (local_68.ArrayNum != (uint)uVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_MoneyBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar17.Data == pFVar15) goto LAB_14bdeb28b;
      lVar2 = *(longlong *)FVar17.Data;
      if (lVar2 == 0) break;
      pFVar3 = (this->DisplayMoneyArray).AllocatorInstance.Data;
      if (pFVar3 != pFVar3 + (this->DisplayMoneyArray).ArrayNum) {
        pFVar9 = pFVar3;
        do {
          if (*pFVar9 == *(FScriptContainerElement *)(lVar2 + 8)) {
            if ((int)pFVar9 - (int)pFVar3 != -1) goto LAB_14bdeb23f;
            break;
          }
          pFVar9 = pFVar9 + 1;
        } while (pFVar9 != pFVar3 + (this->DisplayMoneyArray).ArrayNum);
      }
      pUVar10 = GetTransientPackageAsObject();
      pUVar11 = NewObject<UDS_UserObjectListItem>(pUVar10);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar11 == (UDS_UserObjectListItem *)0x0) goto LAB_14bdeb24f;
      }
      else {
        if (pUVar11 == (UDS_UserObjectListItem *)0x0) {
LAB_14bdeb24f:
          iVar8 = 0x3a;
          paVar14 = &bGEnsureHasExecuted<205780773733662778>;
          goto LAB_14bdeb26b;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      MakeContext<FDS_ViewModelContext_MoneyData>(&local_58);
      pFVar5 = local_58.Object;
      if ((local_58.Object == (FDS_ViewModelContext_MoneyData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FDS_EntryBindingEventField *)(*pcVar4)();
        return pFVar12;
      }
      FVar6.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
      *(undefined4 *)&pFVar5->_padding_ = 0x62;
      pFVar5->MoneyType = *(EDS_MoneyType *)(lVar2 + 8);
      if (local_58.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar16 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar16 = &(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
      piVar1 = &(pUVar11->ViewModelContextArray).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar1);
      }
      (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
      pFVar15 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
      *(FDS_ViewModelContext_MoneyData **)(pFVar15 + (longlong)iVar8 * 0x10) = pFVar5;
      *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar8 * 0x10 + 8) =
           FVar6.ReferenceController;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      local_res18 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      pFVar15 = local_res20;
LAB_14bdeb23f:
      uVar13 = (ulonglong)local_res10;
      FVar17.Data = FVar17.Data + 8;
    }
    iVar8 = 0x32;
    paVar14 = &bGEnsureHasExecuted<205780773733662770>;
LAB_14bdeb26b:
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar14,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_W_Common_Coin_ToolTip.cpp"
                       ,iVar8,"false");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FDS_EntryBindingEventField *)(*pcVar4)();
      return pFVar12;
    }
LAB_14bdeb28b:
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

