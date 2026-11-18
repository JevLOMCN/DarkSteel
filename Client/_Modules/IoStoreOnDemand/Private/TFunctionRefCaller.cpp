// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 27

// Call @ 1445b5510

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1445b5520

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  FOnDemandDefragResult local_28;
  
  local_28.Error.bIsSet = *(bool *)((longlong)param_1 + 0x48);
  local_28.DurationInSeconds = *(double *)((longlong)param_1 + 0x30);
  if (local_28.Error.bIsSet != false) {
    UnifiedError::FError::FError(&local_28.Error.TypedValue,(FError *)((longlong)param_1 + 0x38));
  }
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandDefragResult)>
  ::operator()(param_1,&local_28);
  return false;
}

// Call @ 1445b5570

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  FOnDemandPurgeResult local_28;
  
  local_28.Error.bIsSet = *(bool *)((longlong)param_1 + 0x48);
  local_28.DurationInSeconds = *(double *)((longlong)param_1 + 0x30);
  if (local_28.Error.bIsSet != false) {
    UnifiedError::FError::FError(&local_28.Error.TypedValue,(FError *)((longlong)param_1 + 0x38));
  }
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UE::IoStore::FOnDemandPurgeResult)>
  ::operator()(param_1,&local_28);
  return false;
}

// Call @ 1445b55c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1445b55d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>::operator()
            (param_1);
  return false;
}

// Call @ 1445b55f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l2::<lambda_1>,void,int,int,bool>
::Call(void *param_1,int *param_2,int *param_3,bool *param_4)

{
  `UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 1445b5610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>,void,UE::IoStore::FCasJournal::FEntry_const_&>
::Call(void *param_1,FEntry *param_2)

{
  EType EVar1;
  TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
  *this;
  FCasLocation *pFVar2;
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> TStackX_10;
  undefined1 *puStack_18;
  undefined1 *puStack_10;
  
  EVar1 = (param_2->field0_0x0).ChunkLocation.Type;
  if (EVar1 == ChunkLocation) {
    if (((param_2->field0_0x0).CriticalError.ErrorCode != None) &&
       ((param_2->field0_0x0).ChunkLocation.CasLocation.BlockOffset != 0xffffffff)) {
      pFVar2 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               ::FindOrAddImpl<UE::THash<96>_const_&>
                         (*(TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                            **)param_1,*(uint *)((longlong)&param_2->field0_0x0 + 0xc),
                          &(param_2->field0_0x0).ChunkLocation.CasAddr);
      *pFVar2 = (param_2->field0_0x0).ChunkLocation.CasLocation;
      return;
    }
    TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
    ::Remove(*(TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               **)param_1,&(param_2->field0_0x0).ChunkLocation.CasAddr);
  }
  else {
    if (EVar1 == BlockCreated) {
      pFVar2 = &(param_2->field0_0x0).ChunkLocation.CasLocation;
      **(uint **)((longlong)param_1 + 0x18) = (pFVar2->BlockId).Id;
      TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
      ::Emplace<UE::IoStore::FCasBlockId_const_&>
                (*(TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
                   **)((longlong)param_1 + 0x10),(FCasBlockId *)&TStackX_10,(bool *)pFVar2);
      return;
    }
    if (EVar1 == BlockDeleted) {
      this = *(TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
               **)((longlong)param_1 + 0x10);
      if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
        TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::IoStore::FCasBlockId>
                  (this,(param_2->field0_0x0).CriticalError.ErrorCode,
                   &(param_2->field0_0x0).BlockOperation.BlockId);
      }
      if (**(EErrorCode **)((longlong)param_1 + 0x18) ==
          (param_2->field0_0x0).CriticalError.ErrorCode) {
        **(EErrorCode **)((longlong)param_1 + 0x18) = None;
        return;
      }
    }
    else if (EVar1 == BlockAccess) {
      puStack_18 = (undefined1 *)((longlong)&param_2->field0_0x0 + 4);
      puStack_10 = (undefined1 *)((longlong)&param_2->field0_0x0 + 8);
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
                (*(TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                   **)((longlong)param_1 + 8),&TStackX_10,(bool *)&puStack_18);
      return;
    }
  }
  return;
}

// Call @ 1445b5620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>,void,unsigned_int,TStringView<wchar_t>,FIoBuffer_&&>
::Call(void *param_1,uint *param_2,TStringView<wchar_t> *param_3,FIoBuffer *param_4)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  `UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>::operator()
            (param_1,*param_2,&local_18,param_4);
  return;
}

