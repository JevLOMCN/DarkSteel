// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 38

// FWinHttpConnectionHttp @ 14314e0b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FWinHttpConnectionHttp * __thiscall
FWinHttpConnectionHttp::FWinHttpConnectionHttp
          (FWinHttpConnectionHttp *this,FWinHttpSession *param_1,FString *param_2,FString *param_3,
          bool param_4,FString *param_5,TOptional<unsigned_short> param_6,FString *param_7,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_8,TSharedPtr<FRequestPayload,1> *param_9)

{
  FWinHttpHandle *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar2;
  FRequestPayload *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  DWORD DVar7;
  void *pvVar8;
  FStaticBasicLogRecord *pFVar9;
  wchar_t *pwVar10;
  undefined2 uVar11;
  wchar_t *pwVar12;
  undefined4 in_stack_0000003c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  FRequestPayload *local_40;
  FSharedReferencer<1> local_38 [2];
  
  this->_padding_ = (longlong)&___7FWinHttpConnectionHttp__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SyncObject,4000);
  (this->ConnectionHandle).Handle = (void *)0x0;
  (this->RequestHandle).Handle = (void *)0x0;
  (this->KeepAlive).Object = (FWinHttpConnectionHttp *)0x0;
  (this->KeepAlive).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FinalState).bIsSet = false;
  this->bConnectedToServer = false;
  this->bRequestCancelled = false;
  this->bHasPendingDelegate = (atomic<bool>)0x0;
  ::FString::FString(&this->RequestUrl,param_3);
  this->CurrentAction = WaitToStart;
  (this->Payload).Object = (FRequestPayload *)0x0;
  (this->Payload).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PayloadBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PayloadBuffer).ArrayNum = 0;
  (this->PayloadBuffer).ArrayMax = 0;
  *(undefined8 *)&this->HeadersReceived = 0;
  *(undefined8 *)&(this->HeadersReceived).field_0x8 = 0;
  *(undefined8 *)&(this->HeadersReceived).field_0x20 = 0;
  this->NumBytesSuccessfullySent = 0;
  this->ResponseCode = Unknown;
  *(undefined4 *)&(this->HeadersReceived).field_0x28 = 0;
  *(undefined4 *)&(this->HeadersReceived).field_0x2c = 0x80;
  *(undefined4 *)&(this->HeadersReceived).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HeadersReceived).field_0x34 = 0;
  *(undefined8 *)&(this->HeadersReceived).field_0x40 = 0;
  *(undefined4 *)&(this->HeadersReceived).field_0x48 = 0;
  (this->CurrentChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentChunk).ArrayNum = 0;
  (this->CurrentChunk).ArrayMax = 0;
  (this->GameThreadChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadChunk).ArrayNum = 0;
  (this->GameThreadChunk).ArrayMax = 0;
  this->ResponseContentLength = 0;
  this->BytesWrittenToGameThreadChunk = 0;
  (this->ResponseBytesAvailable).bIsSet = false;
  *(undefined8 *)&this->OnDataTransferredHandler = 0;
  *(undefined8 *)&(this->OnDataTransferredHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnDataTransferredHandler).field_0x10 = 0;
  (this->BytesToReportSent).bIsSet = false;
  (this->BytesToReportReceived).bIsSet = false;
  *(undefined8 *)&this->OnHeaderReceivedHandler = 0;
  *(undefined8 *)&(this->OnHeaderReceivedHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnHeaderReceivedHandler).field_0x10 = 0;
  (this->HeaderKeysToReportReceived).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeaderKeysToReportReceived).ArrayNum = 0;
  (this->HeaderKeysToReportReceived).ArrayMax = 0;
  *(undefined8 *)&this->OnRequestCompleteHandler = 0;
  *(undefined8 *)&(this->OnRequestCompleteHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnRequestCompleteHandler).field_0x10 = 0;
  if (param_9->Object != (FRequestPayload *)0x0) {
    (**(code **)((longlong)*param_9->Object + 8))();
  }
  pwVar10 = L"";
  if (5 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  if (*(char *)((undefined2 *)CONCAT44(in_stack_0000003c,param_6) + 1) == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined2 *)CONCAT44(in_stack_0000003c,param_6);
  }
  if ((param_5->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
  }
  pvVar8 = (void *)WinHttpConnect((param_1->SessionHandle).Handle,pwVar12,uVar11,0);
  pvVar2 = (this->ConnectionHandle).Handle;
  if (pvVar2 != pvVar8) {
    if (&this->ConnectionHandle != (FWinHttpHandle *)&local_78) {
      (this->ConnectionHandle).Handle = pvVar8;
      pvVar8 = pvVar2;
    }
    if ((pvVar8 != (void *)0x0) && (iVar6 = WinHttpCloseHandle(), iVar6 == 0)) {
      DVar7 = GetLastError();
      if (DVar7 == 8) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
LAB_14314e3d2:
          UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogWinHttp);
        }
      }
      else if (DVar7 == 0x2ee4) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e3d2;
        }
      }
      else if (DVar7 == 0x2eec) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e3d2;
        }
      }
      else if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
    }
  }
  pvVar2 = (this->ConnectionHandle).Handle;
  if (pvVar2 == (void *)0x0) {
    DVar7 = GetLastError();
    if (DVar7 < 0x2ee7) {
      if (DVar7 == 0x2ee6) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
      if (DVar7 == 8) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
      if (DVar7 == 0x2ee4) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
      if (DVar7 == 0x2ee5) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
    }
    else {
      if (DVar7 == 0x2eec) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
      if (DVar7 == 0x2ef1) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
      if (DVar7 == 0x2ef2) {
        if ((byte)LogWinHttp._0_1_ < 2) {
          return this;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return this;
      }
    }
    if ((byte)LogWinHttp._0_1_ < 2) {
      return this;
    }
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_WinHttpConnect__150a5d188,
               (FLogCategoryBase *)&LogWinHttp);
    return this;
  }
  if ((param_7->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_7->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pvVar8 = (void *)WinHttpOpenRequest(pvVar2,pwVar10,pwVar12,0,0,0,(uint)param_4 << 0x17);
  pvVar2 = (this->RequestHandle).Handle;
  if (pvVar2 != pvVar8) {
    if (&this->RequestHandle != (FWinHttpHandle *)&local_70) {
      (this->RequestHandle).Handle = pvVar8;
      pvVar8 = pvVar2;
    }
    if ((pvVar8 != (void *)0x0) && (iVar6 = WinHttpCloseHandle(), iVar6 == 0)) {
      DVar7 = GetLastError();
      if (DVar7 == 8) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
LAB_14314e639:
          UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogWinHttp);
        }
      }
      else if (DVar7 == 0x2ee4) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e639;
        }
      }
      else if (DVar7 == 0x2eec) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e639;
        }
      }
      else if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
    }
  }
  if ((this->RequestHandle).Handle != (void *)0x0) {
    if ((*(int *)&param_8->field_0x8 - *(int *)&param_8->field_0x34 < 1) ||
       (bVar5 = SetHeaders(this,param_8), bVar5)) {
      pFVar3 = param_9->Object;
      if (pFVar3 == (FRequestPayload *)0x0) {
        return this;
      }
      pTVar4 = (param_9->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      lpCriticalSection = &this->SyncObject;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (this->CurrentAction == WaitToStart) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_40 = pFVar3;
        local_38[0].ReferenceController = pTVar4;
        if (&this->Payload != (TSharedPtr<FRequestPayload,1> *)&local_40) {
          (this->Payload).Object = pFVar3;
          local_40 = (FRequestPayload *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Payload).SharedReferenceCount,local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38[0].ReferenceController);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return this;
      }
      if (2 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar1 = &this->RequestHandle;
      if (((pFVar1 != (FWinHttpHandle *)&local_50) &&
          (pvVar2 = pFVar1->Handle, pFVar1->Handle = (void *)0x0, pvVar2 != (void *)0x0)) &&
         (iVar6 = WinHttpCloseHandle(), iVar6 == 0)) {
        DVar7 = GetLastError();
        if (DVar7 == 8) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar9 = &::LOG_Static;
LAB_14314e9da:
            UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogWinHttp);
          }
        }
        else if (DVar7 == 0x2ee4) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar9 = &::LOG_Static;
            goto LAB_14314e9da;
          }
        }
        else if (DVar7 == 0x2eec) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar9 = &::LOG_Static;
            goto LAB_14314e9da;
          }
        }
        else if (1 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
      }
      pFVar1 = &this->ConnectionHandle;
      if (pFVar1 == (FWinHttpHandle *)&local_48) {
        return this;
      }
      pvVar2 = pFVar1->Handle;
      pFVar1->Handle = (void *)0x0;
      if (pvVar2 == (void *)0x0) {
        return this;
      }
      iVar6 = WinHttpCloseHandle();
      if (iVar6 != 0) {
        return this;
      }
      DVar7 = GetLastError();
      goto joined_r0x00014314ea23;
    }
    pFVar1 = &this->RequestHandle;
    if (((pFVar1 != (FWinHttpHandle *)&local_60) &&
        (pvVar2 = pFVar1->Handle, pFVar1->Handle = (void *)0x0, pvVar2 != (void *)0x0)) &&
       (iVar6 = WinHttpCloseHandle(), iVar6 == 0)) {
      DVar7 = GetLastError();
      if (DVar7 == 8) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
LAB_14314e83d:
          UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogWinHttp);
        }
      }
      else if (DVar7 == 0x2ee4) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e83d;
        }
      }
      else if (DVar7 == 0x2eec) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar9 = &::LOG_Static;
          goto LAB_14314e83d;
        }
      }
      else if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
    }
    pFVar1 = &this->ConnectionHandle;
    if (pFVar1 == (FWinHttpHandle *)&local_58) {
      return this;
    }
    pvVar2 = pFVar1->Handle;
    pFVar1->Handle = (void *)0x0;
    if (pvVar2 == (void *)0x0) {
      return this;
    }
    iVar6 = WinHttpCloseHandle();
    if (iVar6 != 0) {
      return this;
    }
    DVar7 = GetLastError();
    goto joined_r0x00014314ea23;
  }
  DVar7 = GetLastError();
  if (DVar7 < 0x2ee7) {
    if (DVar7 == 0x2ee6) {
      if (1 < (byte)LogWinHttp._0_1_) {
        pFVar9 = &::LOG_Static;
LAB_14314e717:
        UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogWinHttp);
      }
    }
    else if (DVar7 == 8) {
      if (1 < (byte)LogWinHttp._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_14314e717;
      }
    }
    else if (DVar7 == 0x2ee4) {
      if (1 < (byte)LogWinHttp._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_14314e717;
      }
    }
    else {
      if (DVar7 != 0x2ee5) goto LAB_14314e6d4;
      if (1 < (byte)LogWinHttp._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_14314e717;
      }
    }
  }
  else if (DVar7 == 0x2ef1) {
    if (1 < (byte)LogWinHttp._0_1_) {
      pFVar9 = &::LOG_Static;
      goto LAB_14314e717;
    }
  }
  else if (DVar7 == 0x2ef2) {
    if (1 < (byte)LogWinHttp._0_1_) {
      pFVar9 = &::LOG_Static;
      goto LAB_14314e717;
    }
  }
  else {
LAB_14314e6d4:
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
  }
  pFVar1 = &this->ConnectionHandle;
  if (pFVar1 == (FWinHttpHandle *)&local_68) {
    return this;
  }
  pvVar2 = pFVar1->Handle;
  pFVar1->Handle = (void *)0x0;
  if (pvVar2 == (void *)0x0) {
    return this;
  }
  iVar6 = WinHttpCloseHandle();
  if (iVar6 != 0) {
    return this;
  }
  DVar7 = GetLastError();
