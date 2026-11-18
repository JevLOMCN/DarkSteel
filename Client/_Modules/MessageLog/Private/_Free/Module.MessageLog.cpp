// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 247

// `dynamic_initializer_for_'CVarDisableMessageLogPopup'' @ 140f47360

void __cdecl _dynamic_initializer_for__CVarDisableMessageLogPopup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableMessageLogPopup,L"MessageLog.DisablePopup",&GDisableMessageLogPopup,
             L"Disables the MessageLog popup",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableMessageLogPopup__);
  return;
}

// `dynamic_initializer_for_'LogMessageLog'' @ 140f473b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMessageLog__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMessageLog,L"LogMessageLog",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMessageLog__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMessageLog'' @ 140f473f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMessageLog__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MessageLog";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MessageLog",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMessageLogModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'TestMessageLogCommand'' @ 140f47440

void __cdecl _dynamic_initializer_for__TestMessageLogCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TestMessages;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TestMessageLogCommand,L"Slate.TestMessageLog",L"",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TestMessageLogCommand__);
  return;
}

// ConstructItems<TSharedPtr<IMessageLogListing,1>,TSharedPtr<IMessageLogListing,1>,int> @ 142bbcaf0

void __cdecl
ConstructItems<TSharedPtr<IMessageLogListing,1>,TSharedPtr<IMessageLogListing,1>,int>
          (void *param_1,TSharedPtr<IMessageLogListing,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMessageLogListing **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<FMessageFilter,1>,TSharedRef<FMessageFilter,1>,int> @ 142bbcb30

void __cdecl
ConstructItems<TSharedRef<FMessageFilter,1>,TSharedRef<FMessageFilter,1>,int>
          (void *param_1,TSharedRef<FMessageFilter,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMessageFilter **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FMessageLogListingViewModel::FOpenNotification,int> @ 142bbd810

void __cdecl
DestructItems<FMessageLogListingViewModel::FOpenNotification,int>
          (FOpenNotification *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->NotificationItem).WeakReferenceCount;
    do {
      if (*(longlong **)(pFVar4 + 1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar4 + 1) + 0x10))();
      }
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IMessageLogListing,1>,int> @ 142bbd870

void __cdecl
DestructItems<TSharedPtr<IMessageLogListing,1>,int>
          (TSharedPtr<IMessageLogListing,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FMessageFilter,1>,int> @ 142bbd8b0

void __cdecl
DestructItems<TSharedRef<FMessageFilter,1>,int>(TSharedRef<FMessageFilter,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHistoricTextFormatData,int> @ 142bbd8f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
DestructItems<FHistoricTextFormatData,int>(FHistoricTextFormatData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->Arguments;
    do {
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)(pTVar3->Pairs).AllocatorInstance.Data,
                 (pTVar3->Pairs).ArrayNum);
      pFVar1 = (pTVar3->Pairs).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((FTextFormat *)(pTVar3 + -1))->TextFormatData).SharedReferenceCount.
                 ReferenceController);
      pIVar2 = (((FHistoricTextFormatData *)(pTVar3 + -2))->FormattedText).TextData.Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pTVar3 = pTVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindObject<UObject> @ 142bbfe50

UObject * __cdecl
FindObject<UObject>(UObject *param_1,TStringView<wchar_t> *param_2,EFindObjectFlags param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  TStringView<wchar_t> local_18;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pUVar2 = StaticFindObject(pUVar1,param_1,&local_18,param_3);
  return pUVar2;
}

// GetTypeHash<FMessageFilter_const_,1> @ 142bbfea0

uint __cdecl GetTypeHash<FMessageFilter_const_,1>(TSharedRef<FMessageFilter_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FTokenizedMessage_const_,1> @ 142bbfed0

uint __cdecl
GetTypeHash<FTokenizedMessage_const_,1>(TSharedRef<FTokenizedMessage_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<IMessageLogListing_const_,1> @ 142bbff00

uint __cdecl
GetTypeHash<IMessageLogListing_const_,1>(TSharedPtr<IMessageLogListing_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,`FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>_>_> @ 142bbff30

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_FMessageLogViewModel::UpdateListingViewModelArray_::__l2::<lambda_1>_>_>
          (TSharedPtr<IMessageLogListing,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_private:_void___cdecl_FMessageLogViewModel::UpdateListingViewModelArray(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  IMessageLogListing *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<IMessageLogListing,1> *pTVar11;
  TSharedPtr<IMessageLogListing,1> *pTVar12;
  int iVar13;
  TSharedPtr<IMessageLogListing,1> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142bc0057:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
            iVar13 = 0;
            pIVar2 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar11->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar11->Object = pIVar2;
            (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::
                          operator()(param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::
                        operator()(param_4.Predicate,pTVar14,pTVar12);
                if (!bVar5) break;
                pIVar2 = pTVar14->Object;
                pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pTVar14->Object = pTVar12->Object;
                (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar12->Object = pIVar2;
                (pTVar12->SharedReferenceCount).ReferenceController = pTVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar12,pTVar11);
    if (!bVar5) goto LAB_142bc0057;
    pIVar2 = pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar11->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar11->Object = pIVar2;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    iVar6 = iVar8;
  } while( true );
}

// IntroSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,`FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>_>_> @ 142bc0160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_FMessageLogViewModel::UpdateListingViewModelArray_::__l2::<lambda_1>_>_>
          (TSharedPtr<IMessageLogListing,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_private:_void___cdecl_FMessageLogViewModel::UpdateListingViewModelArray(void)_::_2_::<lambda_1>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IMessageLogListing *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<IMessageLogListing,1> *pTVar6;
  TSharedPtr<IMessageLogListing,1> *pTVar7;
  TSharedPtr<IMessageLogListing,1> *pTVar8;
  TSharedPtr<IMessageLogListing,1> **ppTVar9;
  int iVar10;
  TSharedPtr<IMessageLogListing,1> *pTVar11;
  TSharedPtr<IMessageLogListing,1> *pTVar12;
  TSharedPtr<IMessageLogListing,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<IMessageLogListing,1> *local_358;
  TSharedPtr<IMessageLogListing,1> *local_348;
  TSharedPtr<IMessageLogListing,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142bc0220:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pIVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pIVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_142bc0250:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x000142bc0259;
          goto LAB_142bc0270;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::
                    operator()(param_4.Predicate,pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pIVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pIVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_142bc033f;
      }
LAB_142bc032e:
      HeapSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_FMessageLogViewModel::UpdateListingViewModelArray_::__l2::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_142bc033f:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000142bc0259:
  bVar4 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pTVar11,pTVar12);
  if (!bVar4) goto LAB_142bc0250;
LAB_142bc0270:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = `FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pIVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pIVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_142bc0250;
  }
  pIVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pIVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_142bc033f;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_142bc033f;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_142bc032e;
  goto LAB_142bc0220;
}

// MakeRequiredArgs<TSharedRef<FMessageLogViewModel,1>_&> @ 142bc0440

T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>
          (TSharedRef<FMessageLogViewModel,1> *param_1)

{
  FMessageLogViewModel *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<IMessageLogListing,1>_const_&> @ 142bc0450

T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>
          (TSharedRef<IMessageLogListing,1> *param_1)

{
  IMessageLogListing *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_> @ 142bc0460

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *param_1)

{
  SListView<TSharedPtr<IMessageLogListing,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_> @ 142bc0470

T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_>
          (TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1> *param_1)

{
  SListView<TSharedRef<FMessageFilter,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_> @ 142bc0480

T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_>
          (TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *param_1)

{
  SListView<TSharedRef<FTokenizedMessage,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_> @ 142bc0490

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FTokenizedMessage,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_> @ 142bc04a0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<IMessageLogListing,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_> @ 142bc04b0

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_>
          (TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *param_1)

{
  STableRow<TSharedRef<FMessageFilter,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_> @ 142bc04c0

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_>
          (TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1> *param_1)

{
  STableRow<TSharedRef<FTokenizedMessage,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<IMessageLogListing,1>_> @ 142bc04d0

T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<IMessageLogListing,1>_>
          (TSharedRef<IMessageLogListing,1> *param_1)

{
  IMessageLogListing *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&> @ 142bc04e0

T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&> * __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&>
          (T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>
           *__return_storage_ptr__,TSharedRef<IMessageLogListing,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeShared<STableRow<TSharedRef<FMessageFilter,1>_>,1> @ 142bc0500

TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedRef<FMessageFilter,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef_VFMessageFilter___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ =
         (longlong)&STableRow<TSharedRef<FMessageFilter,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedRef<FMessageFilter,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>::
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>
            (__return_storage_ptr__,(STableRow<TSharedRef<FMessageFilter,1>_> *)(pTVar2 + 1),pTVar2)
  ;
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs> @ 142bc0670

TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs> @ 142bc0720

TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs> @ 142bc07d0

TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_> @ 142bc0880

TSlateDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VIMessageLogListing___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<IMessageLogListing,1>_>::STableRow<TSharedPtr<IMessageLogListing,1>_>
              ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<IMessageLogListing,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<IMessageLogListing,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_> @ 142bc0a30

TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<FMessageFilter,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<FMessageFilter,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142bc0b90

TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<FMessageFilter,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<FMessageFilter,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_> @ 142bc0cf0

TSlateDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
  ::
  TSlateDecl<STableRow<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_> @ 142bc0da0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTokenizedMessage,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_> @ 142bc0e50

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_> @ 142bc0f00

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_> @ 142bc0fb0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> @ 142bc1060

TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_> @ 142bc1110

TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_> *
__cdecl MakeTDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>
                  (TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>::
  TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_> @ 142bc11c0

TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMessageLogCategoryListRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x478);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSMessageLogCategoryListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x468);
    STableRow<TSharedPtr<IMessageLogListing,1>_>::STableRow<TSharedPtr<IMessageLogListing,1>_>
              ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SMessageLogCategoryListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SMessageLogCategoryListRow::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SMessageLogCategoryListRow,1>::TSharedRef<SMessageLogCategoryListRow,1>
            ((TSharedRef<SMessageLogCategoryListRow,1> *)(local_48 + 0x10),
             (SMessageLogCategoryListRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SMessageLogCategoryListRow *)local_48._16_8_;
    local_48._0_8_ = (SMessageLogCategoryListRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SMessageLogCategoryListRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x468);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_> @ 142bc13f0

TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_> *
__cdecl MakeTDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
                  (TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
  ::
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_> @ 142bc14a0

TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
* __cdecl MakeTDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
                    (TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
  ::
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142bc1550

TSlateDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMessageLogMessageListRow *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x448);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSMessageLogMessageListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x438);
    STableRow<TSharedPtr<FTokenizedMessage,1>_>::STableRow<TSharedPtr<FTokenizedMessage,1>_>
              ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SMessageLogMessageListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SMessageLogMessageListRow::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x42].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SMessageLogMessageListRow,1>::TSharedRef<SMessageLogMessageListRow,1>
            ((TSharedRef<SMessageLogMessageListRow,1> *)(local_48 + 0x10),
             (SMessageLogMessageListRow *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SMessageLogMessageListRow *)local_48._16_8_;
    local_48._0_8_ = (SMessageLogMessageListRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SMessageLogMessageListRow *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SMessageLogMessageListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x438);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_> @ 142bc1760

TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                    (TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
  ::
  TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,SMessageLogListing> @ 142bc1810

TIntrusiveReferenceController<SMessageLogListing,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SMessageLogListing>(void)

{
  TIntrusiveReferenceController<SMessageLogListing,1> *pTVar1;
  FUICommandList *pFVar2;
  TRawPtrProxy<FUICommandList> local_res8;
  
  pTVar1 = ::operator_new(0x2f0);
  if (pTVar1 == (TIntrusiveReferenceController<SMessageLogListing,1> *)0x0) {
    return (TIntrusiveReferenceController<SMessageLogListing,1> *)0x0;
  }
  *(undefined4 *)&pTVar1->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
  pTVar1->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VSMessageLogListing___00_SharedPointerInternals__6B_;
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
  *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7SMessageLogListing__6B_;
  pFVar2 = ::operator_new(0x140);
  local_res8.Object = (FUICommandList *)0x0;
  if (pFVar2 != (FUICommandList *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FUICommandList__6B_;
    *(undefined8 *)&(pFVar2->ContextsInList).Elements = 0;
    *(undefined8 *)&(pFVar2->ContextsInList).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar2->ContextsInList).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar2->ContextsInList).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->ContextsInList).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->ContextsInList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->ContextsInList).Elements.field_0x34 = 0;
    (pFVar2->ContextsInList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->ContextsInList).HashSize = 0;
    *(undefined8 *)&pFVar2->UICommandBindingMap = 0;
    *(undefined8 *)&(pFVar2->UICommandBindingMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->UICommandBindingMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->UICommandBindingMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->UICommandBindingMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->UICommandBindingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->UICommandBindingMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->UICommandBindingMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->UICommandBindingMap).field_0x48 = 0;
    *(undefined8 *)&pFVar2->UICommandContextMap = 0;
    *(undefined8 *)&(pFVar2->UICommandContextMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->UICommandContextMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->UICommandContextMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->UICommandContextMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->UICommandContextMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->UICommandContextMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->UICommandContextMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->UICommandContextMap).field_0x48 = 0;
    (pFVar2->ParentUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->ParentUICommandLists).ArrayNum = 0;
    (pFVar2->ParentUICommandLists).ArrayMax = 0;
    (pFVar2->ChildUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->ChildUICommandLists).ArrayNum = 0;
    (pFVar2->ChildUICommandLists).ArrayMax = 0;
    *(undefined8 *)&pFVar2->CanProduceActionForCommand = 0;
    *(undefined8 *)&(pFVar2->CanProduceActionForCommand).field_0x8 = 0;
    *(undefined4 *)&(pFVar2->CanProduceActionForCommand).field_0x10 = 0;
    local_res8.Object = pFVar2;
  }
  TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1><FUICommandList>
            ((TSharedRef<FUICommandList,1> *)((pTVar1->ObjectStorage).Pad + 0x2a8),&local_res8);
  (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2b9] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2ba] = '\0';
  (pTVar1->ObjectStorage).Pad[699] = '\0';
  (pTVar1->ObjectStorage).Pad[700] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2bd] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2be] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2bf] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d8] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2d9] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2da] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2db] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2dd] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2de] = '\0';
  (pTVar1->ObjectStorage).Pad[0x2df] = '\0';
  return pTVar1;
}

// OnNavigate_Lambda<`SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>_> @ 142bc2280

FArguments * __thiscall
SHyperlink::FArguments::
OnNavigate_Lambda<_SMessageLogMessageListRow::CreateMessage_::__l42::<lambda_1>_>
          (FArguments *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnNavigate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnNavigate).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SMessageLogMessageListRow::CreateMessage'::`42'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = 0;
    puVar1[3] = (param_1->FileName).Data.AllocatorInstance.Data;
    (param_1->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar1 + 4) = (param_1->FileName).Data.ArrayNum;
    *(int *)((longlong)puVar1 + 0x24) = (param_1->FileName).Data.ArrayMax;
    (param_1->FileName).Data.ArrayNum = 0;
    (param_1->FileName).Data.ArrayMax = 0;
    *(int *)(puVar1 + 5) = param_1->LineNumber;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// T0RequiredArgs @ 142bc8a90

T0RequiredArgs * __thiscall RequiredArgs::T0RequiredArgs::T0RequiredArgs(T0RequiredArgs *this)

{
  return this;
}

// ~TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0> @ 142bca890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0>::
~TFunction_OwnedObject<_SMessageLogMessageListRow::CreateMessage_::__l54::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_2>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0> @ 142bca8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0>::
~TFunction_OwnedObject<_SMessageLogMessageListRow::CreateMessage_::__l54::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_3>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator[] @ 142bce770

FArguments * __thiscall
NamedSlotProperty<SButton::FArguments>::operator[]
          (NamedSlotProperty<SButton::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// `vcall'{152,{flat}}'_}' @ 142bd1d30

/* [thunk]: __cdecl STableRow<class TSharedPtr<class FTokenizedMessage,1> >::`vcall'{152,{flat}}' }'
    */

void __thiscall
STableRow<TSharedPtr<FTokenizedMessage,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FTokenizedMessage,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142bd1d40

/* [thunk]: __cdecl STableRow<class TSharedPtr<class IMessageLogListing,1> >::`vcall'{152,{flat}}'
   }' */

void __thiscall
STableRow<TSharedPtr<IMessageLogListing,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<IMessageLogListing,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142bd1d50

/* [thunk]: __cdecl STableRow<class TSharedRef<class FMessageFilter,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedRef<FMessageFilter,1>_>::_vcall__152__flat______
          (STableRow<TSharedRef<FMessageFilter,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142bd1d60

/* [thunk]: __cdecl STableRow<class TSharedRef<class FTokenizedMessage,1> >::`vcall'{152,{flat}}' }'
    */

void __thiscall
STableRow<TSharedRef<FTokenizedMessage,1>_>::_vcall__152__flat______
          (STableRow<TSharedRef<FTokenizedMessage,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 142bd1d70

/* [thunk]: __cdecl FMessageFilter::`vcall'{8,{flat}}' }' */

void __thiscall FMessageFilter::_vcall__8__flat______(FMessageFilter *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 142bd1d7c

/* [thunk]: __cdecl FMessageFilter::`vcall'{16,{flat}}' }' */

void __thiscall FMessageFilter::_vcall__16__flat______(FMessageFilter *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// `vcall'{232,{flat}}'_}' @ 142bd1d88

/* [thunk]: __cdecl FMessageLogListingViewModel::`vcall'{232,{flat}}' }' */

void __thiscall
FMessageLogListingViewModel::_vcall__232__flat______(FMessageLogListingViewModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe8))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 142bd1d98

/* [thunk]: __cdecl FMessageLogViewModel::`vcall'{16,{flat}}' }' */

void __thiscall FMessageLogViewModel::_vcall__16__flat______(FMessageLogViewModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bd1d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142bd1da4

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<class
   IMessageLogListing,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<IMessageLogListing,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<IMessageLogListing,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142bd1db8

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<class FMessageFilter,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedRef<FMessageFilter,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<FMessageFilter,1>_> *)&this[-1].OnGenerateRow.field_0x10
                      ,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142bd1dcc

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<class
   FTokenizedMessage,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedRef<FTokenizedMessage,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<FTokenizedMessage,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1de0

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<class
   IMessageLogListing,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>::_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1df0

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class
   FTokenizedMessage,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FTokenizedMessage,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FTokenizedMessage,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1e00

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class
   IMessageLogListing,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<IMessageLogListing,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1e10

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<class FMessageFilter,1>
   >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedRef<FMessageFilter,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<FMessageFilter,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1e20

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<class
   FTokenizedMessage,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedRef<FTokenizedMessage,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<FTokenizedMessage,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1e30

/* [thunk]:public: virtual void * __ptr64 __cdecl SMessageLogCategoryListRow::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMessageLogCategoryListRow::_vector_deleting_destructor__adjustor_8__
          (SMessageLogCategoryListRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMessageLogCategoryListRow *)&this[-1].LogListing.SharedReferenceCount,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142bd1e40

/* [thunk]:public: virtual void * __ptr64 __cdecl SMessageLogMessageListRow::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMessageLogMessageListRow::_vector_deleting_destructor__adjustor_8__
          (SMessageLogMessageListRow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMessageLogMessageListRow *)&this[-1].OnMessageDoubleClicked.field_0x10,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142bd1e50

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<IMessageLogListing,1>_>::
_scalar_deleting_destructor_(FArrayPointer<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd1e80

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FMessageFilter,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd1eb0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FTokenizedMessage,1>_>::
_scalar_deleting_destructor_(FArrayPointer<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd1ee0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<IMessageLogListing,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_VIMessageLogListing___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd1fa0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FMessageFilter,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedRef_VFMessageFilter___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2060

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FTokenizedMessage,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_VFTokenizedMessage___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2120

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<IMessageLogListing,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_VIMessageLogListing___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd21b0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FMessageFilter,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedRef_VFMessageFilter___00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2240

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FTokenizedMessage,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_VFTokenizedMessage___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd22d0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2300

void * __thiscall
IBaseDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2330

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2360

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2390

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd23c0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd23f0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2420

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2450

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2480

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd24b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd24e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2510

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2540

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2570

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd25a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd25d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2600

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<IMessageLogListing,1>_>::
_scalar_deleting_destructor_(IItemsSource<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2630

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedRef<FMessageFilter,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2660

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedRef<FTokenizedMessage,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2690

void * __thiscall
SListView<TSharedPtr<IMessageLogListing,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<IMessageLogListing,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd26f0

void * __thiscall
SListView<TSharedRef<FMessageFilter,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  ~SListView<TSharedRef<FMessageFilter,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2750

void * __thiscall
SListView<TSharedRef<FTokenizedMessage,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  ~SListView<TSharedRef<FTokenizedMessage,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd27b0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<IMessageLogListing,1>_>::~STableRow<TSharedPtr<IMessageLogListing,1>_>
            ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2850

void * __thiscall
STableRow<TSharedPtr<FTokenizedMessage,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FTokenizedMessage,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FTokenizedMessage,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd28b0

void * __thiscall
STableRow<TSharedPtr<IMessageLogListing,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<IMessageLogListing,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2910

void * __thiscall
STableRow<TSharedRef<FMessageFilter,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  ~STableRow<TSharedRef<FMessageFilter,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2970

void * __thiscall
STableRow<TSharedRef<FTokenizedMessage,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  ~STableRow<TSharedRef<FTokenizedMessage,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd29d0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2a00

void * __thiscall
TBaseFunctorDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateBrush_const_*___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateBrush_const_*___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2a60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2ab0

void * __thiscall
TBaseRawMethodDelegateInstance<1,SMessageLogListing_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SMessageLogListing_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2ae0

void * __thiscall
TBaseRawMethodDelegateInstance<1,SMessageLogListing_const_,void___cdecl(void),FDefaultDelegateUserPolicy,wchar_t_const_*>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SMessageLogListing_const_,void___cdecl(void),FDefaultDelegateUserPolicy,wchar_t_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2b10

void * __thiscall
TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2b50

void * __thiscall
TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2b90

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<IMessageLogListing,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<IMessageLogListing,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2bc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FMessageFilter,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FMessageFilter,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2bf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FTokenizedMessage,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FTokenizedMessage,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2c20

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<IMessageLogListing,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<IMessageLogListing,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2c50

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FMessageFilter,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FMessageFilter,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2c80

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FTokenizedMessage,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FTokenizedMessage,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2cb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageLogListingViewModel,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageLogListingViewModel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2ce0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2d50

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2db0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2e10

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2e70

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<IMessageLogListing,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2ed0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2f30

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FMessageFilter,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2f90

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd2ff0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<FTokenizedMessage,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3050

void * __thiscall
TBaseSPMethodDelegateInstance<1,FMessageFilter_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd30b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3110

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogCategoryListRow_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3170

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd31d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3230

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3290

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd32f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMessageLogListing_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3350

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<IMessageLogListing,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd33b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageFilter,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3410

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3470

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FMessageLogListingViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd34d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FMessageLogViewModel,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3530

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3590

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd35f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLog,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3650

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd36b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3710

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3770

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd37d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3830

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3890

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd38f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3950

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd39b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogListing,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3a10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3a80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3af0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMessageLogMessageListRow,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3b60

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3b90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3bd0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3c00

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3c30

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3c60

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3ca0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3cd0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3d00

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3d30

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3d60

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3d90

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,TSharedRef<FMessageLogViewModel,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3dd0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3e10

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3e40

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3e70

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3ea0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3ed0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<IMessageLogListing,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3f00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FMessageFilter,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3f30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FTokenizedMessage,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3f60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3f90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3fc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd3ff0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4020

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4050

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4080

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,wchar_t_const_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,wchar_t_const_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd40b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd40f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4130

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4170

void * __thiscall
TDoubleLinkedList<FMessageLogListingModel::FPage>::_scalar_deleting_destructor_
          (TDoubleLinkedList<FMessageLogListingModel::FPage> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_UFPage_FMessageLogListingModel____6B_;
  Empty(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd41c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_2>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_3>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4260

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd42a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedRef<FMessageFilter,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedRef<FMessageFilter,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd42e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedRef<FTokenizedMessage,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4320

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<IMessageLogListing,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4360

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedRef<FMessageFilter,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<FMessageFilter,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd43a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<FTokenizedMessage,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd43e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4420

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FMessageFilter,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FMessageFilter,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4460

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd44a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeaderRow,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SHeaderRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd44e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLog,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMessageLog,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4520

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogCategoryListRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMessageLogCategoryListRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogListing,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SMessageLogListing,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd45a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogMessageListRow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMessageLogMessageListRow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x448);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd45e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBorder,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScrollBorder,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4620

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageFilter,SharedPointerInternals::DefaultDeleter<FMessageFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageFilter,SharedPointerInternals::DefaultDeleter<FMessageFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4660

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageLogListingModel,SharedPointerInternals::DefaultDeleter<FMessageLogListingModel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageLogListingModel,SharedPointerInternals::DefaultDeleter<FMessageLogListingModel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd46a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageLogListingViewModel,SharedPointerInternals::DefaultDeleter<FMessageLogListingViewModel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageLogListingViewModel,SharedPointerInternals::DefaultDeleter<FMessageLogListingViewModel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd46e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageLogModel,SharedPointerInternals::DefaultDeleter<FMessageLogModel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageLogModel,SharedPointerInternals::DefaultDeleter<FMessageLogModel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4720

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageLogViewModel,SharedPointerInternals::DefaultDeleter<FMessageLogViewModel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageLogViewModel,SharedPointerInternals::DefaultDeleter<FMessageLogViewModel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4760

void * __thiscall
TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd47d0

void * __thiscall
TTableViewMetadata<TSharedRef<FMessageFilter,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<FMessageFilter,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4840

void * __thiscall
TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd48b0

void * __thiscall FMessageFilter::_scalar_deleting_destructor_(FMessageFilter *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FMessageFilter__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RefreshCallback).field_0x8,*(int *)&(this->RefreshCallback).field_0x10);
  pvVar3 = *(void **)&(this->RefreshCallback).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefreshCallback);
  pIVar4 = (this->Name).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4950

void * __thiscall
FMessageLogListingModel::_scalar_deleting_destructor_(FMessageLogListingModel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FMessageLogListingModel__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  (this->Pages)._padding_ = (longlong)&___7__TDoubleLinkedList_UFPage_FMessageLogListingModel____6B_
  ;
  TDoubleLinkedList<FMessageLogListingModel::FPage>::Empty(&this->Pages);
  pIVar4 = (this->PendingPageName).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4a10

void * __thiscall
FMessageLogListingViewModel::_scalar_deleting_destructor_
          (FMessageLogListingViewModel *this,uint param_1)

{
  ~FMessageLogListingViewModel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4a50

void * __thiscall
FMessageLogModel::_scalar_deleting_destructor_(FMessageLogModel *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FMessageLogModel__6B_;
  if (*(int *)&(this->NameToModelMap).field_0x8 != *(int *)&(this->NameToModelMap).field_0x34) {
    bVar4 = 1 < *(int *)&(this->NameToModelMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                        *)&this->NameToModelMap);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->NameToModelMap,0,*(int *)&(this->NameToModelMap).field_0x8);
    puVar1 = &(this->NameToModelMap).field_0xc;
    *(undefined4 *)&(this->NameToModelMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&this->NameToModelMap,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->NameToModelMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NameToModelMap).field_0x34 = 0;
    iVar2 = *(int *)&(this->NameToModelMap).field_0x2c;
    *(undefined4 *)&(this->NameToModelMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->NameToModelMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NameToModelMap).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->NameToModelMap).field_0x48 = 1;
      TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                *)&this->NameToModelMap);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->ChangedEvent);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  *(undefined4 *)&(this->NameToModelMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameToModelMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToModelMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4bb0

void * __thiscall
FMessageLogModule::_scalar_deleting_destructor_(FMessageLogModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLogViewModel).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4c00

void * __thiscall
FMessageLogViewModel::_scalar_deleting_destructor_(FMessageLogViewModel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)&___7FMessageLogViewModel__6B_;
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageLogModel.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x13,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->MessageLogModel).Object)->ChangedEvent,this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectionChangedEvent).field_0x8,
             *(int *)&(this->SelectionChangedEvent).field_0x10);
  pvVar7 = *(void **)&(this->SelectionChangedEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar7 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageLogListing,1>,int>
            ((TSharedPtr<IMessageLogListing,1> *)(this->ViewModelArray).AllocatorInstance.Data,
             (this->ViewModelArray).ArrayNum);
  pFVar3 = (this->ViewModelArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->NameToViewModelMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->NameToViewModelMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToViewModelMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLogModel).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4d90

void * __thiscall
SListView<TSharedPtr<IMessageLogListing,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4dd0

void * __thiscall
SListView<TSharedRef<FMessageFilter,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4e10

void * __thiscall
SListView<TSharedRef<FTokenizedMessage,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4e50

void * __thiscall
STableRow<TSharedPtr<FTokenizedMessage,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4e90

void * __thiscall
STableRow<TSharedPtr<IMessageLogListing,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4ed0

void * __thiscall
STableRow<TSharedRef<FMessageFilter,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4f10

void * __thiscall
STableRow<TSharedRef<FTokenizedMessage,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4f50

void * __thiscall
IMessageLogListing::_scalar_deleting_destructor_(IMessageLogListing *this,uint param_1)

{
  *this = (IMessageLogListing)&___7IMessageLog__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4f90

void * __thiscall SHeaderRow::_scalar_deleting_destructor_(SHeaderRow *this,uint param_1)

{
  ~SHeaderRow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd4ff0

void * __thiscall SMessageLog::_scalar_deleting_destructor_(SMessageLog *this,uint param_1)

{
  ~SMessageLog(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd5050

void * __thiscall
SMessageLogCategoryListRow::_scalar_deleting_destructor_
          (SMessageLogCategoryListRow *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LogListing).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<IMessageLogListing,1>_>::~STableRow<TSharedPtr<IMessageLogListing,1>_>
            ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x468);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd5100

void * __thiscall
SMessageLogListing::_scalar_deleting_destructor_(SMessageLogListing *this,uint param_1)

{
  ~SMessageLogListing(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd5160

void * __thiscall
SMessageLogMessageListRow::_scalar_deleting_destructor_
          (SMessageLogMessageListRow *this,uint param_1)

{
  ~SMessageLogMessageListRow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142bd51c0

void * __thiscall
TDoubleLinkedList<FMessageLogListingModel::FPage>::TDoubleLinkedListNode::
_scalar_deleting_destructor_(TDoubleLinkedListNode *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  (this->Value).MessagesHashes.HashSize = 0;
  FVar1 = (this->Value).MessagesHashes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Value).MessagesHashes.Elements);
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->Value).Messages.AllocatorInstance.Data,
             (this->Value).Messages.ArrayNum);
  pFVar2 = (this->Value).Messages.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Value).Title.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// ActivateMessageToken @ 142bd5250

void __cdecl ActivateMessageToken(TSharedRef<FTokenizedMessage,1> *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  atomic<unsigned___int64> aVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  
  pTVar5 = FTokenizedMessage::GetMessageTokens(param_1->Object);
  iVar1 = pTVar5->ArrayNum;
  pFVar7 = (pTVar5->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if (pTVar5->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<IMessageToken,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    uVar4 = (**(code **)(**(longlong **)pFVar7 + 8))();
    if ((uVar4 < 7) && ((0x4aU >> (uVar4 & 0x1f) & 1) != 0)) {
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (**(code **)(**(longlong **)pFVar7 + 0x18))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_48);
      if ((*(int *)&this[2].AccessDetector.State == 0) ||
         ((aVar6 = this[1].AccessDetector.State, aVar6 == (atomic<unsigned___int64>)0x0 ||
          (cVar3 = (**(code **)(*(longlong *)aVar6 + 0x38))(), cVar3 == '\0')))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (bVar2) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_48);
        if (*(int *)&this[2].AccessDetector.State == 0) {
          aVar6 = (atomic<unsigned___int64>)0x0;
        }
        else {
          aVar6 = this[1].AccessDetector.State;
        }
        (**(code **)(*(longlong *)aVar6 + 0x60))(aVar6,pFVar7);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        return;
      }
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// GetLog @ 142bfd630

TSharedRef<IMessageLog,1> * __cdecl
GetLog(TSharedRef<IMessageLog,1> *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  undefined8 *puVar5;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar3 = FName::FName(&local_res8,"MessageLog");
  FVar1 = *pFVar3;
  this = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this,FVar1);
  puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 0x58))(pIVar4,local_18,param_1);
  __return_storage_ptr__->Object = (IMessageLog *)*puVar5;
  pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetSourceStringFromMessage @ 142c01580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __cdecl
GetSourceStringFromMessage
          (FString *__return_storage_ptr__,
          TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FFormatArgumentValue *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  FString::Empty(param_3);
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
  do {
    if (pFVar10 == pFVar9) {
LAB_142c01795:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    iVar5 = (**(code **)(**(longlong **)pFVar10 + 8))();
    if (iVar5 == 8) {
      pFVar6 = (FText *)(**(code **)(**(longlong **)pFVar10 + 0x10))();
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      FTextInspector::GetHistoricFormatData(pFVar6,&local_38);
      FVar3.Data = local_38.AllocatorInstance.Data;
      if (0 < local_38.ArrayNum) {
        if (param_2 != (wchar_t *)0x0) {
          FString::FString(&local_28,param_2);
          pFVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                   ::Find((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                           *)(FVar3.Data + 0x20),&local_28);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (pFVar7 != (FFormatArgumentValue *)0x0) {
            if ((pFVar7->Type != Text) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("Type == EFormatArgumentType::Text",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                                   ,0x40a,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar2)();
              return pFVar8;
            }
            if (((pFVar7->TextValue).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar2)();
              return pFVar8;
            }
            pFVar8 = FText::ToString((FText *)&pFVar7->TextValue);
            if (param_3 != pFVar8) {
              iVar5 = (pFVar8->Data).ArrayNum;
              piVar1 = &(param_3->Data).ArrayMax;
              pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
              (param_3->Data).ArrayNum = iVar5;
              if ((iVar5 == 0) && (*piVar1 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar5,*piVar1,(ForAnyElementType *)param_3,iVar5,piVar1);
                if (iVar5 != 0) {
                  memcpy((param_3->Data).AllocatorInstance.Data,pFVar10,(longlong)iVar5 * 2);
                }
              }
            }
          }
        }
        if ((local_38.ArrayNum < 1) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar2)();
          return pFVar8;
        }
        pFVar8 = FTextFormat::GetSourceString
                           ((FTextFormat *)(local_38.AllocatorInstance.Data + 0x10));
        FString::FString(__return_storage_ptr__,pFVar8);
        DestructItems<FHistoricTextFormatData,int>
                  ((FHistoricTextFormatData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        if ((FHistoricTextFormatData *)local_38.AllocatorInstance.Data ==
            (FHistoricTextFormatData *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_38.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      DestructItems<FHistoricTextFormatData,int>
                ((FHistoricTextFormatData *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if ((FHistoricTextFormatData *)local_38.AllocatorInstance.Data !=
          (FHistoricTextFormatData *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      goto LAB_142c01795;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// SpawnMessageLog @ 142c27b80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnMessageLog(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1,
               TSharedRef<FMessageLogViewModel,1> *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  SMessageLog *pSVar3;
  FSharedReferencer<1> FVar4;
  SDockTab *pSVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  FSlateBaseNamedArgs *pFVar10;
  TSharedRef<SDockTab,1> *pTVar11;
  T0RequiredArgs local_res8 [16];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FLLMScope local_6d8 [2];
  TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>
  local_6d0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6b8;
  FName local_6a0;
  T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&> local_698;
  FMemScope local_690;
  FName local_688;
  FMemScope local_680;
  FMemScope local_678;
  SWidget *local_670;
  TReferenceControllerBase<1> *pTStack_668;
  FSlateBaseNamedArgs local_660;
  FArguments local_468;
  
  FLLMScope::FLLMScope(local_6d8,UI,false,None,Default,true);
  FMemScope::FMemScope(&local_678,UI,true);
  pFVar9 = SDockTab::FArguments::FArguments(&local_468);
  pFVar9->_TabRole = NomadTab;
  pFVar10 = (FSlateBaseNamedArgs *)SMessageLog::FArguments::FArguments((FArguments *)&local_660);
  local_698.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_690,&local_6a0,true);
  TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>::
  TSlateDecl<SMessageLog,RequiredArgs::T1RequiredArgs<TSharedRef<FMessageLogViewModel,1>_&>_>
            (&local_6d0,"SMessageLog",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\MessageLogModule.cpp"
             ,0x2a,&local_698);
  FMemScope::~FMemScope(&local_690);
  FLLMScope::~FLLMScope(local_res18);
  pSVar3 = local_6d0._Widget.Object;
  if (local_6d0._Widget.Object == (SMessageLog *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_6d0._Widget.Object,pFVar10);
  SMessageLog::Construct
            (local_6d0._Widget.Object,(FArguments *)pFVar10,(local_6d0._RequiredArgs)->Arg0);
  if (local_6d0._Widget.Object == (SMessageLog *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_6d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_6d0._Widget.Object)->_padding_ + 0x228))(local_6d0._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_142c27d09;
  }
  else {
LAB_142c27d09:
    bVar8 = 0x20;
  }
  *(byte *)&(local_6d0._Widget.Object)->_padding_ =
       (byte)(local_6d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_6d0._Widget.Object)->_padding_ =
       (byte)(local_6d0._Widget.Object)->_padding_ | bVar8;
  if (local_6d0._Widget.Object == (SMessageLog *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_6d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_6d0._Widget.Object == (SMessageLog *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_6d0._Widget.SharedReferenceCount.ReferenceController;
  local_6d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_6d0._Widget.Object = (SMessageLog *)0x0;
  if (pSVar3 == (SMessageLog *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_670 = (pFVar9->_Content).Widget.Object;
  pTStack_668 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_668);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_680,&local_688,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_6b8,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\MessageLogModule.cpp"
             ,0x27,local_res8);
  FMemScope::~FMemScope(&local_680);
  FLLMScope::~FLLMScope(local_res20);
  pSVar5 = local_6b8._Widget.Object;
  if (local_6b8._Widget.Object == (SDockTab *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_6b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SDockTab::Construct(local_6b8._Widget.Object,pFVar9);
  if (local_6b8._Widget.Object == (SDockTab *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_6b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_6b8._Widget.Object)->_padding_ + 0x228))(local_6b8._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_142c27ef0;
  }
  bVar8 = 0x20;
LAB_142c27ef0:
  *(byte *)&(local_6b8._Widget.Object)->_padding_ =
       (byte)(local_6b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_6b8._Widget.Object)->_padding_ =
       (byte)(local_6b8._Widget.Object)->_padding_ | bVar8;
  if (local_6b8._Widget.Object == (SDockTab *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_6b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_6b8._Widget.Object == (SDockTab *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_6b8._Widget.SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->Object = local_6b8._Widget.Object;
  local_6b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_6b8._Widget.Object = (SDockTab *)0x0;
  if (pSVar5 == (SDockTab *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d0._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_660);
  SDockTab::FArguments::~FArguments(&local_468);
  FMemScope::~FMemScope(&local_678);
  FLLMScope::~FLLMScope(local_6d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// TestMessages @ 142c283e0

void __cdecl TestMessages(void)

{
  FName *pFVar1;
  FText *pFVar2;
  FName local_res8 [4];
  TSharedRef<FTokenizedMessage,1> local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  pFVar1 = FName::FName(local_res8,"SlateStyleLog");
  FMessageLog::FMessageLog(&local_38,pFVar1);
  pFVar2 = FText::FromString((FText *)&local_48,"This is a Warning Message");
  FMessageLog::Message(&local_38,&local_58,Warning,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_48.Object)->_padding_ + 0x10))();
  }
  pFVar2 = FText::FromString((FText *)&local_58,"This is an Error Message");
  FMessageLog::Message(&local_38,&local_48,Error,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_58.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_58.Object)->_padding_ + 0x10))();
  }
  pFVar2 = FText::FromString((FText *)&local_58,"This is an Info Message");
  FMessageLog::Message(&local_38,&local_48,Info,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_58.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_58.Object)->_padding_ + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// IMPLEMENT_MODULE_MessageLog @ 142c2cbf0

void __cdecl IMPLEMENT_MODULE_MessageLog(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableMessageLogPopup'' @ 15035e780

void __cdecl _dynamic_atexit_destructor_for__CVarDisableMessageLogPopup__(void)

{
  CVarDisableMessageLogPopup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableMessageLogPopup);
  return;
}

// `dynamic_atexit_destructor_for_'LogMessageLog'' @ 15035e7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMessageLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMessageLog);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035e7c0

void __cdecl
`SListView<TSharedPtr<IMessageLogListing,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<IMessageLogListing,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<IMessageLogListing,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<IMessageLogListing,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035e7e0

void __cdecl
`SListView<TSharedRef<FMessageFilter,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FMessageFilter,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FMessageFilter,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FMessageFilter,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035e800

void __cdecl
`SListView<TSharedRef<FTokenizedMessage,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FTokenizedMessage,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FTokenizedMessage,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<FTokenizedMessage,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TestMessageLogCommand'' @ 15035e820

void __cdecl _dynamic_atexit_destructor_for__TestMessageLogCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TestMessageLogCommand);
  return;
}