// Call @ 1445b5650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  int *piVar1;
  code *pcVar2;
  EId EVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArrayView<FAnsiString_const_,int> *pTVar7;
  FIoBuffer FVar8;
  FResponse *this;
  long64 lVar9;
  TStringView<char> *pTVar10;
  FString *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackX_18 [8];
  FIoBuffer FStackX_20;
  FString FStack_c8;
  FString FStack_b8;
  code *apcStack_a8 [2];
  undefined **ppuStack_98;
  longlong lStack_90;
  undefined8 uStack_80;
  code *apcStack_78 [2];
  undefined **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_50;
  TArrayView<FAnsiString_const_,int> TStack_48;
  TStringView<char> TStack_38;
  
  EVar3 = IoStore::HTTP::FTicketStatus::GetId(param_2);
  if (EVar3 != Response) {
    if (EVar3 == Content) {
      if ((*(char *)((longlong)param_1 + 0xbd) != '\0') &&
         (*(char *)(*(longlong *)((longlong)param_1 + 0x90) + 0x18) != '\0' ||
          *(int *)(*(longlong *)((longlong)param_1 + 0x90) + 8) != 0)) {
        if ((99 < *(int *)((longlong)param_1 + 0xb4) - 200U) &&
           (*(char *)(*(longlong *)param_1 + 0x1a) == '\0')) {
          return;
        }
        FVar8 = IoStore::JoinIoBuffers(&FStackX_20,(FIoBuffer *)((longlong)param_1 + 0x88));
        FIoBuffer::operator=
                  ((FIoBuffer *)((longlong)param_1 + 0x88),(FIoBuffer *)FVar8.CorePtr.Reference);
        if (FStackX_20.CorePtr.Reference == (BufCore *)0x0) {
          return;
        }
        FIoBuffer::BufCore::CheckRefCount((BufCore *)FStackX_20.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)FStackX_20.CorePtr.Reference + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        FIoBuffer::BufCore::~BufCore((BufCore *)FStackX_20.CorePtr.Reference);
        ::operator_delete((void *)FStackX_20.CorePtr.Reference,0x20);
        return;
      }
    }
    else if ((EVar3 != Cancelled) && (EVar3 != Error)) {
      return;
    }
    iVar6 = *(int *)((longlong)param_1 + 0xc0);
    *(int *)((longlong)param_1 + 0xc0) = iVar6 + 1;
    if ((iVar6 != *(int *)((longlong)param_1 + 0xb0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request.SinkCounter++ == Request.RetryCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x1cc,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    IoStore::FMultiEndpointHttpClient::Log
              (*(FMultiEndpointHttpClient **)param_1,(FRequest *)((longlong)param_1 + 0x10),param_2)
    ;
    if ((*(int *)((longlong)param_1 + 0xb4) - 500U < 100) ||
       (EVar3 = IoStore::HTTP::FTicketStatus::GetId(param_2), EVar3 == Error)) {
      uVar5 = *(uint *)(*(longlong *)param_1 + 0xc);
      if (uVar5 == 0xffffffff) {
        pTVar7 = IoStore::FOnDemandHostGroup::Hosts
                           (*(FOnDemandHostGroup **)((longlong)param_1 + 0x80),&TStack_48);
        uVar5 = pTVar7->ArrayNum;
      }
      if (*(uint *)((longlong)param_1 + 0xb0) < uVar5) {
        IoStore::FMultiEndpointHttpClient::RetryRequest
                  (*(FMultiEndpointHttpClient **)param_1,(FRequest *)((longlong)param_1 + 0x10));
        return;
      }
    }
    IoStore::FMultiEndpointHttpClient::CompleteRequest
              (*(FMultiEndpointHttpClient **)param_1,(FRequest *)((longlong)param_1 + 0x10),param_2)
    ;
    return;
  }
  this = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
  uVar5 = IoStore::HTTP::FResponse::GetStatusCode(this);
  *(uint *)((longlong)param_1 + 0xb4) = uVar5;
  lVar9 = IoStore::HTTP::FResponse::GetContentLength(this);
  *(bool *)((longlong)param_1 + 0xbd) = lVar9 == -1;
  if ((*(byte *)((longlong)param_1 + 0xbc) & 1) != 0) {
    DestructItems<FAnsiString,int>
              (*(FAnsiString **)((longlong)param_1 + 0x50),*(int *)((longlong)param_1 + 0x58));
    *(undefined4 *)((longlong)param_1 + 0x58) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 0x10) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0x10,(ForAnyElementType *)((longlong)param_1 + 0x50),0,
                 (int *)((longlong)param_1 + 0x5c));
    }
    uStack_80 = 0;
    ppuStack_98 = &TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>,0,0>
                   ::_vftable_;
    apcStack_a8[0] =
         TFunctionRefCaller<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
         ::Call;
    lStack_90 = (longlong)param_1 + 0x10;
    IoStore::HTTP::FResponse::ReadHeaders
              (this,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)apcStack_a8);
  }
  if (*(int *)((longlong)param_1 + 0xb4) - 200U < 100) {
    auStackX_18[0] = 0xff;
    ppuStack_68 = &TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::`2'::<lambda_1>,0,0>::
                   _vftable_;
    puStack_60 = auStackX_18;
    uStack_50 = 0;
    apcStack_78[0] =
         TFunctionRefCaller<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
         ::Call;
    IoStore::HTTP::FResponse::ReadHeaders
              (this,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)apcStack_78);
    *(undefined1 *)((longlong)param_1 + 0xbe) = auStackX_18[0];
  }
  else {
    pTVar10 = IoStore::HTTP::FResponse::GetStatusMessage(this,&TStack_38);
    uVar13 = (ulonglong)pTVar10->Size;
    uVar5 = 0;
    uVar14 = uVar13;
    if (pTVar10->Size != 0) {
      do {
        uVar5 = (uint)uVar13;
        iVar6 = isspace((uint)(byte)pTVar10->DataPtr[uVar14 - 1]);
        if (iVar6 == 0) break;
        uVar5 = uVar5 - 1;
        uVar13 = (ulonglong)uVar5;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    FStack_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_c8.Data.ArrayNum = 0;
    FStack_c8.Data.ArrayMax = 0;
    pFVar11 = ::FString::ConstructFromPtrSize(&FStack_b8,pTVar10->DataPtr,uVar5);
    if (&FStack_c8 != pFVar11) {
      FStack_c8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_c8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      FStack_c8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    }
    ::FString::operator=((FString *)((longlong)param_1 + 0x98),&FStack_c8);
    if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = 0x88;
  if (*(char *)((longlong)param_1 + 0xbd) != '\0') {
    lVar12 = 0x90;
  }
  IoStore::HTTP::FResponse::SetDestination(this,(FIoBuffer *)(lVar12 + (longlong)param_1));
  return;
}

// Call @ 1445b5660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandIoBackendStats::PrintOnScreenStatistics'::__l2::<lambda_1>,void,UE::IoStore::FIASHostGroup_const_&>
::Call(void *param_1,FIASHostGroup *param_2)

{
  FImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FText *pFVar7;
  undefined1 auStack_2c8 [32];
  EOnScreenMessageSeverity aEStack_2a8 [16];
  TStringView<char> TStack_298;
  FName FStack_288;
  TArrayView<FAnsiString_const_,int> TStack_280;
  TStringView<wchar_t> TStack_268;
  FText FStack_258;
  TStringBuilderBase<wchar_t> TStack_248;
  wchar_t awStack_228 [256];
  ulonglong auStack_28 [2];
  
  auStack_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  TStack_248.Base = awStack_228;
  TStack_248.CurPos = awStack_228;
  TStack_248.End = (wchar_t *)auStack_28;
  aEStack_2a8[0] = Info;
  TStack_248.bIsDynamic = false;
  TStack_248.bIsExternal = false;
  pvVar5 = FGenericPlatformString::Memcpy(awStack_228,L"HostGroup [",0x16);
  TStack_248.CurPos = (wchar_t *)((longlong)pvVar5 + 0x16);
  if ((param_2->Impl).Object == (FImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FStack_288 = ((param_2->Impl).Object)->Name;
  ::FName::AppendString(&FStack_288,&TStack_248);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&TStack_248,L"] ",2);
  if ((param_2->Impl).Object == (FImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = IoStore::FOnDemandHostGroup::PrimaryHostIndex(&((param_2->Impl).Object)->HostGroup);
  pFVar1 = (param_2->Impl).Object;
  if (iVar4 == -1) {
    if (pFVar1 == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = IoStore::FOnDemandHostGroup::IsEmpty(&((param_2->Impl).Object)->HostGroup);
    if (bVar3) {
      if (TStack_248.End < TStack_248.CurPos + 0xc) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_248,0xc);
      }
      pvVar5 = FGenericPlatformString::Memcpy(TStack_248.CurPos,L"Disconnected",0x18);
      aEStack_2a8[0] = Error;
    }
    else {
      if (TStack_248.End < TStack_248.CurPos + 0xc) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_248,0xc);
      }
      pvVar5 = FGenericPlatformString::Memcpy(TStack_248.CurPos,L"Resolving...",0x18);
    }
    TStack_248.CurPos = (wchar_t *)((longlong)pvVar5 + 0x18);
  }
  else {
    if (pFVar1 == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IoStore::FOnDemandHostGroup::PrimaryHost(&((param_2->Impl).Object)->HostGroup,&TStack_298);
    if (TStack_248.End < TStack_248.CurPos + TStack_298.Size) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_248,(longlong)TStack_298.Size);
    }
    if (TStack_298.Size != 0) {
      TStack_248.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>
                     (TStack_248.CurPos,TStack_298.Size,TStack_298.DataPtr,TStack_298.Size);
    }
    if (TStack_248.End < TStack_248.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&TStack_248,2);
    }
    pvVar5 = FGenericPlatformString::Memcpy(TStack_248.CurPos,L" (",4);
    TStack_248.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
    if ((param_2->Impl).Object == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IoStore::FOnDemandHostGroup::PrimaryHostIndex(&((param_2->Impl).Object)->HostGroup);
    pTVar6 = TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_248,L"%d");
    pTVar6 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar6,L"/",1);
    if ((param_2->Impl).Object == (FImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    IoStore::FOnDemandHostGroup::Hosts(&((param_2->Impl).Object)->HostGroup,&TStack_280);
    pTVar6 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar6,L"%d");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar6,L")",1);
  }
  pvVar5 = *(void **)param_1;
  TStack_298.Size = (int)((longlong)TStack_248.CurPos - (longlong)TStack_248.Base >> 1);
  TStack_298.DataPtr = (char *)TStack_248.Base;
  TStack_268._12_4_ = TStack_298._12_4_;
  TStack_268.Size = TStack_298.Size;
  TStack_268.DataPtr = TStack_248.Base;
  pFVar7 = FText::FromStringView(&FStack_258,&TStack_268);
  TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>(pvVar5,aEStack_2a8,pFVar7);
  if (FStack_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_258.TextData.Reference + 0x10))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_248);
  return;
}

// Call @ 1445b5670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ProcessInstallRequest'::__l2::<lambda_1>,void,int,int,bool>
::Call(void *param_1,int *param_2,int *param_3,bool *param_4)

{
  `UE::IoStore::FOnDemandContentInstaller::ProcessInstallRequest'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 1445b5690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  int *piVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  EResult *pEVar4;
  EId EVar5;
  EResult EVar6;
  EStatusCodeClass EVar7;
  uint uVar8;
  FIoBuffer FVar9;
  FResponse *this;
  long64 lVar10;
  longlong lVar11;
  longlong lStackX_18;
  FIoBuffer FStackX_20;
  FError FStack_18;
  
  EVar5 = IoStore::HTTP::FTicketStatus::GetId(param_2);
  if (EVar5 == Error) {
    IoStore::HTTP::FTicketStatus::GetError(param_2,&FStack_18);
    if (2 < (byte)LogIas._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,unsigned_int_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&FStack_18.Reason,&FStack_18.Code);
      return;
    }
  }
  else {
    EVar5 = IoStore::HTTP::FTicketStatus::GetId(param_2);
    if (EVar5 < Cancelled) {
      EVar5 = IoStore::HTTP::FTicketStatus::GetId(param_2);
      if (EVar5 == Content) {
        if ((*(char *)((longlong)param_1 + 0x18) == '\0') ||
           (*(char *)(*(longlong *)((longlong)param_1 + 0x28) + 0x18) == '\0' &&
            *(int *)(*(longlong *)((longlong)param_1 + 0x28) + 8) == 0)) {
          LOCK();
          **(undefined1 **)param_1 = 1;
          UNLOCK();
          lStackX_18 = *(longlong *)((longlong)param_1 + 0x20);
          pTVar3 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
          if (lStackX_18 != 0) {
            LOCK();
            *(int *)(lStackX_18 + 0xc) = *(int *)(lStackX_18 + 0xc) + 1;
            UNLOCK();
          }
          pEVar4 = *(EResult **)((longlong)param_1 + 0x10);
          EVar6 = IoStore::ParseResponse((FIoBuffer)&lStackX_18,pTVar3);
          *pEVar4 = EVar6;
          return;
        }
        FVar9 = IoStore::JoinIoBuffers(&FStackX_20,(FIoBuffer *)((longlong)param_1 + 0x20));
        FIoBuffer::operator=
                  ((FIoBuffer *)((longlong)param_1 + 0x20),(FIoBuffer *)FVar9.CorePtr.Reference);
        if (FStackX_20.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)FStackX_20.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)FStackX_20.CorePtr.Reference + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FStackX_20.CorePtr.Reference);
            ::operator_delete((void *)FStackX_20.CorePtr.Reference,0x20);
            return;
          }
        }
      }
      else {
        this = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
        EVar7 = IoStore::HTTP::FResponse::GetStatus(this);
        if (EVar7 == Successful) {
          lVar10 = IoStore::HTTP::FResponse::GetContentLength(this);
          *(bool *)((longlong)param_1 + 0x18) = lVar10 == -1;
          lVar11 = 0x20;
          if (lVar10 == -1) {
            lVar11 = 0x28;
          }
          IoStore::HTTP::FResponse::SetDestination(this,(FIoBuffer *)(lVar11 + (longlong)param_1));
        }
        else if (2 < (byte)LogIas._0_1_) {
          uVar8 = IoStore::HTTP::FResponse::GetStatusCode(this);
          lStackX_18 = CONCAT44(lStackX_18._4_4_,uVar8);
          Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int>
                    ((FLogCategoryBase *)&LogIas,&::LOG_Static,(uint *)&lStackX_18);
          return;
        }
      }
    }
  }
  return;
}