joined_r0x00014314ea23:
  if (DVar7 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
  }
  else if (DVar7 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
  }
  else if (DVar7 == 0x2eec) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  return this;
}

// ~FWinHttpConnectionHttp @ 143150ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::~FWinHttpConnectionHttp(FWinHttpConnectionHttp *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FWinHttpConnectionHttp__6B_;
  if (5 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  FWinHttpHandle::Reset(&this->RequestHandle);
  FWinHttpHandle::Reset(&this->ConnectionHandle);
  if (GWinHttpManager != (FWinHttpHttpManager *)0x0) {
    (**(code **)(*(longlong *)GWinHttpManager + 0x20))(GWinHttpManager,this);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRequestCompleteHandler);
  pvVar3 = *(void **)&(this->OnRequestCompleteHandler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestCompleteHandler);
  DestructItems<FString,int>
            ((FString *)(this->HeaderKeysToReportReceived).AllocatorInstance.Data,
             (this->HeaderKeysToReportReceived).ArrayNum);
  pFVar4 = (this->HeaderKeysToReportReceived).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHeaderReceivedHandler);
  pvVar3 = *(void **)&(this->OnHeaderReceivedHandler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHeaderReceivedHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDataTransferredHandler);
  pvVar3 = *(void **)&(this->OnDataTransferredHandler).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataTransferredHandler);
  pFVar4 = (this->GameThreadChunk).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CurrentChunk).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->HeadersReceived).field_0x48 = 0;
  pvVar3 = *(void **)&(this->HeadersReceived).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HeadersReceived);
  pFVar4 = (this->PayloadBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Payload).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->RequestUrl).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeepAlive).SharedReferenceCount.ReferenceController);
  FWinHttpHandle::~FWinHttpHandle(&this->RequestHandle);
  FWinHttpHandle::~FWinHttpHandle(&this->ConnectionHandle);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SyncObject);
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
  return;
}

