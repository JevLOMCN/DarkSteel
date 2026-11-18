// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// ~FChunkRequests @ 1445a82f0

void __thiscall
UE::IoStore::FOnDemandIoBackend::FChunkRequests::~FChunkRequests(FChunkRequests *this)

{
  void *pvVar1;
  FSlab *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  *(undefined4 *)&(this->Inflight).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inflight).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inflight);
  pFVar2 = (this->Allocator).CurrentSlab;
  if (pFVar2->Allocated != pFVar2->Freed) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::operator_delete((this->Allocator).CurrentSlab,0x4c08);
  return;
}

// Cancel @ 1445b5a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandIoBackend::FChunkRequests::Cancel
          (FChunkRequests *this,FIoRequestImpl *param_1,FOnDemandHttpThread *param_2,
          IIasCache *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FIoHash *pFVar2;
  FIoRequestImpl *pFVar3;
  FIoRequestImpl *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  void *pvVar10;
  TStringBuilderBase<wchar_t> *this_00;
  longlong *plVar11;
  short sVar12;
  undefined1 auStack_2e8 [32];
  FOnDemandHttpThread *local_2c8;
  FIoChunkId *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FIoHash *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TArrayView<unsigned_char_const_,int> local_298;
  TArrayView<unsigned_char_const_,int> local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (!GIasCancelationEnabled) {
    return false;
  }
  lpCriticalSection = &this->Mutex;
  local_2c8 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = param_1->BackendData;
  if (pFVar2 != (FIoHash *)0x0) {
    if (6 < (byte)LogIas._0_1_) {
      local_278.Base = local_258;
      local_278.bIsDynamic = false;
      local_278.bIsExternal = false;
      local_278.CurPos = local_258;
      local_278.End = (wchar_t *)local_58;
      pvVar10 = FGenericPlatformString::Memcpy(local_258,L"Cancelling I/O request ChunkId=\'",0x40);
      local_278.CurPos = (wchar_t *)((longlong)pvVar10 + 0x40);
      uStack_2b0 = 0xc;
      local_2b8 = &param_1->ChunkId;
      local_298._12_4_ = uStack_2ac;
      local_298.ArrayNum = 0xc;
      local_298.DataPtr = local_2b8->Id;
      String::BytesToHexLower(&local_298,&local_278);
      this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_278,L"\' ChunkKey=\'",0xc);
      uStack_2a0 = 0x14;
      local_288._12_4_ = uStack_29c;
      local_288.ArrayNum = 0x14;
      local_2a8 = pFVar2;
      local_288.DataPtr = pFVar2->Hash;
      String::BytesToHexLower(&local_288,this_00);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,L"\'",1);
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      *local_278.CurPos = L'\0';
      Logging::Private::BasicLog<7>
                (&`public:_bool___cdecl_UE::IoStore::FOnDemandIoBackend::FChunkRequests::Cancel(FIoRequestImpl*___ptr64,UE::IoStore::FOnDemandHttpThread&___ptr64,UE::IoStore::IIasCache*___ptr64)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogIas);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
    }
    iVar9 = TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FIoHash>
                      ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
                        *)&this->Inflight,*(uint *)pFVar2->Hash,pFVar2);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->Inflight + (longlong)iVar9 * 0x28;
      plVar11 = (longlong *)(lVar1 + 0x18);
      if (lVar1 == 0) {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 != (longlong *)0x0) {
        lVar1 = *plVar11;
        if ((*(short *)(lVar1 + 0x7c) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RequestCount > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                               ,0x15a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar3 = *(FIoRequestImpl **)(lVar1 + 0x40);
        if (pFVar3 == param_1) {
          pFVar3 = param_1->NextRequest;
          *(FIoRequestImpl **)(lVar1 + 0x40) = pFVar3;
          if (*(FIoRequestImpl **)(lVar1 + 0x48) == param_1) {
            if ((pFVar3 != (FIoRequestImpl *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RequestHead == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                   ,0x161,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            *(longlong *)(lVar1 + 0x48) = 0;
          }
        }
        else {
          pFVar4 = pFVar3->NextRequest;
          while (pFVar4 != param_1) {
            pFVar3 = pFVar3->NextRequest;
            if (pFVar3 == (FIoRequestImpl *)0x0) goto LAB_1445b5df8;
            pFVar4 = pFVar3->NextRequest;
          }
          pFVar4 = pFVar3->NextRequest->NextRequest;
          pFVar3->NextRequest = pFVar4;
          if (*(FIoRequestImpl **)(lVar1 + 0x48) == param_1) {
            if ((pFVar4 != (FIoRequestImpl *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("It->NextRequest == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                   ,0x175,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            *(FIoRequestImpl **)(lVar1 + 0x48) = pFVar3;
          }
        }
        param_1->NextRequest = (FIoRequestImpl *)0x0;
        sVar12 = *(short *)(lVar1 + 0x7c) + -1;
        *(short *)(lVar1 + 0x7c) = sVar12;
        if ((param_1->NextRequest != (FIoRequestImpl *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Request->NextRequest == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                               ,0x249,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (sVar12 == 0) {
          if ((*(longlong *)(lVar1 + 0x48) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChunkRequest.RequestTail == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                 ,0x24d,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar5 = *(longlong *)(lVar1 + 0x50);
          *(undefined1 *)(lVar1 + 0x7f) = 1;
          if ((lVar5 != 0) &&
             (*(undefined1 *)(lVar5 + 99) = 1, GIaxHttpEnableInflightCancellation != false)) {
            FMultiEndpointHttpClient::CancelRequest
                      ((local_2c8->HttpClient).Ptr,*(uint *)(lVar5 + 8));
          }
          if (param_3 != (IIasCache *)0x0) {
            (**(code **)((longlong)*param_3 + 0x30))(param_3,lVar1 + 0x68);
          }
          if (*(int *)&(this->Inflight).field_0x8 != *(int *)&(this->Inflight).field_0x34) {
            TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<FIoHash>
                      ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
                        *)&this->Inflight,*(uint *)pFVar2->Hash,pFVar2);
          }
        }
        bVar7 = true;
        goto LAB_1445b5dfb;
      }
    }
  }
LAB_1445b5df8:
  bVar7 = false;
LAB_1445b5dfb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar7;
}

// Create @ 1445be3a0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FChunkRequest * __thiscall
UE::IoStore::FOnDemandIoBackend::FChunkRequests::Create
          (FChunkRequests *this,FIoRequestImpl *param_1,FChunkRequestParams *param_2,bool *param_3,
          bool *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FIoRequestImpl **ppFVar1;
  longlong lVar2;
  int iVar3;
  FIoRequestImpl *pFVar4;
  code *pcVar5;
  FIoRequestImpl *pFVar6;
  FChunkRequest **ppFVar7;
  bool bVar8;
  int iVar9;
  FChunkRequest *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  TPairInitializer<FIoHash_const_&,UE::IoStore::FChunkRequest_*_const_&> local_res8;
  FChunkRequest *local_58;
  FChunkRequestParams *local_50;
  FChunkRequest **local_48;
  TArrayView<FAnsiString_const_,int> local_40;
  
  lpCriticalSection = &this->Mutex;
  local_res8.Value = (FChunkRequest **)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar7 = local_res8.Value;
  if ((*(void **)((longlong)local_res8.Value + 0x30) != (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request->BackendData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                         ,0x1dc,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FChunkRequest *)(*pcVar5)();
    return pFVar10;
  }
  plVar11 = ::operator_new(0x14);
  plVar12 = (longlong *)0x0;
  if (plVar11 != (longlong *)0x0) {
    lVar2 = *(longlong *)((param_2->ChunkKey).Hash + 8);
    *plVar11 = *(longlong *)(param_2->ChunkKey).Hash;
    plVar11[1] = lVar2;
    *(undefined4 *)(plVar11 + 2) = *(undefined4 *)((param_2->ChunkKey).Hash + 0x10);
    plVar12 = plVar11;
  }
  *(longlong **)((longlong)ppFVar7 + 0x30) = plVar12;
  iVar9 = TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FIoHash>
                    ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
                      *)&this->Inflight,*(uint *)(param_2->ChunkKey).Hash,&param_2->ChunkKey);
  if (iVar9 != -1) {
    lVar2 = *(longlong *)&this->Inflight + (longlong)iVar9 * 0x28;
    plVar12 = (longlong *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      pFVar10 = (FChunkRequest *)*plVar12;
      if ((pFVar10->bCancelled != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ChunkRequest->bCancelled",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                             ,0x212,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FChunkRequest *)(*pcVar5)();
        return pFVar10;
      }
      ppFVar7 = local_res8.Value;
      *param_3 = true;
      if (((pFVar10->RequestHead == (FIoRequestImpl *)0x0) ||
          (pFVar10->RequestTail == (FIoRequestImpl *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestHead && RequestTail",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                             ,0x137,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FChunkRequest *)(*pcVar5)();
        return pFVar10;
      }
      if ((((FIoRequestImpl *)ppFVar7 == (FIoRequestImpl *)0x0) ||
          (*(FIoRequestImpl **)((longlong)ppFVar7 + 0x28) != (FIoRequestImpl *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Request && !Request->NextRequest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                             ,0x138,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FChunkRequest *)(*pcVar5)();
        return pFVar10;
      }
      pFVar4 = pFVar10->RequestHead;
      iVar3 = *(int *)((longlong)ppFVar7 + 0x68);
      iVar9 = pFVar4->Priority;
      if (iVar9 < iVar3) {
        pFVar10->Priority = iVar3;
        *(FIoRequestImpl **)((longlong)ppFVar7 + 0x28) = pFVar4;
        pFVar10->RequestHead = (FIoRequestImpl *)ppFVar7;
      }
      else {
        for (pFVar6 = pFVar4->NextRequest;
            (pFVar6 != (FIoRequestImpl *)0x0 && (iVar3 <= pFVar6->Priority));
            pFVar6 = pFVar6->NextRequest) {
          pFVar4 = pFVar6;
        }
        ppFVar1 = &pFVar4->NextRequest;
        if (pFVar10->RequestTail == pFVar4) {
          if ((*ppFVar1 != (FIoRequestImpl *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("It->NextRequest == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                 ,0x14b,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FChunkRequest *)(*pcVar5)();
            return pFVar10;
          }
          pFVar10->RequestTail = (FIoRequestImpl *)ppFVar7;
        }
        *(FIoRequestImpl **)((longlong)ppFVar7 + 0x28) = *ppFVar1;
        *ppFVar1 = (FIoRequestImpl *)ppFVar7;
      }
      pFVar10->RequestCount = pFVar10->RequestCount + 1;
      *param_4 = iVar9 < iVar3;
      Trace(true,(FIoChunkId *)((longlong)local_res8.Value + 0x38),param_2);
      goto LAB_1445be691;
    }
  }
  *param_4 = false;
  *param_3 = false;
  local_58 = TSingleThreadedSlabAllocator<UE::IoStore::FChunkRequest,128>::
             Construct<FIoRequestImpl_*_&,UE::IoStore::FChunkRequestParams_const_&>
                       (&this->Allocator,(FIoRequestImpl **)&local_res8.Value,param_2);
  this->ChunkRequestCount = this->ChunkRequestCount + 1;
  local_48 = &local_58;
  local_50 = param_2;
  TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FIoHash_const_&,UE::IoStore::FChunkRequest_*_const_&>_>
            ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
              *)&this->Inflight,&local_res8,(bool *)&local_50);
  Trace(false,(FIoChunkId *)((longlong)local_res8.Value + 0x38),param_2);
  pFVar10 = local_58;
  if (((local_58->HostGroup).Impl.Object == (FImpl *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FChunkRequest *)(*pcVar5)();
    return pFVar10;
  }
  FOnDemandHostGroup::Hosts(&((pFVar10->HostGroup).Impl.Object)->HostGroup,&local_40);
  pFVar10 = local_58;
  if ((local_40.ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkRequest->HostGroup.GetHostUrls().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                         ,0x223,L""), pFVar10 = local_58, bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FChunkRequest *)(*pcVar5)();
    return pFVar10;
  }
LAB_1445be691:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar10;
}

// Release @ 1445f4f60

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::FChunkRequests::Release
          (FChunkRequests *this,FChunkRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  short *psVar1;
  int *piVar2;
  int iVar3;
  FLaneTrace *pFVar4;
  BufCore *this_00;
  FChunkRequest *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = (param_1->LaneScope).Lane;
  (param_1->LaneScope).Lane = (FLaneTrace *)0x0;
  if (pFVar4 != (FLaneTrace *)0x0) {
    LaneTrace_Leave(pFVar4);
  }
  LaneEstate_Demolish(GRequestLaneEstate,(FLanePostcode)param_1);
  pFVar4 = (param_1->LaneScope).Lane;
  if (pFVar4 != (FLaneTrace *)0x0) {
    LaneTrace_Leave(pFVar4);
  }
  this_00 = (param_1->Chunk).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar2 = &this_00->NumRefs;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->HostGroup).Impl.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Params).ChunkInfo.SharedContainer.SharedReferenceCount.ReferenceController);
  pFVar5 = param_1[1].NextRequest;
  psVar1 = (short *)((longlong)&pFVar5->NextRequest + 2);
  *psVar1 = *psVar1 + 1;
  if (*(short *)((longlong)&pFVar5->NextRequest + 2) == 0x80) {
    if (*(short *)&pFVar5->NextRequest != 0x80) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slab->Freed == Slab->Allocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x48,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    ::operator_delete(pFVar5,0x4c08);
  }
  piVar2 = &this->ChunkRequestCount;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkRequestCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                       ,0x285,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001445f50a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