// Call @ 1445b56a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  LARGE_INTEGER aLStackX_8 [4];
  
  QueryPerformanceCounter(aLStackX_8);
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  if (*(char *)((longlong)param_1 + 8) != '\0') {
    if (3 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    FWindowsPlatformMisc::RequestExitWithStatus(false,'\0',(wchar_t *)0x0);
    return;
  }
  return;
}

// Call @ 1445b56b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  bool bVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>::operator()
                    (param_1,&local_18,&local_28);
  return bVar1;
}

// Call @ 1445b56e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::__l4::<lambda_1>,void,UE::FIoHttpResponse_&&>
::Call(void *param_1,FIoHttpResponse *param_2)

{
  IoStore::FHttpIoDispatcherBackend::CompleteRequest
            (*(FHttpIoDispatcherBackend **)param_1,*(FResolvedRequest **)((longlong)param_1 + 8),
             param_2);
  return;
}

// Call @ 1445b5700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  uint *puVar1;
  TStringBuilderBase<wchar_t> *pTVar2;
  EId EVar3;
  uint uVar4;
  FResponse *pFVar5;
  FError *pFVar6;
  FError FStack_18;
  
  EVar3 = IoStore::HTTP::FTicketStatus::GetId(param_2);
  if (EVar3 == Response) {
    pFVar5 = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
    IoStore::HTTP::FResponse::SetDestination(pFVar5,*(FIoBuffer **)param_1);
    puVar1 = *(uint **)((longlong)param_1 + 0x10);
    pFVar5 = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
    uVar4 = IoStore::HTTP::FResponse::GetStatusCode(pFVar5);
    *puVar1 = uVar4;
    return;
  }
  EVar3 = IoStore::HTTP::FTicketStatus::GetId(param_2);
  if (EVar3 == Error) {
    pTVar2 = *(TStringBuilderBase<wchar_t> **)((longlong)param_1 + 8);
    pFVar6 = IoStore::HTTP::FTicketStatus::GetError(param_2,&FStack_18);
    operator<<<wchar_t,char_const_*>(pTVar2,&pFVar6->Reason);
  }
  return;
}