// CancelRequest @ 143157bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWinHttpConnectionHttp::CancelRequest(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bRequestCancelled == false) {
    if ((this->FinalState).bIsSet != false) {
      if (5 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      bVar1 = false;
      goto LAB_143157c56;
    }
    if (5 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    this->bRequestCancelled = true;
    (**(code **)(this->_padding_ + 0x48))(this,2);
  }
  else if (5 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  bVar1 = true;
LAB_143157c56:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar1;
}

// CreateHttpConnection @ 14315af30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FWinHttpConnectionHttp,1> * __cdecl
FWinHttpConnectionHttp::CreateHttpConnection
          (TSharedPtr<FWinHttpConnectionHttp,1> *__return_storage_ptr__,FWinHttpSession *param_1,
          FString *param_2,FString *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4,TSharedPtr<FRequestPayload,1> *param_5)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  FWinHttpConnectionHttp *this;
  TSharedPtr<FWinHttpConnectionHttp,1> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  ulong64 uVar9;
  undefined1 local_res10 [2];
  undefined1 local_res12;
  FString *local_res18;
  undefined1 local_138 [8];
  FString local_130;
  FString local_120;
  TStringView<wchar_t> local_110;
  TRawPtrProxy<FWinHttpConnectionHttp> local_100;
  TSharedRef<FWinHttpConnectionHttp,1> local_f8;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  local_res18 = param_2;
  if ((param_1->SessionHandle).Handle == (void *)0x0) {
    if ((byte)LogWinHttp._0_1_ < 3) goto LAB_14315af73;
    pFVar8 = &::LOG_Static;
  }
  else if ((param_2->Data).ArrayNum < 2) {
    if ((byte)LogWinHttp._0_1_ < 3) goto LAB_14315af73;
    pFVar8 = &::LOG_Static;
  }
  else {
    iStack_d0 = (param_3->Data).ArrayNum;
    if (1 < iStack_d0) {
      local_d8 = (param_3->Data).AllocatorInstance.Data;
      iStack_d0 = iStack_d0 + -1;
      local_78._12_4_ = uStack_cc;
      local_78.Size = iStack_d0;
      local_e8 = L"://";
      uStack_e0 = 3;
      local_88._12_4_ = uStack_dc;
      local_88.Size = 3;
      local_88.DataPtr = L"://";
      local_110.DataPtr = (wchar_t *)0x0;
      local_110.Size = 0;
      local_c8.DataPtr = (wchar_t *)0x0;
      local_c8.Size = 0;
      local_78.DataPtr = (wchar_t *)local_d8;
      bVar3 = ::`anonymous_namespace'::Split(&local_78,&local_88,&local_110,&local_c8);
      iVar6 = local_110.Size;
      pwVar2 = local_110.DataPtr;
      if ((bVar3) && (uVar9 = (ulong64)local_110.Size, local_110.Size != 0)) {
        iVar5 = FGenericPlatformStricmp::Strnicmp(local_110.DataPtr,L"https",uVar9);
        if ((iVar5 == 0) && (L"https"[uVar9] == L'\0')) {
LAB_14315b08c:
          bVar3 = true;
        }
        else {
          if (iVar6 == 0) goto LAB_14315b148;
          iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,L"wss",uVar9);
          if ((iVar5 == 0) && (L"wss"[uVar9] == L'\0')) goto LAB_14315b08c;
          if ((iVar6 == 0) ||
             (((iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar2,L"http",uVar9), iVar5 != 0 ||
               (L"http"[uVar9] != L'\0')) &&
              ((iVar6 == 0 ||
               ((iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar2,L"ws",uVar9), iVar6 != 0 ||
                (L"ws"[uVar9] != L'\0')))))))) goto LAB_14315b148;
          bVar3 = false;
        }
        if (bVar3 != false) goto LAB_14315b0ec;
      }
      else {
LAB_14315b148:
        bVar3 = false;
      }
      if (param_1->bForceSecureConnections != false) {
        if (2 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
        __return_storage_ptr__->Object = (FWinHttpConnectionHttp *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
LAB_14315b0ec:
      local_b8 = (param_3->Data).AllocatorInstance.Data;
      iVar6 = (param_3->Data).ArrayNum;
      iStack_b0 = iVar6 + -1;
      if (iVar6 == 0) {
        iStack_b0 = 0;
      }
      local_68._12_4_ = uStack_ac;
      local_68.Size = iStack_b0;
      local_68.DataPtr = (wchar_t *)local_b8;
      FGenericPlatformHttp::GetUrlDomain(&local_130,&local_68);
      if (local_130.Data.ArrayNum < 2) {
        if (2 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
        __return_storage_ptr__->Object = (FWinHttpConnectionHttp *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_a8 = (param_3->Data).AllocatorInstance.Data;
        iVar6 = (param_3->Data).ArrayNum;
        iStack_a0 = iVar6 + -1;
        if (iVar6 == 0) {
          iStack_a0 = 0;
        }
        local_58._12_4_ = uStack_9c;
        local_58.Size = iStack_a0;
        local_58.DataPtr = (wchar_t *)local_a8;
        FGenericPlatformHttp::GetUrlPath(&local_120,&local_58,true,false);
        if (local_120.Data.ArrayNum < 2) {
          if (2 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          __return_storage_ptr__->Object = (FWinHttpConnectionHttp *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_98 = (param_3->Data).AllocatorInstance.Data;
          iVar6 = (param_3->Data).ArrayNum;
          iStack_90 = iVar6 + -1;
          if (iVar6 == 0) {
            iStack_90 = 0;
          }
          uStack_40 = CONCAT44(uStack_8c,iStack_90);
          local_48 = local_98;
          FGenericPlatformHttp::GetUrlPort((TStringView<wchar_t> *)local_138);
          this = ::operator_new(0x1c0);
          if (this == (FWinHttpConnectionHttp *)0x0) {
            local_100.Object = (FWinHttpConnectionHttp *)0x0;
          }
          else {
            local_res12 = local_138[2];
            local_100.Object =
                 FWinHttpConnectionHttp
                           (this,param_1,local_res18,param_3,bVar3,&local_130,SUB84(local_res10,0),
                            &local_120,param_4,param_5);
            if ((((local_100.Object != (FWinHttpConnectionHttp *)0x0) &&
                 ((local_100.Object)->_padding_ != 0)) && ((local_100.Object)->_padding_ != 0)) &&
               ((0 < *(int *)((local_100.Object)->_padding_ + 8) &&
                (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!InObject || !InObject->DoesSharedInstanceExist()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x7a5,L"Trying to share an already-shared object"), bVar3)))) {
              pcVar1 = (code *)swi(3);
              pTVar7 = (TSharedPtr<FWinHttpConnectionHttp,1> *)(*pcVar1)();
              return pTVar7;
            }
          }
          TSharedRef<FWinHttpConnectionHttp,1>::
          TSharedRef<FWinHttpConnectionHttp,1><FWinHttpConnectionHttp>(&local_f8,&local_100);
          cVar4 = (**(code **)((local_f8.Object)->_padding_ + 8))(local_f8.Object);
          if (cVar4 == '\0') {
            __return_storage_ptr__->Object = (FWinHttpConnectionHttp *)0x0;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
          }
          else {
            __return_storage_ptr__->Object = local_f8.Object;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 local_f8.SharedReferenceCount.ReferenceController;
            if (local_f8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      if (local_130.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if ((byte)LogWinHttp._0_1_ < 3) goto LAB_14315af73;
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogWinHttp);
LAB_14315af73:
  __return_storage_ptr__->Object = (FWinHttpConnectionHttp *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FinishRequest @ 14315ef40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWinHttpConnectionHttp::FinishRequest(FWinHttpConnectionHttp *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TOptional<EHttpRequestStatus::Type> *pTVar4;
  int local_res10 [6];
  
  if ((Processing < param_1) && ((this->FinalState).bIsSet == false)) {
    pTVar4 = &this->FinalState;
    if ((TOptional<EHttpRequestStatus::Type> *)local_res10 != pTVar4) {
      pTVar4->TypedValue = param_1;
      (this->FinalState).bIsSet = true;
    }
    this->CurrentAction = Finished;
    bVar2 = (this->FinalState).bIsSet;
    if ((bVar2 == true) && (pTVar4->TypedValue == Succeeded)) {
      if (5 < (byte)LogWinHttp._0_1_) {
        EHttpRequestStatus::ToString(Succeeded);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
    }
    else if (2 < (byte)LogWinHttp._0_1_) {
      if (bVar2 == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EHttpRequestStatus::ToString((this->FinalState).TypedValue);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    LOCK();
    this->bHasPendingDelegate = (atomic<bool>)0x1;
    UNLOCK();
    FWinHttpHandle::Reset(&this->RequestHandle);
    FWinHttpHandle::Reset(&this->ConnectionHandle);
    return true;
  }
  return false;
}

// GetHandle @ 143162a00

void * __thiscall FWinHttpConnectionHttp::GetHandle(FWinHttpConnectionHttp *this)

{
  return (this->RequestHandle).Handle;
}

// GetRequestUrl @ 1431647a0

FString * __thiscall FWinHttpConnectionHttp::GetRequestUrl(FWinHttpConnectionHttp *this)

{
  return &this->RequestUrl;
}

// HandleConnectedToServer @ 143166530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleConnectedToServer(FWinHttpConnectionHttp *this,wchar_t *param_1)

{
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// HandleDataAvailable @ 1431670d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleDataAvailable(FWinHttpConnectionHttp *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 local_res10 [8];
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitForNextResponseBodyChunkSize) {
      if ((TOptional<unsigned___int64> *)local_res10 != &this->ResponseBytesAvailable) {
        (this->ResponseBytesAvailable).TypedValue = param_1;
        (this->ResponseBytesAvailable).bIsSet = true;
      }
      this->CurrentAction = RequestNextResponseBodyChunkData;
    }
                    /* WARNING: Could not recover jumptable at 0x000143167153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleHandleClosing @ 143167a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::HandleHandleClosing(FWinHttpConnectionHttp *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  ReleasePayloadData(this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->KeepAlive != (TSharedPtr<FWinHttpConnectionHttp,1> *)&local_18) {
    (this->KeepAlive).Object = (FWinHttpConnectionHttp *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeepAlive).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// HandleHeadersAvailable @ 143167ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::HandleHeadersAvailable(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->RequestHandle).Handle != (void *)0x0) {
      if (this->CurrentAction == WaitForResponseHeaders) {
        this->CurrentAction = ProcessResponseHeaders;
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7762723371099358238>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                           ,0x41e,"CurrentAction == EState::WaitForResponseHeaders");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ReleasePayloadData(this);
    }
                    /* WARNING: Could not recover jumptable at 0x000143167b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleHttpStatusCallback @ 143167b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleHttpStatusCallback
          (FWinHttpConnectionHttp *this,void *param_1,EWinHttpCallbackStatus param_2,void *param_3,
          uint param_4)

{
  FWindowsRecursiveMutex *pFVar1;
  TOptional<unsigned___int64> *pTVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FRequestPayload *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18 [2];
  
  pTVar6 = (this->KeepAlive).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (Redirect < param_2) {
    if (RequestError < param_2) {
      if (param_2 < (ShutdownComplete|ResolvingName)) {
        if (param_2 == ShutdownComplete) goto switchD_143167c11_caseD_4;
        if (param_2 == SendRequestComplete) {
          if (6 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          if (&this->SyncObject == (FWindowsRecursiveMutex *)0x0) goto LAB_1431683d3;
          EnterCriticalSection((LPCRITICAL_SECTION)&this->SyncObject);
          if (this->CurrentAction == WaitForSendComplete) {
            iVar5 = (this->PayloadBuffer).ArrayNum;
            this->bConnectedToServer = true;
            IncrementSentByteCounts(this,(longlong)iVar5);
LAB_14316831f:
            pFVar7 = (this->Payload).Object;
            if (pFVar7 == (FRequestPayload *)0x0) {
              bVar10 = true;
            }
            else {
              uVar11 = (**(code **)((longlong)*pFVar7 + 8))();
              bVar10 = uVar11 <= this->NumBytesSuccessfullySent;
            }
            this->CurrentAction = bVar10 + SendAdditionalRequestBody;
          }
          goto LAB_143168347;
        }
        bVar10 = (param_2 - GetProxyForUrlComplete & 0xfeffffff) == 0;
      }
      else {
        bVar10 = (param_2 + 0xf0000000 & 0xefffffff) == 0;
      }
      goto LAB_14316835e;
    }
    if (param_2 == RequestError) {
      if ((param_3 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatusInformation != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                              ,0x4c9,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(undefined4 *)param_3;
      uVar3 = *(uint *)((longlong)param_3 + 8);
      if (2 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      pFVar1 = &this->SyncObject;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if ((this->RequestHandle).Handle != (void *)0x0) {
          switch(uVar4) {
          case 1:
            FWinHttpErrorHelper::LogWinHttpReceiveResponseFailure(uVar3);
            break;
          case 2:
            FWinHttpErrorHelper::LogWinHttpQueryDataAvailableFailure(uVar3);
            break;
          case 3:
            FWinHttpErrorHelper::LogWinHttpReadDataFailure(uVar3);
            break;
          case 4:
            FWinHttpErrorHelper::LogWinHttpWriteDataFailure(uVar3);
            break;
          case 5:
            FWinHttpErrorHelper::LogWinHttpSendRequestFailure(uVar3);
            break;
          case 6:
            if (1 < (byte)LogWinHttp._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
            }
            break;
          default:
            if (1 < (byte)LogWinHttp._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
            }
          }
          if ((this->FinalState).bIsSet == false) {
            (**(code **)(this->_padding_ + 0x48))(this,2);
          }
          if (uVar3 == 0x2ef1) {
            ReleasePayloadData(this);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        goto LAB_1431683b1;
      }
LAB_1431683d3:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if (param_2 < (DataAvailable|ResolvingName)) {
      if (param_2 != DataAvailable) {
        if ((param_2 - IntermediateResponse & 0xffff7fff) == 0) goto switchD_143167c11_caseD_4;
        if (param_2 == HeadersAvailable) {
          (**(code **)(this->_padding_ + 0x58))();
          goto LAB_1431683b1;
        }
        goto switchD_143167c11_caseD_3;
      }
      if ((param_4 != 4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatusInformationLength == sizeof(::DWORD)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                              ,0x4bb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatusInformation != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                              ,0x4bc,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = *(uint *)param_3;
      if (6 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      pFVar1 = &this->SyncObject;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1431683d3;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (this->CurrentAction == WaitForNextResponseBodyChunkSize) {
        if ((TOptional<unsigned___int64> *)local_28 != &this->ResponseBytesAvailable) {
          (this->ResponseBytesAvailable).TypedValue = (ulonglong)uVar3;
          (this->ResponseBytesAvailable).bIsSet = true;
        }
        this->CurrentAction = RequestNextResponseBodyChunkData;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        goto LAB_1431683b1;
      }
    }
    else if (param_2 == ReadComplete) {
      if (6 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      pFVar1 = &this->SyncObject;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1431683d3;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (this->CurrentAction == WaitForNextResponseBodyChunkData) {
        pTVar2 = &this->BytesToReportReceived;
        if ((this->BytesToReportReceived).bIsSet == false) {
          if ((TOptional<unsigned___int64> *)local_18 != pTVar2) {
            pTVar2->TypedValue = (ulonglong)param_4;
            (this->BytesToReportReceived).bIsSet = true;
          }
        }
        else {
          pTVar2->TypedValue = pTVar2->TypedValue + (ulonglong)param_4;
        }
        LOCK();
        this->bHasPendingDelegate = (atomic<bool>)0x1;
        UNLOCK();
        this->CurrentAction = RequestNextResponseBodyChunkSize;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        goto LAB_1431683b1;
      }
    }
    else {
      if (param_2 != WriteComplete) goto switchD_143167c11_caseD_3;
      if ((param_4 != 4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatusInformationLength == sizeof(::DWORD)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                              ,0x4ae,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StatusInformation != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                              ,0x4af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = (ulonglong)*(uint *)param_3;
      if (6 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      if (&this->SyncObject == (FWindowsRecursiveMutex *)0x0) goto LAB_1431683d3;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->SyncObject);
      if (this->CurrentAction == WaitForSendComplete) {
        pTVar2 = &this->BytesToReportSent;
        if ((this->BytesToReportSent).bIsSet == false) {
          if ((TOptional<unsigned___int64> *)&local_20 != pTVar2) {
            pTVar2->TypedValue = uVar11;
            (this->BytesToReportSent).bIsSet = true;
            LOCK();
            this->bHasPendingDelegate = (atomic<bool>)0x1;
            UNLOCK();
            this->NumBytesSuccessfullySent = this->NumBytesSuccessfullySent + uVar11;
            goto LAB_14316831f;
          }
        }
        else {
          pTVar2->TypedValue = pTVar2->TypedValue + uVar11;
        }
        LOCK();
        this->bHasPendingDelegate = (atomic<bool>)0x1;
        UNLOCK();
        this->NumBytesSuccessfullySent = this->NumBytesSuccessfullySent + uVar11;
        goto LAB_14316831f;
      }
    }
LAB_143168347:
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->SyncObject);
    goto LAB_1431683b1;
  }
  if (param_2 != Redirect) {
    if (param_2 < (ReceivingResponse|ResolvingName)) {
      if (param_2 != ReceivingResponse) {
        switch(param_2) {
        case ResolvingName:
          if ((param_4 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformationLength > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4dd,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformation != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4de,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (6 < (byte)LogWinHttp._0_1_) {
            ::LexToString(param_2);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          break;
        case NameResolved:
          if ((param_4 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformationLength > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4e6,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformation != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4e7,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (6 < (byte)LogWinHttp._0_1_) {
            ::LexToString(param_2);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          break;
        default:
          goto switchD_143167c11_caseD_3;
        case ConnectingToServer:
          goto switchD_143167c11_caseD_4;
        case ConnectedToServer:
          if ((param_4 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformationLength > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x49b,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformation != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x49c,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (**(code **)(this->_padding_ + 0x50))(this,param_3);
          break;
        case SendingRequest:
          if (6 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          pFVar1 = &this->SyncObject;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1431683d3;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if ((GWinHttpManager != (FWinHttpHttpManager *)0x0) &&
             (cVar9 = (**(code **)(*(longlong *)GWinHttpManager + 0x18))(GWinHttpManager,this),
             cVar9 == '\0')) {
            (**(code **)(this->_padding_ + 0x48))(this,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            break;
          }
          goto LAB_143168347;
        case RequestSent:
          if ((param_4 != 4) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformationLength == sizeof(::DWORD)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4ef,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StatusInformation != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                  ,0x4f0,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (5 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
        }
        goto LAB_1431683b1;
      }
    }
    else {
      if (param_2 < (HandleCreated|ResolvingName)) {
        if (((param_2 == HandleCreated) || (param_2 == ResponseReceived)) ||
           (param_2 == ClosingConnection)) goto switchD_143167c11_caseD_4;
        bVar10 = param_2 == ConnectionClosed;
      }
      else {
        if (param_2 == HandleClosing) {
          (**(code **)(this->_padding_ + 0x60))();
          goto LAB_1431683b1;
        }
        bVar10 = param_2 == DetectingProxy;
      }
LAB_14316835e:
      if (!bVar10) {
switchD_143167c11_caseD_3:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                            ,0x508,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        goto LAB_1431683b1;
      }
    }
  }
switchD_143167c11_caseD_4:
  if (6 < (byte)LogWinHttp._0_1_) {
    ::LexToString(param_2);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
LAB_1431683b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// HandleReadComplete @ 143168440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleReadComplete(FWinHttpConnectionHttp *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TOptional<unsigned___int64> *pTVar1;
  longlong local_18 [2];
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitForNextResponseBodyChunkData) {
      pTVar1 = &this->BytesToReportReceived;
      if ((this->BytesToReportReceived).bIsSet == false) {
        if ((TOptional<unsigned___int64> *)local_18 != pTVar1) {
          pTVar1->TypedValue = param_1;
          (this->BytesToReportReceived).bIsSet = true;
        }
      }
      else {
        pTVar1->TypedValue = pTVar1->TypedValue + param_1;
      }
      LOCK();
      this->bHasPendingDelegate = (atomic<bool>)0x1;
      UNLOCK();
      this->CurrentAction = RequestNextResponseBodyChunkSize;
    }
                    /* WARNING: Could not recover jumptable at 0x0001431684d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleRequestError @ 1431684f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleRequestError(FWinHttpConnectionHttp *this,uint param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (2 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->RequestHandle).Handle != (void *)0x0) {
    switch(param_1) {
    case 1:
      FWinHttpErrorHelper::LogWinHttpReceiveResponseFailure(param_2);
      break;
    case 2:
      FWinHttpErrorHelper::LogWinHttpQueryDataAvailableFailure(param_2);
      break;
    case 3:
      FWinHttpErrorHelper::LogWinHttpReadDataFailure(param_2);
      break;
    case 4:
      FWinHttpErrorHelper::LogWinHttpWriteDataFailure(param_2);
      break;
    case 5:
      FWinHttpErrorHelper::LogWinHttpSendRequestFailure(param_2);
      break;
    case 6:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      break;
    default:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
    }
    if ((this->FinalState).bIsSet == false) {
      (**(code **)(this->_padding_ + 0x48))(this,2);
    }
    if (param_2 == 0x2ef1) {
      ReleasePayloadData(this);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143168615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// HandleSendRequestComplete @ 1431687a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::HandleSendRequestComplete(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FRequestPayload *pFVar2;
  ulonglong uVar3;
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentAction == WaitForSendComplete) {
    iVar1 = (this->PayloadBuffer).ArrayNum;
    this->bConnectedToServer = true;
    IncrementSentByteCounts(this,(longlong)iVar1);
    pFVar2 = (this->Payload).Object;
    if (pFVar2 != (FRequestPayload *)0x0) {
      uVar3 = (**(code **)((longlong)*pFVar2 + 8))();
      if (this->NumBytesSuccessfullySent < uVar3) {
        this->CurrentAction = SendAdditionalRequestBody;
        goto LAB_143168825;
      }
    }
    this->CurrentAction = RequestResponse;
  }
LAB_143168825:
                    /* WARNING: Could not recover jumptable at 0x000143168832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// HandleSendingRequest @ 143168850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::HandleSendingRequest(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (GWinHttpManager != (FWinHttpHttpManager *)0x0) {
      cVar1 = (**(code **)(*(longlong *)GWinHttpManager + 0x18))(GWinHttpManager,this);
      if (cVar1 == '\0') {
        (**(code **)(this->_padding_ + 0x48))(this,2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001431688c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleWriteComplete @ 143168900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::HandleWriteComplete(FWinHttpConnectionHttp *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRequestPayload *pFVar1;
  ulonglong uVar2;
  
  if (6 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentAction == WaitForSendComplete) {
    IncrementSentByteCounts(this,param_1);
    pFVar1 = (this->Payload).Object;
    if (pFVar1 != (FRequestPayload *)0x0) {
      uVar2 = (**(code **)((longlong)*pFVar1 + 8))();
      if (this->NumBytesSuccessfullySent < uVar2) {
        this->CurrentAction = SendAdditionalRequestBody;
        goto LAB_143168988;
      }
    }
    this->CurrentAction = RequestResponse;
  }
LAB_143168988:
                    /* WARNING: Could not recover jumptable at 0x00014316899a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// HasRequestBodyToSend @ 143168b90

bool __thiscall FWinHttpConnectionHttp::HasRequestBodyToSend(FWinHttpConnectionHttp *this)

{
  FRequestPayload *pFVar1;
  ulonglong uVar2;
  
  pFVar1 = (this->Payload).Object;
  if (pFVar1 == (FRequestPayload *)0x0) {
    return false;
  }
  uVar2 = (**(code **)((longlong)*pFVar1 + 8))();
  return this->NumBytesSuccessfullySent < uVar2;
}

// IncrementReceivedByteCounts @ 14316a870

void __thiscall
FWinHttpConnectionHttp::IncrementReceivedByteCounts(FWinHttpConnectionHttp *this,ulong64 param_1)

{
  TOptional<unsigned___int64> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_res10 [3];
  
  if (this->CurrentAction != WaitForNextResponseBodyChunkData) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAction == EState::WaitForNextResponseBodyChunkData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x29d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = &this->BytesToReportReceived;
  if ((this->BytesToReportReceived).bIsSet == false) {
    if ((TOptional<unsigned___int64> *)local_res10 != pTVar1) {
      pTVar1->TypedValue = param_1;
      (this->BytesToReportReceived).bIsSet = true;
      LOCK();
      this->bHasPendingDelegate = (atomic<bool>)0x1;
      UNLOCK();
      return;
    }
  }
  else {
    pTVar1->TypedValue = pTVar1->TypedValue + param_1;
  }
  LOCK();
  this->bHasPendingDelegate = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// IncrementSentByteCounts @ 14316a9b0

void __thiscall
FWinHttpConnectionHttp::IncrementSentByteCounts(FWinHttpConnectionHttp *this,ulong64 param_1)

{
  TOptional<unsigned___int64> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_res10 [3];
  
  if (this->CurrentAction != WaitForSendComplete) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAction == EState::WaitForSendComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x28b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = &this->BytesToReportSent;
  if ((this->BytesToReportSent).bIsSet == false) {
    if ((TOptional<unsigned___int64> *)local_res10 != pTVar1) {
      pTVar1->TypedValue = param_1;
      (this->BytesToReportSent).bIsSet = true;
    }
  }
  else {
    pTVar1->TypedValue = pTVar1->TypedValue + param_1;
  }
  LOCK();
  this->bHasPendingDelegate = (atomic<bool>)0x1;
  UNLOCK();
  this->NumBytesSuccessfullySent = this->NumBytesSuccessfullySent + param_1;
  return;
}

// IsComplete @ 14316c620

bool __thiscall FWinHttpConnectionHttp::IsComplete(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = (this->FinalState).bIsSet;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsValid @ 14316cef0

bool __thiscall FWinHttpConnectionHttp::IsValid(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->ConnectionHandle).Handle == (void *)0x0) ||
       ((this->RequestHandle).Handle == (void *)0x0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessResponseHeaders @ 143175360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWinHttpConnectionHttp::ProcessResponseHeaders(FWinHttpConnectionHttp *this)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  size_t sVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  TSparseSetElement<TTuple<FString,FString>_> *pTVar22;
  uint uVar23;
  TSparseSetElement<TTuple<FString,FString>_> *pTVar25;
  uint local_res8 [2];
  int local_res10 [2];
  Type local_res18 [2];
  uint local_res20 [2];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TPairInitializer<TStringView<wchar_t>_&,TStringView<wchar_t>_&> local_88;
  FSparseArrayAllocationInfo local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TSparseSetElement<TTuple<FString,FString>_> *pTVar24;
  
  if ((this->CurrentAction != ProcessResponseHeaders) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentAction == EState::ProcessResponseHeaders",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x2fa,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar25 = (TSparseSetElement<TTuple<FString,FString>_> *)0x0;
  local_res8[0] = 0;
  iVar9 = WinHttpQueryHeaders((this->RequestHandle).Handle,0x15,0,0,local_res8,0);
  if (iVar9 != 0) {
    return false;
  }
  uVar10 = GetLastError();
  if (uVar10 == 0x7a) {
    if (local_res8[0] != 0) {
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      if (local_res8[0] >> 1 != 0) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_res8[0] >> 1,&local_d8,(int *)&local_d0,
                   (int *)((longlong)&local_d0 + 4));
      }
      iVar9 = WinHttpQueryHeaders((this->RequestHandle).Handle,0x15,0,local_d8.Data,local_res8,0);
      FVar6.Data = local_d8.Data;
      if (iVar9 == 0) {
        DVar11 = GetLastError();
        FWinHttpErrorHelper::LogWinHttpQueryHeadersFailure(DVar11);
        if (local_d8.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_d8.Data);
        return false;
      }
      sVar15 = wcslen((wchar_t *)local_d8.Data);
      iVar9 = (int)sVar15;
      pTVar24 = pTVar25;
      while (iVar9 != 0) {
        iVar9 = (int)pTVar24;
        uVar23 = iVar9 + 1 + (int)sVar15;
        pTVar24 = (TSparseSetElement<TTuple<FString,FString>_> *)(ulonglong)uVar23;
        pFVar20 = FVar6.Data + (longlong)iVar9 * 2;
        uVar10 = (int)sVar15 + 1;
        local_a8 = pFVar20;
        uStack_a0 = uVar10;
        if (6 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
        local_68._12_4_ = uStack_9c;
        local_68.Size = uStack_a0;
        local_68.DataPtr = (wchar_t *)local_a8;
        uVar12 = UE::String::FindFirstChar(&local_68,L':',CaseSensitive);
        if (uVar12 != 0xffffffff) {
          uVar13 = uVar10;
          if ((int)uVar12 < (int)uVar10) {
            uVar13 = uVar12;
          }
          uVar21 = 0;
          local_b8.Size = 0;
          if (0 < (int)uVar13) {
            local_b8.Size = uVar13;
          }
          uVar13 = (uVar10 - uVar12) - 1;
          uVar12 = uVar10;
          if ((int)uVar13 < (int)uVar10) {
            uVar12 = uVar13;
          }
          uVar13 = uVar21;
          if (0 < (int)uVar12) {
            uVar13 = uVar12;
          }
          iVar9 = uVar13 - 1;
          local_c8.Size = iVar9;
          pFVar18 = pFVar20 + ((longlong)(int)uVar10 - (longlong)(int)uVar13) * 2;
          pTVar22 = pTVar25;
          uVar12 = uVar21;
          local_c8.DataPtr = (wchar_t *)pFVar18;
          local_b8.DataPtr = (wchar_t *)pFVar20;
          if (pFVar18 !=
              pFVar20 + (((longlong)iVar9 - (longlong)(int)uVar13) + (longlong)(int)uVar10) * 2) {
            do {
              uVar12 = (uint)pTVar22;
              iVar14 = iswspace(*(wint_t *)pFVar18);
              if (iVar14 == 0) break;
              uVar12 = uVar12 + 1;
              pFVar18 = pFVar18 + 2;
              pTVar22 = (TSparseSetElement<TTuple<FString,FString>_> *)(ulonglong)uVar12;
            } while (pFVar18 !=
                     pFVar20 + (((longlong)iVar9 - (longlong)(int)uVar13) + (longlong)(int)uVar10) *
                               2);
            iVar9 = local_c8.Size;
          }
          pFVar20 = (FScriptContainerElement *)
                    ((longlong)local_c8.DataPtr + (longlong)(int)uVar12 * 2);
          iVar9 = iVar9 - uVar12;
          if (iVar9 != 0) {
            lVar19 = (longlong)iVar9;
            do {
              iVar14 = iswspace(*(wint_t *)(pFVar20 + lVar19 * 2 + -2));
              if (iVar14 == 0) break;
              iVar9 = iVar9 + -1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          local_88.Key = &local_b8;
          this_00 = &this->HeadersReceived;
          local_c8._12_4_ = uStack_8c;
          local_c8.Size = iVar9;
          iVar14 = *(int *)&(this->HeadersReceived).field_0x34;
          local_88.Value = &local_c8;
          local_c8.DataPtr = (wchar_t *)pFVar20;
          local_98 = pFVar20;
          iStack_90 = iVar9;
          if (iVar14 == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,1,(ForAnyElementType *)this_00,
                               (int *)&(this->HeadersReceived).field_0x8,
                               (int *)&(this->HeadersReceived).field_0xc);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->HeadersReceived).field_0x10,
                       false);
          }
          else {
            iVar9 = *(int *)&(this->HeadersReceived).field_0x30;
            iVar14 = iVar14 + -1;
            iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar9 * 0x28);
            *(int *)&(this->HeadersReceived).field_0x30 = iVar2;
            *(int *)&(this->HeadersReceived).field_0x34 = iVar14;
            if (iVar14 != 0) {
              *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x28) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,&local_78,iVar9);
          pvVar4 = local_78.Pointer;
          pTVar22 = pTVar25;
          if (local_78.Pointer != (TSparseSetElement<TTuple<FString,FString>_> *)0x0) {
            TPairInitializer<TStringView<wchar_t>_&,TStringView<wchar_t>_&>::
            operator<FString,FString>_TTuple<FString,FString>(&local_88,local_78.Pointer);
            *(undefined4 *)((longlong)pvVar4 + 0x20) = 0xffffffff;
            pTVar22 = pvVar4;
          }
          local_res10[0] = local_78.Index;
          if (*(int *)&pTVar22->field_0x8 == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = *(wchar_t **)pTVar22;
            uVar21 = *(int *)&pTVar22->field_0x8 - 1;
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar21,pwVar17);
          bVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::TryReplaceExisting
                            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                              *)this_00,uVar10,pTVar22,local_res10,(bool *)0x0);
          if (!bVar7) {
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)this_00,uVar10,pTVar22,local_res10[0]);
          }
          iVar9 = (this->HeaderKeysToReportReceived).ArrayNum;
          piVar1 = &(this->HeaderKeysToReportReceived).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->HeaderKeysToReportReceived).AllocatorInstance,piVar1);
          }
          pFVar20 = (this->HeaderKeysToReportReceived).AllocatorInstance.Data;
          (this->HeaderKeysToReportReceived).ArrayNum = iVar9 + 1;
          pFVar20 = pFVar20 + (longlong)iVar9 * 0x10;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          *(undefined8 *)&pFVar20[8].field_0x0 = 0;
          pFVar18 = (FScriptContainerElement *)
                    ::FString::ConstructFromPtrSize(&local_58,local_b8.DataPtr,local_b8.Size);
          if (pFVar20 != pFVar18) {
            pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->
                     AllocatorInstance).Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance
            ).Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                     AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance
            ).Data = (FScriptContainerElement *)0x0;
            *(int *)&pFVar20[8].field_0x0 = *(int *)&pFVar18[8].field_0x0;
            *(int *)&pFVar20[0xc].field_0x0 = *(int *)&pFVar18[0xc].field_0x0;
            *(undefined8 *)&pFVar18[8].field_0x0 = 0;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          LOCK();
          this->bHasPendingDelegate = (atomic<bool>)0x1;
          UNLOCK();
        }
        FVar6.Data = local_d8.Data;
        sVar16 = wcslen((wchar_t *)(local_d8.Data + (longlong)(int)uVar23 * 2));
        sVar15 = sVar16 & 0xffffffff;
        iVar9 = (int)sVar16;
      }
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
    local_res18[0] = Unknown;
    local_res8[0] = 4;
    iVar9 = WinHttpQueryHeaders((this->RequestHandle).Handle,0x20000013,0,local_res18,local_res8,0);
    if (iVar9 != 0) {
      pvVar4 = (this->RequestHandle).Handle;
      this->ResponseCode = local_res18[0];
      local_res20[0] = 0;
      local_res8[0] = 4;
      iVar9 = WinHttpQueryHeaders(pvVar4,0x20000005,0,local_res20,local_res8,0);
      if ((iVar9 != 0) && (local_res20[0] != 0)) {
        this->ResponseContentLength = (ulonglong)local_res20[0];
      }
      uVar10 = 0x2000;
      if (this->ResponseContentLength != 0) {
        uVar10 = (uint)this->ResponseContentLength;
      }
      if (-1 < (int)uVar10) {
        if ((this->CurrentChunk).ArrayMax < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar10,&(this->CurrentChunk).AllocatorInstance,
                     (this->CurrentChunk).ArrayNum,&(this->CurrentChunk).ArrayMax);
        }
        this->CurrentAction = RequestNextResponseBodyChunkSize;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    uVar10 = GetLastError();
  }
  FWinHttpErrorHelper::LogWinHttpQueryHeadersFailure(uVar10);
  return false;
}

// PumpMessages @ 1431758d0

void __thiscall FWinHttpConnectionHttp::PumpMessages(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_01;
  Type TVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  TTuple<FString,FString> *pTVar10;
  Type *pTVar11;
  int iVar12;
  FDestructionSentinel *pFVar13;
  FScriptContainerElement *pFVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType local_110;
  int local_108;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  TSharedRef<IWinHttpConnection,1> local_a0;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (this->bHasPendingDelegate == (atomic<bool>)0x0) {
    return;
  }
  LOCK();
  this->bHasPendingDelegate = (atomic<bool>)0x0;
  UNLOCK();
  TSharedFromThis<IWinHttpConnection,1>::AsShared
            ((TSharedFromThis<IWinHttpConnection,1> *)&this->_padding_,&local_a0);
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bRequestCancelled != false) goto LAB_143175dfe;
  this_00 = &this->CurrentChunk;
  iVar12 = (this->CurrentChunk).ArrayNum;
  if (0 < iVar12) {
    this->BytesWrittenToGameThreadChunk = this->BytesWrittenToGameThreadChunk + (longlong)iVar12;
    piVar1 = &(this->GameThreadChunk).ArrayNum;
    this_01 = &this->GameThreadChunk;
    if (*piVar1 == 0) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(this_01,this_00);
    }
    else {
      if ((this_01 == this_00) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->CurrentChunk).ArrayNum;
      if (iVar12 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar12,&this_01->AllocatorInstance,piVar1,
                           &(this->GameThreadChunk).ArrayMax);
        memcpy((this_01->AllocatorInstance).Data + iVar9,(this_00->AllocatorInstance).Data,
               (longlong)iVar12);
      }
    }
    iVar12 = 0x2000;
    if (this->BytesWrittenToGameThreadChunk <= this->ResponseContentLength) {
      iVar12 = (int)this->ResponseContentLength - (int)this->BytesWrittenToGameThreadChunk;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(this_00,iVar12);
  }
  if ((this->BytesToReportSent).bIsSet == false) {
    if ((this->BytesToReportReceived).bIsSet != false) goto LAB_143175a41;
  }
  else {
    (this->BytesToReportSent).bIsSet = false;
LAB_143175a41:
    if ((this->BytesToReportReceived).bIsSet != false) {
      (this->BytesToReportReceived).bIsSet = false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDataTransferredHandler,&local_78);
    if ((*(int *)&(this->OnDataTransferredHandler).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnDataTransferredHandler).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (this->bRequestCancelled != false) goto LAB_143175dfe;
  }
  if ((this->HeaderKeysToReportReceived).ArrayNum != 0) {
    pFVar4 = (this->HeaderKeysToReportReceived).AllocatorInstance.Data;
    (this->HeaderKeysToReportReceived).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (this->HeaderKeysToReportReceived).ArrayNum;
    (this->HeaderKeysToReportReceived).ArrayNum = 0;
    (this->HeaderKeysToReportReceived).ArrayMax = 0;
    DestructItems<FString,int>
              ((FString *)(this->HeaderKeysToReportReceived).AllocatorInstance.Data,0);
    (this->HeaderKeysToReportReceived).ArrayNum = 0;
    for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)iVar12 * 0x10; pFVar14 = pFVar14 + 0x10) {
      pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&this->HeadersReceived,(FString *)pFVar14);
      if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnHeaderReceivedHandler,&local_60);
      if ((*(int *)&(this->OnHeaderReceivedHandler).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnHeaderReceivedHandler).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,pFVar14);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      if (this->bRequestCancelled != false) {
        DestructItems<FString,int>((FString *)pFVar4,iVar12);
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        goto LAB_143175dfe;
      }
    }
    DestructItems<FString,int>((FString *)pFVar4,iVar12);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnRequestCompleteHandler,&local_90);
  if (((*(int *)&(this->OnRequestCompleteHandler).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnRequestCompleteHandler).field_0x8, plVar3 == (longlong *)0x0
      )) || (cVar8 = (**(code **)(*plVar3 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    goto LAB_143175dfe;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  if ((this->FinalState).bIsSet == false) goto LAB_143175dfe;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnRequestCompleteHandler,(FWriteAccessScope *)&local_100);
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  local_110.Data = *(FScriptContainerElement **)&(this->OnRequestCompleteHandler).field_0x8;
  *(undefined8 *)&(this->OnRequestCompleteHandler).field_0x8 = 0;
  local_108 = *(int *)&(this->OnRequestCompleteHandler).field_0x10;
  *(undefined4 *)&(this->OnRequestCompleteHandler).field_0x10 = 0;
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnRequestCompleteHandler,(FWriteAccessScope *)&local_e8);
  if ((*(int *)&(this->OnRequestCompleteHandler).field_0x10 != 0) &&
     (puVar5 = *(undefined8 **)&(this->OnRequestCompleteHandler).field_0x8,
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OnRequestCompleteHandler).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->OnRequestCompleteHandler).field_0x10 = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pTVar11 = TOptional<enum_EHttpRequestStatus::Type>::GetValue(&this->FinalState);
  TVar2 = *pTVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_118,&local_48);
  if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_110.Data + 0x68))(local_110.Data,TVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (this->bRequestCancelled == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_b8);
    if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
      local_108 = 0;
    }
    if (local_b8.bDestroyed == false) {
      pFVar13 = &local_b8;
      local_d0.Accessor = local_b8.Accessor;
      goto LAB_143175db5;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_d0);
    if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
      local_108 = 0;
    }
    if (local_d0.bDestroyed == false) {
      pFVar13 = &local_d0;
LAB_143175db5:
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,pFVar13);
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
LAB_143175dfe:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  return;
}

// PumpStates @ 143175e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpConnectionHttp::PumpStates(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool *pbVar1;
  int *piVar2;
  EState EVar3;
  FRequestPayload *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  DWORD DVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  int iVar13;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar13 = 0;
  do {
    EVar3 = this->CurrentAction;
    switch(EVar3) {
    case WaitToStart:
    case WaitForSendComplete:
    case WaitForResponseHeaders:
    case WaitForNextResponseBodyChunkSize:
    case WaitForNextResponseBodyChunkData:
    case Finished:
      goto switchD_143175eab_caseD_0;
    case SendRequest:
switchD_143175eab_caseD_1:
      bVar8 = SendRequest(this);
      goto LAB_143175eb5;
    case SendAdditionalRequestBody:
      pFVar4 = (this->Payload).Object;
      if (((pFVar4 == (FRequestPayload *)0x0) ||
          (uVar11 = (**(code **)((longlong)*pFVar4 + 8))(), uVar11 <= this->NumBytesSuccessfullySent
          )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("HasRequestBodyToSend()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                    ,0x143,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = SendAdditionalRequestBody(this);
      if (bVar8) break;
      goto LAB_14317617f;
    case RequestResponse:
      if ((EVar3 != RequestResponse) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentAction == EState::RequestResponse",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                             ,0x2df,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->Payload).Object;
      if (((pFVar4 != (FRequestPayload *)0x0) &&
          (uVar12 = (**(code **)((longlong)*pFVar4 + 8))(), uVar12 != this->NumBytesSuccessfullySent
          )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Payload.IsValid() || Payload->GetContentLength() == NumBytesSuccessfullySent"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                                    ,0x2e0,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar6 = (this->RequestHandle).Handle;
      this->CurrentAction = WaitForResponseHeaders;
      iVar9 = WinHttpReceiveResponse(pvVar6,0);
      if (iVar9 == 0) {
        DVar10 = GetLastError();
        FWinHttpErrorHelper::LogWinHttpReceiveResponseFailure(DVar10);
        if (DVar10 != 0x2f00) {
          this->CurrentAction = RequestResponse;
          goto LAB_14317617f;
        }
        this->CurrentAction = SendRequest;
        goto switchD_143175eab_caseD_1;
      }
      break;
    case ProcessResponseHeaders:
      bVar8 = ProcessResponseHeaders(this);
LAB_143175eb5:
      if (bVar8 == false) {
LAB_14317617f:
        (**(code **)(this->_padding_ + 0x48))(this,2);
        goto switchD_143175eab_caseD_0;
      }
      break;
    case RequestNextResponseBodyChunkSize:
      if ((EVar3 != RequestNextResponseBodyChunkSize) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentAction == EState::RequestNextResponseBodyChunkSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                             ,0x36c,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar6 = (this->RequestHandle).Handle;
      this->CurrentAction = WaitForNextResponseBodyChunkSize;
      iVar9 = WinHttpQueryDataAvailable(pvVar6,0);
      if (iVar9 == 0) {
        DVar10 = GetLastError();
        FWinHttpErrorHelper::LogWinHttpQueryDataAvailableFailure(DVar10);
        this->CurrentAction = RequestNextResponseBodyChunkSize;
        goto LAB_14317617f;
      }
      break;
    case RequestNextResponseBodyChunkData:
      if ((EVar3 != RequestNextResponseBodyChunkData) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentAction == EState::RequestNextResponseBodyChunkData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                             ,0x37d,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pbVar1 = &(this->ResponseBytesAvailable).bIsSet;
      if ((*pbVar1 == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResponseBytesAvailable.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                             ,0x37e,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((this->ResponseBytesAvailable).bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = (this->ResponseBytesAvailable).TypedValue;
      if (*pbVar1 != false) {
        *pbVar1 = false;
      }
      if (uVar11 == 0) {
        if (6 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
        (**(code **)(this->_padding_ + 0x48))(this,3);
      }
      else {
        piVar2 = &(this->CurrentChunk).ArrayNum;
        iVar9 = *piVar2;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)uVar11,&(this->CurrentChunk).AllocatorInstance,piVar2,
                   &(this->CurrentChunk).ArrayMax);
        pFVar5 = (this->CurrentChunk).AllocatorInstance.Data;
        pvVar6 = (this->RequestHandle).Handle;
        this->CurrentAction = WaitForNextResponseBodyChunkData;
        iVar9 = WinHttpReadData(pvVar6,pFVar5 + iVar9,uVar11 & 0xffffffff,0);
        if (iVar9 == 0) {
          DVar10 = GetLastError();
          FWinHttpErrorHelper::LogWinHttpReadDataFailure(DVar10);
          this->CurrentAction = RequestNextResponseBodyChunkData;
          goto LAB_14317617f;
        }
      }
      break;
    default:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x176,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x14);
switchD_143175eab_caseD_0:
                    /* WARNING: Could not recover jumptable at 0x0001431761af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleasePayloadData @ 143177cd0

void __thiscall FWinHttpConnectionHttp::ReleasePayloadData(FWinHttpConnectionHttp *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->PayloadBuffer).ArrayNum = 0;
  if ((this->PayloadBuffer).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PayloadBuffer).AllocatorInstance,0,&(this->PayloadBuffer).ArrayMax);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Payload != (TSharedPtr<FRequestPayload,1> *)&local_18) {
    (this->Payload).Object = (FRequestPayload *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Payload).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RequestNextResponseBodyChunkData @ 143178b70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWinHttpConnectionHttp::RequestNextResponseBodyChunkData(FWinHttpConnectionHttp *this)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  DWORD DVar9;
  
  if (this->CurrentAction != RequestNextResponseBodyChunkData) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAction == EState::RequestNextResponseBodyChunkData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x37d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if ((this->ResponseBytesAvailable).bIsSet == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResponseBytesAvailable.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x37e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((this->ResponseBytesAvailable).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  uVar2 = (this->ResponseBytesAvailable).TypedValue;
  if ((this->ResponseBytesAvailable).bIsSet != false) {
    (this->ResponseBytesAvailable).bIsSet = false;
  }
  if (uVar2 == 0) {
    if (6 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    (**(code **)(this->_padding_ + 0x48))(this,3);
  }
  else {
    piVar1 = &(this->CurrentChunk).ArrayNum;
    iVar8 = *piVar1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)uVar2,&(this->CurrentChunk).AllocatorInstance,piVar1,
               &(this->CurrentChunk).ArrayMax);
    pFVar3 = (this->CurrentChunk).AllocatorInstance.Data;
    pvVar4 = (this->RequestHandle).Handle;
    this->CurrentAction = WaitForNextResponseBodyChunkData;
    iVar8 = WinHttpReadData(pvVar4,pFVar3 + iVar8,uVar2 & 0xffffffff,0);
    if (iVar8 == 0) {
      DVar9 = GetLastError();
      FWinHttpErrorHelper::LogWinHttpReadDataFailure(DVar9);
      this->CurrentAction = RequestNextResponseBodyChunkData;
      return false;
    }
  }
  return true;
}

// RequestNextResponseBodyChunkSize @ 143178d00

bool __thiscall
FWinHttpConnectionHttp::RequestNextResponseBodyChunkSize(FWinHttpConnectionHttp *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  DWORD DVar6;
  
  if (this->CurrentAction != RequestNextResponseBodyChunkSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAction == EState::RequestNextResponseBodyChunkSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x36c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pvVar1 = (this->RequestHandle).Handle;
  this->CurrentAction = WaitForNextResponseBodyChunkSize;
  iVar5 = WinHttpQueryDataAvailable(pvVar1,0);
  if (iVar5 == 0) {
    DVar6 = GetLastError();
    FWinHttpErrorHelper::LogWinHttpQueryDataAvailableFailure(DVar6);
    this->CurrentAction = RequestNextResponseBodyChunkSize;
    return false;
  }
  return true;
}

// RequestResponse @ 143178d80

bool __thiscall FWinHttpConnectionHttp::RequestResponse(FWinHttpConnectionHttp *this)

{
  FRequestPayload *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  ulong64 uVar8;
  
  if (this->CurrentAction != RequestResponse) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAction == EState::RequestResponse",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x2df,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->Payload).Object;
  if (pFVar1 != (FRequestPayload *)0x0) {
    uVar8 = (**(code **)((longlong)*pFVar1 + 8))();
    if (uVar8 != this->NumBytesSuccessfullySent) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Payload.IsValid() || Payload->GetContentLength() == NumBytesSuccessfullySent"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x2e0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  pvVar2 = (this->RequestHandle).Handle;
  this->CurrentAction = WaitForResponseHeaders;
  iVar6 = WinHttpReceiveResponse(pvVar2,0);
  if (iVar6 == 0) {
    DVar7 = GetLastError();
    FWinHttpErrorHelper::LogWinHttpReceiveResponseFailure(DVar7);
    if (DVar7 == 0x2f00) {
      this->CurrentAction = SendRequest;
      bVar4 = SendRequest(this);
      return bVar4;
    }
    this->CurrentAction = RequestResponse;
    return false;
  }
  return true;
}

// SendAdditionalRequestBody @ 14317c630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWinHttpConnectionHttp::SendAdditionalRequestBody(FWinHttpConnectionHttp *this)

{
  TSharedPtr<FRequestPayload,1> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FRequestPayload *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  DWORD DVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((this->CurrentAction != SendAdditionalRequestBody) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentAction == EState::SendAdditionalRequestBody",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x2b7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = (this->Payload).Object;
  if (((pFVar2 == (FRequestPayload *)0x0) ||
      (uVar10 = (**(code **)((longlong)*pFVar2 + 8))(), uVar10 <= this->NumBytesSuccessfullySent))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasRequestBodyToSend()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                            ,0x2b8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pTVar1 = &this->Payload;
  if ((pTVar1->Object == (FRequestPayload *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payload.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x2b9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((pTVar1->Object == (FRequestPayload *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar11 = (**(code **)((longlong)*pTVar1->Object + 8))();
  lVar11 = lVar11 - this->NumBytesSuccessfullySent;
  if ((lVar11 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalBytesLeftToWrite > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,700,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  this_00 = &this->PayloadBuffer;
  iVar8 = 0x2000;
  if (lVar11 < 0x2000) {
    iVar8 = (int)lVar11;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar8,No);
  if ((pTVar1->Object == (FRequestPayload *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = pTVar1->Object;
  pcVar5 = *(code **)((longlong)*pFVar2 + 0x20);
  if (((this->PayloadBuffer).ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar11 = (*pcVar5)(pFVar2);
  if (lVar11 < 1) {
    (this->PayloadBuffer).ArrayNum = 0;
    if ((this->PayloadBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&this_00->AllocatorInstance,0,&(this->PayloadBuffer).ArrayMax);
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,(int)lVar11,No);
    if (6 < (byte)LogWinHttp._0_1_) {
      if (((this->Payload).Object == (FRequestPayload *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      (**(code **)((longlong)*(this->Payload).Object + 8))();
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    iVar8 = (this->PayloadBuffer).ArrayNum;
    pFVar3 = (this->PayloadBuffer).AllocatorInstance.Data;
    pvVar4 = (this->RequestHandle).Handle;
    this->CurrentAction = WaitForSendComplete;
    iVar8 = WinHttpWriteData(pvVar4,pFVar3,iVar8,0);
    if (iVar8 == 0) {
      DVar9 = GetLastError();
      FWinHttpErrorHelper::LogWinHttpWriteDataFailure(DVar9);
      this->CurrentAction = SendAdditionalRequestBody;
      return false;
    }
  }
  return true;
}

// SendRequest @ 14317c950

bool __thiscall FWinHttpConnectionHttp::SendRequest(FWinHttpConnectionHttp *this)

{
  EState EVar1;
  int iVar2;
  FRequestPayload *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  FScriptContainerElement *pFVar10;
  
  if (((this->CurrentAction != WaitToStart) && (this->CurrentAction != SendRequest)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentAction == EState::WaitToStart || CurrentAction == EState::SendRequest"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                         ,0x267,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar2 = (this->PayloadBuffer).ArrayNum;
  EVar1 = this->CurrentAction;
  this->NumBytesSuccessfullySent = 0;
  if (iVar2 < 1) {
    pFVar10 = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar10 = (this->PayloadBuffer).AllocatorInstance.Data;
  }
  pFVar3 = (this->Payload).Object;
  if (pFVar3 == (FRequestPayload *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)((longlong)*pFVar3 + 8))();
  }
  this->CurrentAction = WaitForSendComplete;
  do {
    iVar8 = WinHttpSendRequest((this->RequestHandle).Handle,0,0,pFVar10,iVar2,uVar7,this);
    if (iVar8 != 0) {
      return true;
    }
    DVar9 = GetLastError();
    FWinHttpErrorHelper::LogWinHttpSendRequestFailure(DVar9);
  } while ((DVar9 == 0x2f00) && ((this->RequestHandle).Handle != (void *)0x0));
  this->CurrentAction = EVar1;
  return false;
}

// SetDataTransferredHandler @ 14317de20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::SetDataTransferredHandler
          (FWinHttpConnectionHttp *this,
          TDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitToStart) {
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDataTransferredHandler,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    }
    else if (5 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
                    /* WARNING: Could not recover jumptable at 0x00014317de92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetHeader @ 14317e180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWinHttpConnectionHttp::SetHeader(FWinHttpConnectionHttp *this,FString *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString local_28;
  
  if ((param_1->Data).ArrayNum < 2) {
    if (2 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    return false;
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentAction != WaitToStart) {
    if (2 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    bVar3 = false;
    goto LAB_14317e36c;
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  iVar8 = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = iVar8;
  }
  iVar6 = iVar5 + 1;
  if (iVar5 == 0) {
    iVar6 = 2;
  }
  ::FString::Reset(&local_28,iVar9 + iVar6);
  iVar5 = (param_1->Data).ArrayNum;
  iVar10 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar10 = iVar8;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
  ::FString::AppendChar(&local_28,L':');
  ::FString::AppendChar(&local_28,L' ');
  iVar5 = (param_2->Data).ArrayNum;
  iVar10 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar10 = iVar8;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar10);
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = iVar8;
  }
  if (iVar5 != iVar9 + iVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderBuffer.Len() == StringSizeNeeded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                       ,0x23d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  iVar6 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    FVar2.Data = (FScriptContainerElement *)L"";
    iVar6 = 0;
  }
  iVar6 = WinHttpAddRequestHeaders((this->RequestHandle).Handle,FVar2.Data,iVar6,0xa0000000);
  if (iVar6 == 0) {
    DVar7 = GetLastError();
    if (((param_2->Data).ArrayNum < 2) && (DVar7 == 0x2f76)) {
      if (5 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      goto LAB_14317e356;
    }
    FWinHttpErrorHelper::LogWinHttpAddRequestHeadersFailure(DVar7);
    if (2 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
    bVar3 = false;
  }
  else {
LAB_14317e356:
    bVar3 = true;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14317e36c:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// SetHeaderReceivedHandler @ 14317e3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::SetHeaderReceivedHandler
          (FWinHttpConnectionHttp *this,
          TDelegate<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitToStart) {
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHeaderReceivedHandler,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    }
    else if (5 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
                    /* WARNING: Could not recover jumptable at 0x00014317e442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetHeaders @ 14317e460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWinHttpConnectionHttp::SetHeaders
          (FWinHttpConnectionHttp *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  DWORD DVar11;
  FStaticBasicLogRecord *pFVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_148;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    return true;
  }
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentAction == WaitToStart) {
    iVar10 = *(int *)&param_1->field_0x28;
    puVar1 = &param_1->field_0x10;
    uStack_12c = 1;
    iStack_130 = 0;
    local_118 = 0;
    iStack_11c = 0;
    if (iVar10 != 0) {
      puVar17 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      local_118 = 0;
      while (uVar14 == 0) {
        lVar13 = (longlong)iStack_130;
        local_118 = local_118 + 0x20;
        iStack_130 = iStack_130 + 1;
        iStack_11c = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
        goto LAB_14317e580;
        uVar14 = puVar17[lVar13 + 1];
      }
      uStack_12c = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_12c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_108 = (int)lVar13;
      iStack_11c = local_118 + -1 + local_108;
      if (iVar10 < iStack_11c) {
        iStack_11c = iVar10;
      }
    }
LAB_14317e580:
    uVar14 = *(uint *)&param_1->field_0x28;
    uStack_114 = local_4c;
    uVar18 = uVar14 & 0xffffffe0;
    iStack_110 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    TStack_c0._padding_ = CONCAT44(uStack_12c,iStack_130);
    uStack_120 = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_11c;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = local_118;
    uStack_a0 = CONCAT44(uStack_10c,iStack_110);
    local_138 = param_1;
    local_128 = puVar1;
    local_c8 = param_1;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar4 = *(uint *)&param_1->field_0x28;
    if (uVar14 != uVar4) {
      puVar16 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar15;
        uVar18 = uVar18 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14317e690;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_104 = (int)lVar13;
      uVar14 = local_104 + -1 + uVar18;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_14317e690:
    do {
      pTVar7 = local_c8;
      if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c0.CurrentBitIndex == uVar14) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) {
        iStack_f0 = 0;
        uStack_ec = 1;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        iVar10 = *(int *)&param_1->field_0x28;
        iStack_dc = iStack_f0;
        local_d8 = iStack_f0;
        if (iVar10 == 0) goto LAB_14317e780;
        puVar17 = *(uint **)&param_1->field_0x20;
        if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar14 = *puVar17;
        if (uVar14 != 0) goto LAB_14317e758;
        goto LAB_14317e740;
      }
      if (*(int *)(*(longlong *)pTVar7 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x28) < 2)
      goto LAB_14317ea79;
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    } while( true );
  }
  if (2 < (byte)LogWinHttp._0_1_) {
    pFVar12 = &::LOG_Static;
    goto LAB_14317ea8d;
  }
LAB_14317ea99:
  bVar8 = false;
LAB_14317ea9c:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
  while (uVar14 = puVar17[lVar13 + 1], uVar14 == 0) {
LAB_14317e740:
    lVar13 = (longlong)iStack_f0;
    local_d8 = local_d8 + 0x20;
    iStack_f0 = iStack_f0 + 1;
    iStack_dc = iVar10;
    if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14317e780;
  }
LAB_14317e758:
  uStack_ec = -uVar14 & uVar14;
  uVar3 = (ulonglong)uStack_ec * 2 + 1;
  lVar13 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_100 = (int)lVar13;
  iStack_dc = local_d8 + -1 + local_100;
  if (iVar10 < iStack_dc) {
    iStack_dc = iVar10;
  }
LAB_14317e780:
  uVar14 = *(uint *)&param_1->field_0x28;
  iStack_d4 = iStack_11c;
  iStack_d0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar18 = uVar14 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_90._28_4_ = iStack_11c;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_1;
  local_e8 = puVar1;
  local_98 = param_1;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14317e8a0;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_fc = (int)lVar13;
    uVar14 = local_fc + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14317e8a0:
  do {
    pTVar7 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_90.CurrentBitIndex == uVar14) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    lVar13 = *(longlong *)pTVar7;
    puVar2 = (undefined8 *)(lVar13 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    iVar10 = *(int *)(lVar13 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    if (1 < iVar10) {
      iVar15 = *(int *)(puVar2 + 3);
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      iVar15 = iVar15 + iVar10;
      ::FString::Reset(&local_148,iVar15);
      iVar10 = *(int *)(puVar2 + 1) + -1;
      if (*(int *)(puVar2 + 1) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_148,(wchar_t *)*puVar2,iVar10);
      ::FString::AppendChar(&local_148,L':');
      ::FString::AppendChar(&local_148,L' ');
      iVar10 = *(int *)(puVar2 + 3) + -1;
      if (*(int *)(puVar2 + 3) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_148,(wchar_t *)puVar2[2],iVar10);
      iVar10 = local_148.Data.ArrayNum + -1;
      if (local_148.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      if (iVar10 != iVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderBuffer.Len() == StringSizeNeeded",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpConnectionHttp.cpp"
                           ,0x207,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar10 = local_148.Data.ArrayNum + -1;
      FVar6.Data = local_148.Data.AllocatorInstance.Data;
      if (local_148.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      iVar10 = WinHttpAddRequestHeaders((this->RequestHandle).Handle,FVar6.Data,iVar10,0xa0000000);
      if (iVar10 == 0) {
        DVar11 = GetLastError();
        if ((1 < *(int *)(puVar2 + 3)) || (DVar11 != 0x2f76)) {
          FWinHttpErrorHelper::LogWinHttpAddRequestHeadersFailure(DVar11);
          if (2 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          bVar8 = false;
          goto LAB_14317ea68;
        }
        if (5 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
  bVar8 = true;
LAB_14317ea68:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  goto LAB_14317ea9c;
LAB_14317ea79:
  if (2 < (byte)LogWinHttp._0_1_) {
    pFVar12 = &::LOG_Static;
LAB_14317ea8d:
    UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogWinHttp);
  }
  goto LAB_14317ea99;
}

// SetPayload @ 14317ed20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWinHttpConnectionHttp::SetPayload
          (FWinHttpConnectionHttp *this,TSharedRef<FRequestPayload,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FRequestPayload *local_18;
  FSharedReferencer<1> local_10;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitToStart) {
      local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
      local_18 = param_1->Object;
      if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_10.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->Payload != (TSharedPtr<FRequestPayload,1> *)&local_18) {
        (this->Payload).Object = local_18;
        local_18 = (FRequestPayload *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Payload).SharedReferenceCount,&local_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_10.ReferenceController);
      bVar1 = true;
    }
    else {
      if (2 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      }
      bVar1 = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetRequestCompletedHandler @ 14317efa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWinHttpConnectionHttp::SetRequestCompletedHandler
          (FWinHttpConnectionHttp *this,
          TDelegate<void___cdecl(EHttpRequestStatus::Type),FDefaultDelegateUserPolicy> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->CurrentAction == WaitToStart) {
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRequestCompleteHandler,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    }
    else if (5 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    }
                    /* WARNING: Could not recover jumptable at 0x00014317f012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartRequest @ 143183260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FWinHttpConnectionHttp::StartRequest(FWinHttpConnectionHttp *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FWinHttpConnectionHttp,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  TSharedRef<IWinHttpConnection,1> *pTVar9;
  longlong lVar10;
  ulonglong uVar11;
  FRequestPayload *pFVar12;
  FWinHttpConnectionHttp *local_78;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedRef<IWinHttpConnection,1> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  lpCriticalSection = &this->SyncObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentAction == WaitToStart) {
    pTVar9 = TSharedFromThis<IWinHttpConnection,1>::AsShared
                       ((TSharedFromThis<IWinHttpConnection,1> *)&this->_padding_,&local_38);
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    local_78 = (FWinHttpConnectionHttp *)pTVar9->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->KeepAlive;
    local_70.ReferenceController = pTVar2;
    if (pTVar1 != (TSharedPtr<FWinHttpConnectionHttp,1> *)&local_78) {
      pTVar1->Object = local_78;
      local_78 = (FWinHttpConnectionHttp *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->KeepAlive).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    lVar10 = WinHttpSetStatusCallback
                       ((this->RequestHandle).Handle,UE_WinHttpStatusHttpCallback,0xffffffff,0);
    if (lVar10 == -1) {
      DVar7 = GetLastError();
      FWinHttpErrorHelper::LogWinHttpSetStatusCallbackFailure(DVar7);
      local_68 = 0;
      FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FWinHttpConnectionHttp,1> *)&local_68) {
        pTVar1->Object = (FWinHttpConnectionHttp *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->KeepAlive).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      bVar5 = false;
      goto LAB_14318350b;
    }
    pFVar12 = (this->Payload).Object;
    if (pFVar12 != (FRequestPayload *)0x0) {
      uVar11 = (**(code **)((longlong)*pFVar12 + 8))();
      iVar8 = (int)uVar11;
      if (0x2000 < uVar11) {
        iVar8 = 0x2000;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->PayloadBuffer,iVar8,No);
      pFVar12 = TSharedPtr<FRequestPayload,1>::operator->(&this->Payload);
      iStack_40 = (this->PayloadBuffer).ArrayNum;
      pcVar3 = *(code **)((longlong)*pFVar12 + 0x20);
      local_48 = (this->PayloadBuffer).AllocatorInstance.Data;
      if (iStack_40 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      local_28 = (undefined4)local_48;
      uStack_24 = local_48._4_4_;
      uStack_1c = uStack_3c;
      iStack_20 = iStack_40;
      iVar8 = (*pcVar3)(pFVar12,&local_28);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->PayloadBuffer,iVar8,No);
    }
    this->CurrentAction = SendRequest;
    bVar5 = SendRequest(this);
    if (bVar5) {
      bVar5 = true;
      goto LAB_14318350b;
    }
    pvVar4 = (this->RequestHandle).Handle;
    this->CurrentAction = WaitToStart;
    lVar10 = WinHttpSetStatusCallback(pvVar4,0,0xffffffff,0);
    if (lVar10 == 0) {
      DVar7 = GetLastError();
      FWinHttpErrorHelper::LogWinHttpSetStatusCallbackFailure(DVar7);
    }
    if ((this->FinalState).bIsSet != false) {
      (this->FinalState).bIsSet = false;
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->KeepAlive != (TSharedPtr<FWinHttpConnectionHttp,1> *)&local_58) {
      (this->KeepAlive).Object = (FWinHttpConnectionHttp *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->KeepAlive).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  else if (2 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    bVar5 = false;
    goto LAB_14318350b;
  }
  bVar5 = false;
LAB_14318350b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