// Call @ 1445b5710

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  bool bVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = ``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::
          __l8::<lambda_1>::operator()(param_1,&local_18,&local_28);
  return bVar1;
}

// Call @ 1445b5740

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>,void,UE::IoStore::FMultiEndpointHttpClientResponse_&&>
::Call(void *param_1,FMultiEndpointHttpClientResponse *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FIoBuffer this;
  ForAnyElementType FVar5;
  FTaskHandle FStackX_8;
  <lambda_1> <Stack_78;
  
  LOCK();
  IoStore::GHttpNumConcurrentRequests =
       (atomic<unsigned_int>)((int)IoStore::GHttpNumConcurrentRequests + -1);
  UNLOCK();
  **(int **)((longlong)param_1 + 0x18) = **(int **)((longlong)param_1 + 0x18) + -1;
  <Stack_78.__this = *(FHttpDispatcher **)param_1;
  <Stack_78.HttpRequest = *(FHttpRequest **)((longlong)param_1 + 8);
  <Stack_78.HttpResponse.Body.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(param_2->Body).CorePtr.Reference;
  (param_2->Body).CorePtr.Reference = (BufCore *)0x0;
  <Stack_78.HttpResponse.Headers.AllocatorInstance.Data = (param_2->Headers).AllocatorInstance.Data;
  (param_2->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  <Stack_78.HttpResponse.Headers.ArrayNum = (param_2->Headers).ArrayNum;
  <Stack_78.HttpResponse.Headers.ArrayMax = (param_2->Headers).ArrayMax;
  (param_2->Headers).ArrayNum = 0;
  (param_2->Headers).ArrayMax = 0;
  <Stack_78.HttpResponse.Reason.Data.AllocatorInstance.Data =
       (param_2->Reason).Data.AllocatorInstance.Data;
  (param_2->Reason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  <Stack_78.HttpResponse.Reason.Data.ArrayNum = (param_2->Reason).Data.ArrayNum;
  <Stack_78.HttpResponse.Reason.Data.ArrayMax = (param_2->Reason).Data.ArrayMax;
  (param_2->Reason).Data.ArrayNum = 0;
  (param_2->Reason).Data.ArrayMax = 0;
  <Stack_78.HttpResponse.Sample = param_2->Sample;
  <Stack_78.HttpResponse.DurationMilliseconds = param_2->DurationMilliseconds;
  <Stack_78.HttpResponse.StatusCode = param_2->StatusCode;
  <Stack_78.HttpResponse.RetryCount = param_2->RetryCount;
  <Stack_78.HttpResponse.HostIndex = param_2->HostIndex;
  <Stack_78.HttpResponse.bCanceled = param_2->bCanceled;
  <Stack_78.HttpResponse.CDNCacheStatus = param_2->CDNCacheStatus;
  <Stack_78.TotalRange = *(FIoHttpRange *)((longlong)param_1 + 0x10);
  <Stack_78.HostGroup.Impl.Object = *(FImpl **)((longlong)param_1 + 0x20);
  <Stack_78.HostGroup.Impl.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
  if (<Stack_78.HostGroup.Impl.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (<Stack_78.HostGroup.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(<Stack_78.HostGroup.Impl.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FStackX_8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  Tasks::Private::FTaskHandle::
  Launch<__UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests_::__l9::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&FStackX_8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp(1328)"
             ,&<Stack_78,BackgroundLow,None,None);
  if (FStackX_8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FStackX_8.Pimpl.Reference + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FStackX_8.Pimpl.Reference)(FStackX_8.Pimpl.Reference,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (<Stack_78.HostGroup.Impl.SharedReferenceCount.ReferenceController);
  if (<Stack_78.HttpResponse.Reason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(<Stack_78.HttpResponse.Reason.Data.AllocatorInstance.Data);
  }
  FVar5.Data = <Stack_78.HttpResponse.Headers.AllocatorInstance.Data;
  DestructItems<FAnsiString,int>
            ((FAnsiString *)<Stack_78.HttpResponse.Headers.AllocatorInstance.Data,
             <Stack_78.HttpResponse.Headers.ArrayNum);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  this.CorePtr.Reference = <Stack_78.HttpResponse.Body.CorePtr.Reference;
  if (<Stack_78.HttpResponse.Body.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)<Stack_78.HttpResponse.Body.CorePtr.Reference);
    LOCK();
    piVar2 = (int *)((longlong)this.CorePtr.Reference + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this.CorePtr.Reference);
      ::operator_delete((void *)this.CorePtr.Reference,0x20);
    }
  }
  return;
}

// Call @ 1445b5750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::LatencyTest'::__l26::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  EId EVar1;
  EStatusCodeClass EVar2;
  FResponse *this;
  uint auStackX_18 [4];
  FError FStack_18;
  
  EVar1 = IoStore::HTTP::FTicketStatus::GetId(param_2);
  if (EVar1 == Error) {
    IoStore::HTTP::FTicketStatus::GetError(param_2,&FStack_18);
    if (2 < (byte)LogIas._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,char_const_*_&,unsigned_int_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,*(TStringView<char> **)param_1,
                 *(TStringBuilderWithBuffer<char,256> **)((longlong)param_1 + 8),&FStack_18.Reason,
                 &FStack_18.Code);
      return;
    }
  }
  else {
    EVar1 = IoStore::HTTP::FTicketStatus::GetId(param_2);
    if (EVar1 == Response) {
      this = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
      EVar2 = IoStore::HTTP::FResponse::GetStatus(this);
      *(bool *)*(undefined8 *)((longlong)param_1 + 0x10) = EVar2 == Successful;
      EVar2 = IoStore::HTTP::FResponse::GetStatus(this);
      if (EVar2 == Successful) {
        **(undefined1 **)((longlong)param_1 + 0x10) = 1;
        return;
      }
      if (2 < (byte)LogIas._0_1_) {
        auStackX_18[0] = IoStore::HTTP::FResponse::GetStatusCode(this);
        Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,TStringBuilderWithBuffer<char,256>_&,unsigned_int>
                  ((FLogCategoryBase *)&LogIas,&::LOG_Static,*(TStringView<char> **)param_1,
                   *(TStringBuilderWithBuffer<char,256> **)((longlong)param_1 + 8),auStackX_18);
      }
    }
  }
  return;
}

// Call @ 1445b5760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>,void>::Call
          (void *param_1)

{
  IoStore::FOnDemandIoStore::TickLoop(*(FOnDemandIoStore **)param_1);
  return;
}

// Call @ 1445b5770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>,void,UE::IoStore::FMultiEndpointHttpClientResponse_&&>
::Call(void *param_1,FMultiEndpointHttpClientResponse *param_2)

{
  int *piVar1;
  EHttpRequestType EVar2;
  int iVar3;
  longlong lVar4;
  BufCore *pBVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  FIoBuffer *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  FIoBuffer FStackX_20;
  FIASHostGroup FStack_b8;
  FIASHostGroup FStack_a8;
  FScriptContainerElement *pFStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *pFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *pFStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *pFStack_68;
  undefined8 uStack_60;
  FScriptContainerElement *pFStack_58;
  undefined8 uStack_50;
  FScriptContainerElement *pFStack_48;
  undefined8 uStack_40;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId529,"FOnDemandHttpThread::RequestCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x211);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId529);
  }
  **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + -1;
  LOCK();
  IoStore::GHttpNumConcurrentRequests =
       (atomic<unsigned_int>)((int)IoStore::GHttpNumConcurrentRequests + -1);
  UNLOCK();
  if (param_2->RetryCount != 0) {
    IoStore::FOnDemandIoBackendStats::OnHttpRetry
              (IoStore::GStatistics,
               *(EHttpRequestType *)(*(longlong *)((longlong)param_1 + 8) + 0x62));
  }
  if (param_2->StatusCode - 200 < 100) {
    lVar4 = *(longlong *)((longlong)param_1 + 8);
    if ((*(longlong *)(lVar4 + 0x40) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x40);
    FStack_b8.Impl.Object = *(FImpl **)(lVar4 + 0x30);
    FStack_b8.Impl.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar4 + 0x38);
    if (FStack_b8.Impl.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_b8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(FStack_b8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
           );
      UNLOCK();
    }
    IoStore::FIASHostGroup::OnSuccessfulResponse(&FStack_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b8.Impl.SharedReferenceCount.ReferenceController);
    if (param_2->CDNCacheStatus == -1) {
      IoStore::GHttpCdnCacheUnknown = IoStore::GHttpCdnCacheUnknown + 1;
    }
    else if (param_2->CDNCacheStatus == '\0') {
      IoStore::GHttpCdnCacheMiss = IoStore::GHttpCdnCacheMiss + 1;
    }
    else {
      IoStore::GHttpCdnCacheHit = IoStore::GHttpCdnCacheHit + 1;
    }
    pBVar5 = (param_2->Body).CorePtr.Reference;
    IoStore::FOnDemandIoBackendStats::OnHttpGet
              (IoStore::GStatistics,
               *(EHttpRequestType *)(*(longlong *)((longlong)param_1 + 8) + 0x62),
               (ulonglong)CONCAT14(pBVar5->DataSizeHigh,pBVar5->DataSizeLow),
               param_2->DurationMilliseconds);
    pFStack_98 = (param_2->Reason).Data.AllocatorInstance.Data;
    lVar4 = *(longlong *)((longlong)param_1 + 8);
    iVar3 = (param_2->Reason).Data.ArrayNum;
    iStack_90 = iVar3 + -1;
    auStackX_8[0] = param_2->StatusCode;
    if (iVar3 == 0) {
      iStack_90 = 0;
    }
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    pFStack_68 = pFStack_98;
    CheckCallable(*(void **)(lVar4 + 0x10));
    pcVar6 = *(code **)(lVar4 + 0x10);
    plVar10 = (longlong *)(lVar4 + 0x20);
    if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar4 + 0x38);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar6)(uVar8,auStackX_8,&pFStack_68,param_2);
  }
  else {
    EVar2 = *(EHttpRequestType *)(*(longlong *)((longlong)param_1 + 8) + 0x62);
    if (param_2->bCanceled == false) {
      IoStore::FOnDemandIoBackendStats::OnHttpError(IoStore::GStatistics,EVar2);
      lVar4 = *(longlong *)((longlong)param_1 + 8);
      if ((*(longlong *)(lVar4 + 0x40) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x40);
      FStack_a8.Impl.Object = *(FImpl **)(lVar4 + 0x30);
      FStack_a8.Impl.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar4 + 0x38);
      if (FStack_a8.Impl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_a8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(FStack_a8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      bVar7 = IoStore::FIASHostGroup::OnFailedResponse(&FStack_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a8.Impl.SharedReferenceCount.ReferenceController);
      if (bVar7) {
        IoStore::FOnDemandIoBackendStats::OnHttpDisconnected(IoStore::GStatistics);
      }
      lVar4 = *(longlong *)((longlong)param_1 + 8);
      pFVar9 = FIoBuffer::FIoBuffer(&FStackX_20);
      pFStack_78 = (param_2->Reason).Data.AllocatorInstance.Data;
      iVar3 = (param_2->Reason).Data.ArrayNum;
      auStackX_18[0] = param_2->StatusCode;
      iStack_70 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_70 = 0;
      }
      uStack_40 = CONCAT44(uStack_6c,iStack_70);
      pFStack_48 = pFStack_78;
      CheckCallable(*(void **)(lVar4 + 0x10));
      pcVar6 = *(code **)(lVar4 + 0x10);
      plVar10 = (longlong *)(lVar4 + 0x20);
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar4 + 0x38);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar8,auStackX_18,&pFStack_48,pFVar9);
      if (FStackX_20.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)FStackX_20.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)FStackX_20.CorePtr.Reference + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FStackX_20.CorePtr.Reference);
          ::operator_delete((void *)FStackX_20.CorePtr.Reference,0x20);
        }
      }
    }
    else {
      IoStore::FOnDemandIoBackendStats::OnHttpCancel(IoStore::GStatistics,EVar2);
      pFStack_88 = (param_2->Reason).Data.AllocatorInstance.Data;
      lVar4 = *(longlong *)((longlong)param_1 + 8);
      iVar3 = (param_2->Reason).Data.ArrayNum;
      iStack_80 = iVar3 + -1;
      auStackX_10[0] = param_2->StatusCode;
      if (iVar3 == 0) {
        iStack_80 = 0;
      }
      uStack_50 = CONCAT44(uStack_7c,iStack_80);
      pFStack_58 = pFStack_88;
      CheckCallable(*(void **)(lVar4 + 0x10));
      pcVar6 = *(code **)(lVar4 + 0x10);
      plVar10 = (longlong *)(lVar4 + 0x20);
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar4 + 0x38);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar8,auStackX_10,&pFStack_58,param_2);
    }
  }
  IoStore::FOnDemandHttpThread::DestroyRequest
            (*(FOnDemandHttpThread **)param_1,*(FHttpRequest **)((longlong)param_1 + 8));
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 1445b5780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>,void,UE::IoStore::FCasJournal::FEntry_const_&>
::Call(void *param_1,FEntry *param_2)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  FCasLocation *pFVar4;
  undefined4 auStackX_10 [2];
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> TStackX_18;
  FCasLocation *pFStack_18;
  undefined4 *puStack_10;
  
  EVar1 = (param_2->field0_0x0).ChunkLocation.Type;
  if (EVar1 == ChunkLocation) {
    if (((param_2->field0_0x0).CriticalError.ErrorCode != None) &&
       ((param_2->field0_0x0).ChunkLocation.CasLocation.BlockOffset != 0xffffffff)) {
      pFVar4 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               ::FindOrAddImpl<UE::THash<96>_const_&>
                         ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                           *)(*(longlong *)param_1 + 0x38),
                          *(uint *)((longlong)&param_2->field0_0x0 + 0xc),
                          &(param_2->field0_0x0).ChunkLocation.CasAddr);
      *pFVar4 = (param_2->field0_0x0).ChunkLocation.CasLocation;
      return;
    }
    TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
    ::Remove((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
              *)(*(longlong *)param_1 + 0x38),&(param_2->field0_0x0).ChunkLocation.CasAddr);
  }
  else {
    if (EVar1 == BlockCreated) {
      pFStack_18 = &(param_2->field0_0x0).ChunkLocation.CasLocation;
      LOCK();
      *(uint *)(*(longlong *)param_1 + 400) = (pFStack_18->BlockId).Id;
      UNLOCK();
      puStack_10 = auStackX_10;
      auStackX_10[0] = 0;
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                  *)(*(longlong *)param_1 + 0x88),&TStackX_18,(bool *)&pFStack_18);
      return;
    }
    if (EVar1 == BlockDeleted) {
      TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
      ::Remove((TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
                *)(*(longlong *)param_1 + 0x88),&(param_2->field0_0x0).BlockOperation.BlockId);
      LOCK();
      if ((param_2->field0_0x0).CriticalError.ErrorCode ==
          *(EErrorCode *)(*(longlong *)param_1 + 400)) {
        *(EErrorCode *)(*(longlong *)param_1 + 400) = None;
      }
      UNLOCK();
      return;
    }
    if (((EVar1 == BlockAccess) &&
        (bVar3 = IoStore::FCas::TrackAccessIf
                           ((FCas *)(*(longlong *)param_1 + 0x28),Always,
                            (FCasBlockId)(param_2->field0_0x0).ChunkLocation.CasLocation.BlockId.Id,
                            (param_2->field0_0x0).BlockOperation.UtcTicks,false), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cas.TrackAccessIf(ECasTrackAccessType::Always, Op.BlockId, Op.UtcTicks, bDirty)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                           ,0x765,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Call @ 1445b5790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  `UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1445b57b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l83::<lambda_2>,void,UE::IoStore::FOnDemandInstallResult>
::Call(void *param_1,FOnDemandInstallResult *param_2)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  FString local_58;
  double local_48;
  ulong64 local_40;
  ulong64 uStack_38;
  ulong64 local_30;
  FError local_28;
  char local_18;
  
  local_48 = param_2->DurationInSeconds;
  local_40 = (param_2->Progress).TotalContentSize;
  uStack_38 = (param_2->Progress).TotalInstallSize;
  local_18 = (param_2->Error).bIsSet;
  local_30 = (param_2->Progress).CurrentInstallSize;
  if ((bool)local_18 != false) {
    UnifiedError::FError::FError(&local_28,&(param_2->Error).TypedValue);
  }
  if ((1 < (byte)LogIoStoreOnDemand._0_1_) && (local_18 != '\0')) {
    ::LexToString(&local_58,&local_28);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_insta_150d88f50,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(*(longlong *)**(undefined8 **)param_1 + 0x10))();
  TVar1.Reference = local_28.ErrorDetails.Reference;
  if ((local_18 != '\0') &&
     (local_28.ErrorCode = 0, local_28.ModuleId = 0,
     local_28.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_28.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (local_28.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_28.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// Call @ 1445b58a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l83::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  FIoRequest *pFVar1;
  int iVar2;
  FIoRequest *this;
  undefined1 local_res10 [8];
  
  this = *(FIoRequest **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar1 = this + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar2) {
      `TCheckedPointerIterator<FIoRequest,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this == pFVar1) break;
    FIoRequest::Cancel(this);
    this = this + 1;
  }
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Canceled_all_re_150d7c410,(FLogCategoryBase *)&LogIas
              );
  }
  return false;
}

// Call @ 1445b5920

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>,void,UE::FIoHttpResponse_&&>
::Call(void *param_1,FIoHttpResponse *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  int iVar3;
  EIoHttpResponseFlags EVar4;
  atomic<unsigned_int> aVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EIoErrorCode EVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  FTaskBase *this;
  FPipe *pFVar18;
  BufCore *this_00;
  atomic<unsigned_int> aVar19;
  
  lVar11 = *(longlong *)((longlong)param_1 + 8);
  lVar12 = *(longlong *)((longlong)param_1 + 0x10);
  lVar10 = *(longlong *)param_1;
  aVar5 = *(atomic<unsigned_int> *)((param_2->CacheKey).Hash + 0x10);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x18);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
  pFVar18 = (FPipe *)(param_2->Headers).Headers.AllocatorInstance.Data;
  lVar13 = *(longlong *)(param_2->CacheKey).Hash;
  lVar14 = *(longlong *)((param_2->CacheKey).Hash + 8);
  (param_2->Headers).Headers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = *(undefined1 *)&(param_2->Headers).Headers.ArrayMax;
  uVar16 = *(undefined1 *)((longlong)&(param_2->Headers).Headers.ArrayMax + 1);
  uVar17 = *(undefined2 *)((longlong)&(param_2->Headers).Headers.ArrayMax + 2);
  aVar19 = (atomic<unsigned_int>)(param_2->Headers).Headers.ArrayNum;
  (param_2->Headers).Headers.ArrayNum = 0;
  (param_2->Headers).Headers.ArrayMax = 0;
  this_00 = (param_2->Body).CorePtr.Reference;
  (param_2->Body).CorePtr.Reference = (BufCore *)0x0;
  EVar8 = param_2->ErrorCode;
  uVar9 = param_2->StatusCode;
  EVar4 = param_2->Flags;
  this = FMemory::Malloc(0x140,0x40);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this,L"ProcessIoStoreOnDemandDownloadedChunk",BackgroundLow,None,None);
    this[1]._padding_ = lVar10;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar7;
    this[1]._padding_ = lVar11;
    this[1]._padding_ = lVar12;
    *(undefined4 *)&this[1]._padding_ = uVar6;
    this[1]._padding_ = lVar13;
    this[1]._padding_ = lVar14;
    this[1].RefCount = aVar5;
    this[1].Pipe = pFVar18;
    pFVar18 = (FPipe *)0x0;
    this[1].ExtendedPriority = uVar15;
    this[1].TaskTriggered = (atomic<bool>)uVar16;
    this[1]._padding_ = uVar17;
    this[1].StateChangeEvent.Count = aVar19;
    aVar19 = (atomic<unsigned_int>)0x0;
    *(EIoErrorCode *)&this[1].TraceId = EVar8;
    *(uint *)&this[1].TraceId.field_0x4 = uVar9;
    this[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData[0] = EVar4;
    *(BufCore **)&this[1].ExecutingThreadId = this_00;
    this_00 = (BufCore *)0x0;
    this->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  LOCK();
  *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
  UNLOCK();
  LOCK();
  this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks + 1);
  UNLOCK();
  this->Pipe = (FPipe *)(lVar10 + 0x10);
  Tasks::Private::FTaskBase::TryLaunch(this,0x140);
  LOCK();
  paVar1 = &this->RefCount;
  aVar5 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar5 == (atomic<unsigned_int>)0x1) {
    (**(code **)this->_padding_)(this,1);
  }
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
  DestructItems<FAnsiString,int>((FAnsiString *)pFVar18,(int)aVar19);
  if (pFVar18 != (FPipe *)0x0) {
    FMemory::Free(pFVar18);
  }
  return;
}

// Call @ 1445b5930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>,void,unsigned_int,TStringView<wchar_t>,FIoBuffer_&&>
::Call(void *param_1,uint *param_2,TStringView<wchar_t> *param_3,FIoBuffer *param_4)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  `UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>::operator()
            (param_1,*param_2,&local_18,param_4);
  return;
}

