// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 49

// TIoStatusOr<unsigned___int64><unsigned_int> @ 1445941d0

TIoStatusOr<unsigned___int64> * __thiscall
TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64><unsigned_int>
          (TIoStatusOr<unsigned___int64> *this,uint *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(ulonglong *)(this->Value).Pad = (ulonglong)*param_1;
  return this;
}

// TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> @ 1445a1b90

TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> * __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this,
          FMultiEndpointHttpClientResponse *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(BufCore **)(this->Value).Pad = (param_1->Body).CorePtr.Reference;
  (param_1->Body).CorePtr.Reference = (BufCore *)0x0;
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 8) = (param_1->Headers).AllocatorInstance.Data;
  (param_1->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x10) = (param_1->Headers).ArrayNum;
  *(int *)((this->Value).Pad + 0x14) = (param_1->Headers).ArrayMax;
  (param_1->Headers).ArrayNum = 0;
  (param_1->Headers).ArrayMax = 0;
  (this->Value).Pad[0x18] = '\0';
  (this->Value).Pad[0x19] = '\0';
  (this->Value).Pad[0x1a] = '\0';
  (this->Value).Pad[0x1b] = '\0';
  (this->Value).Pad[0x1c] = '\0';
  (this->Value).Pad[0x1d] = '\0';
  (this->Value).Pad[0x1e] = '\0';
  (this->Value).Pad[0x1f] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x18) =
       (param_1->Reason).Data.AllocatorInstance.Data;
  (param_1->Reason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x20) = (param_1->Reason).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x24) = (param_1->Reason).Data.ArrayMax;
  (param_1->Reason).Data.ArrayNum = 0;
  (param_1->Reason).Data.ArrayMax = 0;
  *(FSample *)((this->Value).Pad + 0x28) = param_1->Sample;
  *(ulong64 *)((this->Value).Pad + 0x30) = param_1->DurationMilliseconds;
  *(uint *)((this->Value).Pad + 0x38) = param_1->StatusCode;
  *(uint *)((this->Value).Pad + 0x3c) = param_1->RetryCount;
  *(int *)((this->Value).Pad + 0x40) = param_1->HostIndex;
  (this->Value).Pad[0x44] = param_1->bCanceled;
  (this->Value).Pad[0x45] = param_1->CDNCacheStatus;
  return this;
}

// TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> @ 1445a1c50

TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> * __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> @ 1445a1cc0

TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this,FOnDemandEndpointConfig *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad =
       (param_1->DistributionUrl).Data.AllocatorInstance.Data;
  (param_1->DistributionUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->DistributionUrl).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->DistributionUrl).Data.ArrayMax;
  (param_1->DistributionUrl).Data.ArrayNum = 0;
  (param_1->DistributionUrl).Data.ArrayMax = 0;
  (this->Value).Pad[0x10] = '\0';
  (this->Value).Pad[0x11] = '\0';
  (this->Value).Pad[0x12] = '\0';
  (this->Value).Pad[0x13] = '\0';
  (this->Value).Pad[0x14] = '\0';
  (this->Value).Pad[0x15] = '\0';
  (this->Value).Pad[0x16] = '\0';
  (this->Value).Pad[0x17] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x10) =
       (param_1->FallbackUrl).Data.AllocatorInstance.Data;
  (param_1->FallbackUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x18) = (param_1->FallbackUrl).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x1c) = (param_1->FallbackUrl).Data.ArrayMax;
  (param_1->FallbackUrl).Data.ArrayNum = 0;
  (param_1->FallbackUrl).Data.ArrayMax = 0;
  (this->Value).Pad[0x20] = '\0';
  (this->Value).Pad[0x21] = '\0';
  (this->Value).Pad[0x22] = '\0';
  (this->Value).Pad[0x23] = '\0';
  (this->Value).Pad[0x24] = '\0';
  (this->Value).Pad[0x25] = '\0';
  (this->Value).Pad[0x26] = '\0';
  (this->Value).Pad[0x27] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x20) =
       (param_1->ServiceUrls).AllocatorInstance.Data;
  (param_1->ServiceUrls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x28) = (param_1->ServiceUrls).ArrayNum;
  *(int *)((this->Value).Pad + 0x2c) = (param_1->ServiceUrls).ArrayMax;
  (param_1->ServiceUrls).ArrayNum = 0;
  (param_1->ServiceUrls).ArrayMax = 0;
  (this->Value).Pad[0x30] = '\0';
  (this->Value).Pad[0x31] = '\0';
  (this->Value).Pad[0x32] = '\0';
  (this->Value).Pad[0x33] = '\0';
  (this->Value).Pad[0x34] = '\0';
  (this->Value).Pad[0x35] = '\0';
  (this->Value).Pad[0x36] = '\0';
  (this->Value).Pad[0x37] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x30) =
       (param_1->TocPath).Data.AllocatorInstance.Data;
  (param_1->TocPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x38) = (param_1->TocPath).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x3c) = (param_1->TocPath).Data.ArrayMax;
  (param_1->TocPath).Data.ArrayNum = 0;
  (param_1->TocPath).Data.ArrayMax = 0;
  (this->Value).Pad[0x40] = '\0';
  (this->Value).Pad[0x41] = '\0';
  (this->Value).Pad[0x42] = '\0';
  (this->Value).Pad[0x43] = '\0';
  (this->Value).Pad[0x44] = '\0';
  (this->Value).Pad[0x45] = '\0';
  (this->Value).Pad[0x46] = '\0';
  (this->Value).Pad[0x47] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x40) =
       (param_1->TocFilePath).Data.AllocatorInstance.Data;
  (param_1->TocFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x48) = (param_1->TocFilePath).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x4c) = (param_1->TocFilePath).Data.ArrayMax;
  (param_1->TocFilePath).Data.ArrayNum = 0;
  (param_1->TocFilePath).Data.ArrayMax = 0;
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> @ 1445a1da0

TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> @ 1445a1e10

TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this,
          FOnDemandInstallCacheConfig *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad =
       (param_1->RootDirectory).Data.AllocatorInstance.Data;
  (param_1->RootDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->RootDirectory).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->RootDirectory).Data.ArrayMax;
  (param_1->RootDirectory).Data.ArrayNum = 0;
  (param_1->RootDirectory).Data.ArrayMax = 0;
  *(ulong64 *)((this->Value).Pad + 0x10) = param_1->DiskQuota;
  *(ulong64 *)((this->Value).Pad + 0x18) = param_1->JournalMaxSize;
  *(double *)((this->Value).Pad + 0x20) = param_1->LastAccessGranularitySeconds;
  (this->Value).Pad[0x28] = param_1->bDropCache;
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> @ 1445a1e90

TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> @ 1445a1f00

TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>::
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *this,
          FOnDemandInstallSizeResult *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  uVar2 = param_1->InstallSize;
  (this->Value).Pad[0x10] = '\0';
  *(ulong64 *)(this->Value).Pad = uVar2;
  bVar1 = (param_1->DownloadSize).bIsSet;
  (this->Value).Pad[0x10] = bVar1;
  if (bVar1 != false) {
    *(ulong64 *)((this->Value).Pad + 8) = (param_1->DownloadSize).TypedValue;
  }
  return this;
}

// TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> @ 1445a1f60

TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>::
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> @ 1445a1fd0

TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> * __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this,
          TSharedPtr<FIoContainerHeader,1> *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(FIoContainerHeader **)(this->Value).Pad = param_1->Object;
  *(TReferenceControllerBase<1> **)((this->Value).Pad + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FIoContainerHeader *)0x0;
  return this;
}

// TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> @ 1445a2020

TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> * __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<UE::IoStore::FIASHostGroup> @ 1445a2090

TIoStatusOr<UE::IoStore::FIASHostGroup> * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *this,
          TIoStatusOr<UE::IoStore::FIASHostGroup> *param_1)

{
  longlong lVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  if ((this->StatusValue).ErrorCode == Ok) {
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    lVar1 = *(longlong *)((param_1->Value).Pad + 8);
    *(longlong *)((this->Value).Pad + 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FIoStatus::operator=(&param_1->StatusValue,Unknown);
  }
  return this;
}

// TIoStatusOr<UE::IoStore::FIASHostGroup> @ 1445a20f0

TIoStatusOr<UE::IoStore::FIASHostGroup> * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *this,FIASHostGroup *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(FImpl **)(this->Value).Pad = (param_1->Impl).Object;
  pTVar1 = (param_1->Impl).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((this->Value).Pad + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TIoStatusOr<UE::IoStore::FIASHostGroup> @ 1445a2140

TIoStatusOr<UE::IoStore::FIASHostGroup> * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> @ 1445a6f80

void __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::
~TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse
              ((FMultiEndpointHttpClientResponse *)&this->Value);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> @ 1445a6fc0

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::
~TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FOnDemandEndpointConfig::~FOnDemandEndpointConfig
              ((FOnDemandEndpointConfig *)&this->Value);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> @ 1445a7000

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::
~TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> @ 1445a7050

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>::
~TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>
          (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> @ 1445a7080

void __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::~TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<UE::IoStore::FIASHostGroup> @ 1445a70c0

void __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::~TIoStatusOr<UE::IoStore::FIASHostGroup>
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ConsumeValueOrDie @ 1445bdac0

FIoOffsetAndLength * __thiscall
TIoStatusOr<FIoOffsetAndLength>::ConsumeValueOrDie
          (TIoStatusOr<FIoOffsetAndLength> *this,FIoOffsetAndLength *__return_storage_ptr__)

{
  undefined2 uVar1;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  uVar1 = *(undefined2 *)((this->Value).Pad + 8);
  *(undefined8 *)__return_storage_ptr__->OffsetAndLength = *(undefined8 *)(this->Value).Pad;
  *(undefined2 *)(__return_storage_ptr__->OffsetAndLength + 8) = uVar1;
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdb10

FMultiEndpointHttpClientResponse * __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this,
          FMultiEndpointHttpClientResponse *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->Body).CorePtr.Reference = (BufCore *)0x0;
  (__return_storage_ptr__->Body).CorePtr.Reference = *(BufCore **)(this->Value).Pad;
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  (__return_storage_ptr__->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Headers).AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 8);
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  (__return_storage_ptr__->Headers).ArrayNum = *(int *)((this->Value).Pad + 0x10);
  (__return_storage_ptr__->Headers).ArrayMax = *(int *)((this->Value).Pad + 0x14);
  (this->Value).Pad[0x10] = '\0';
  (this->Value).Pad[0x11] = '\0';
  (this->Value).Pad[0x12] = '\0';
  (this->Value).Pad[0x13] = '\0';
  (this->Value).Pad[0x14] = '\0';
  (this->Value).Pad[0x15] = '\0';
  (this->Value).Pad[0x16] = '\0';
  (this->Value).Pad[0x17] = '\0';
  (__return_storage_ptr__->Reason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Reason).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x18);
  (this->Value).Pad[0x18] = '\0';
  (this->Value).Pad[0x19] = '\0';
  (this->Value).Pad[0x1a] = '\0';
  (this->Value).Pad[0x1b] = '\0';
  (this->Value).Pad[0x1c] = '\0';
  (this->Value).Pad[0x1d] = '\0';
  (this->Value).Pad[0x1e] = '\0';
  (this->Value).Pad[0x1f] = '\0';
  (__return_storage_ptr__->Reason).Data.ArrayNum = *(int *)((this->Value).Pad + 0x20);
  (__return_storage_ptr__->Reason).Data.ArrayMax = *(int *)((this->Value).Pad + 0x24);
  (this->Value).Pad[0x20] = '\0';
  (this->Value).Pad[0x21] = '\0';
  (this->Value).Pad[0x22] = '\0';
  (this->Value).Pad[0x23] = '\0';
  (this->Value).Pad[0x24] = '\0';
  (this->Value).Pad[0x25] = '\0';
  (this->Value).Pad[0x26] = '\0';
  (this->Value).Pad[0x27] = '\0';
  __return_storage_ptr__->Sample = *(FSample *)((this->Value).Pad + 0x28);
  __return_storage_ptr__->DurationMilliseconds = *(ulong64 *)((this->Value).Pad + 0x30);
  __return_storage_ptr__->StatusCode = *(uint *)((this->Value).Pad + 0x38);
  __return_storage_ptr__->RetryCount = *(uint *)((this->Value).Pad + 0x3c);
  __return_storage_ptr__->HostIndex = *(int *)((this->Value).Pad + 0x40);
  __return_storage_ptr__->bCanceled = (bool)(this->Value).Pad[0x44];
  __return_storage_ptr__->CDNCacheStatus = (this->Value).Pad[0x45];
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdbd0

FOnDemandEndpointConfig * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this,
          FOnDemandEndpointConfig *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->DistributionUrl).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DistributionUrl).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(this->Value).Pad;
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  (__return_storage_ptr__->DistributionUrl).Data.ArrayNum = *(int *)((this->Value).Pad + 8);
  (__return_storage_ptr__->DistributionUrl).Data.ArrayMax = *(int *)((this->Value).Pad + 0xc);
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  (__return_storage_ptr__->FallbackUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->FallbackUrl).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x10);
  (this->Value).Pad[0x10] = '\0';
  (this->Value).Pad[0x11] = '\0';
  (this->Value).Pad[0x12] = '\0';
  (this->Value).Pad[0x13] = '\0';
  (this->Value).Pad[0x14] = '\0';
  (this->Value).Pad[0x15] = '\0';
  (this->Value).Pad[0x16] = '\0';
  (this->Value).Pad[0x17] = '\0';
  (__return_storage_ptr__->FallbackUrl).Data.ArrayNum = *(int *)((this->Value).Pad + 0x18);
  (__return_storage_ptr__->FallbackUrl).Data.ArrayMax = *(int *)((this->Value).Pad + 0x1c);
  (this->Value).Pad[0x18] = '\0';
  (this->Value).Pad[0x19] = '\0';
  (this->Value).Pad[0x1a] = '\0';
  (this->Value).Pad[0x1b] = '\0';
  (this->Value).Pad[0x1c] = '\0';
  (this->Value).Pad[0x1d] = '\0';
  (this->Value).Pad[0x1e] = '\0';
  (this->Value).Pad[0x1f] = '\0';
  (__return_storage_ptr__->ServiceUrls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ServiceUrls).AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x20);
  (this->Value).Pad[0x20] = '\0';
  (this->Value).Pad[0x21] = '\0';
  (this->Value).Pad[0x22] = '\0';
  (this->Value).Pad[0x23] = '\0';
  (this->Value).Pad[0x24] = '\0';
  (this->Value).Pad[0x25] = '\0';
  (this->Value).Pad[0x26] = '\0';
  (this->Value).Pad[0x27] = '\0';
  (__return_storage_ptr__->ServiceUrls).ArrayNum = *(int *)((this->Value).Pad + 0x28);
  (__return_storage_ptr__->ServiceUrls).ArrayMax = *(int *)((this->Value).Pad + 0x2c);
  (this->Value).Pad[0x28] = '\0';
  (this->Value).Pad[0x29] = '\0';
  (this->Value).Pad[0x2a] = '\0';
  (this->Value).Pad[0x2b] = '\0';
  (this->Value).Pad[0x2c] = '\0';
  (this->Value).Pad[0x2d] = '\0';
  (this->Value).Pad[0x2e] = '\0';
  (this->Value).Pad[0x2f] = '\0';
  (__return_storage_ptr__->TocPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TocPath).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x30);
  (this->Value).Pad[0x30] = '\0';
  (this->Value).Pad[0x31] = '\0';
  (this->Value).Pad[0x32] = '\0';
  (this->Value).Pad[0x33] = '\0';
  (this->Value).Pad[0x34] = '\0';
  (this->Value).Pad[0x35] = '\0';
  (this->Value).Pad[0x36] = '\0';
  (this->Value).Pad[0x37] = '\0';
  (__return_storage_ptr__->TocPath).Data.ArrayNum = *(int *)((this->Value).Pad + 0x38);
  (__return_storage_ptr__->TocPath).Data.ArrayMax = *(int *)((this->Value).Pad + 0x3c);
  (this->Value).Pad[0x38] = '\0';
  (this->Value).Pad[0x39] = '\0';
  (this->Value).Pad[0x3a] = '\0';
  (this->Value).Pad[0x3b] = '\0';
  (this->Value).Pad[0x3c] = '\0';
  (this->Value).Pad[0x3d] = '\0';
  (this->Value).Pad[0x3e] = '\0';
  (this->Value).Pad[0x3f] = '\0';
  (__return_storage_ptr__->TocFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->TocFilePath).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)((this->Value).Pad + 0x40);
  (this->Value).Pad[0x40] = '\0';
  (this->Value).Pad[0x41] = '\0';
  (this->Value).Pad[0x42] = '\0';
  (this->Value).Pad[0x43] = '\0';
  (this->Value).Pad[0x44] = '\0';
  (this->Value).Pad[0x45] = '\0';
  (this->Value).Pad[0x46] = '\0';
  (this->Value).Pad[0x47] = '\0';
  (__return_storage_ptr__->TocFilePath).Data.ArrayNum = *(int *)((this->Value).Pad + 0x48);
  (__return_storage_ptr__->TocFilePath).Data.ArrayMax = *(int *)((this->Value).Pad + 0x4c);
  (this->Value).Pad[0x48] = '\0';
  (this->Value).Pad[0x49] = '\0';
  (this->Value).Pad[0x4a] = '\0';
  (this->Value).Pad[0x4b] = '\0';
  (this->Value).Pad[0x4c] = '\0';
  (this->Value).Pad[0x4d] = '\0';
  (this->Value).Pad[0x4e] = '\0';
  (this->Value).Pad[0x4f] = '\0';
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdcb0

FOnDemandInstallCacheConfig * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this,
          FOnDemandInstallCacheConfig *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->RootDirectory).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootDirectory).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(this->Value).Pad;
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  (__return_storage_ptr__->RootDirectory).Data.ArrayNum = *(int *)((this->Value).Pad + 8);
  (__return_storage_ptr__->RootDirectory).Data.ArrayMax = *(int *)((this->Value).Pad + 0xc);
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  __return_storage_ptr__->DiskQuota = *(ulong64 *)((this->Value).Pad + 0x10);
  __return_storage_ptr__->JournalMaxSize = *(ulong64 *)((this->Value).Pad + 0x18);
  __return_storage_ptr__->LastAccessGranularitySeconds = *(double *)((this->Value).Pad + 0x20);
  __return_storage_ptr__->bDropCache = (bool)(this->Value).Pad[0x28];
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdd30

FOnDemandToc * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FOnDemandToc> *this,FOnDemandToc *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  UE::IoStore::FOnDemandToc::FOnDemandToc(__return_storage_ptr__,(FOnDemandToc *)&this->Value);
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdd80

TSharedPtr<FIoContainerHeader,1> * __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::ConsumeValueOrDie
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this,
          TSharedPtr<FIoContainerHeader,1> *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  __return_storage_ptr__->Object = *(FIoContainerHeader **)(this->Value).Pad;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((this->Value).Pad + 8);
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 1445bdde0

FIASHostGroup * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::ConsumeValueOrDie
          (TIoStatusOr<UE::IoStore::FIASHostGroup> *this,FIASHostGroup *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->Impl).Object = *(FImpl **)(this->Value).Pad;
  pTVar1 = *(TReferenceControllerBase<1> **)((this->Value).Pad + 8);
  (__return_storage_ptr__->Impl).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsOk @ 1445dded0

bool __thiscall TIoStatusOr<FIoOffsetAndLength>::IsOk(TIoStatusOr<FIoOffsetAndLength> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddee0

bool __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::IsOk
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddef0

bool __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::IsOk
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddf00

bool __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::IsOk
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddf10

bool __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::IsOk(TIoStatusOr<UE::IoStore::FOnDemandToc> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddf20

bool __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::IsOk
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1445ddf30

bool __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::IsOk(TIoStatusOr<UE::IoStore::FIASHostGroup> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Reset @ 1445f8690

void __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::Reset
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse
              ((FMultiEndpointHttpClientResponse *)&this->Value);
  }
  return;
}

// Reset @ 1445f86d0

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::Reset
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    UE::IoStore::FOnDemandEndpointConfig::~FOnDemandEndpointConfig
              ((FOnDemandEndpointConfig *)&this->Value);
  }
  return;
}

// Reset @ 1445f8710

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::Reset
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  return;
}

// Reset @ 1445f8750

void __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult>::Reset
          (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  return;
}

// Reset @ 1445f8760

void __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::Reset
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  return;
}

// Reset @ 1445f87a0

void __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::Reset(TIoStatusOr<UE::IoStore::FIASHostGroup> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  return;
}

// Status @ 144601290

FIoStatus * __thiscall
TIoStatusOr<FIoOffsetAndLength>::Status(TIoStatusOr<FIoOffsetAndLength> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012a0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::Status
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012b0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig>::Status
          (TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012c0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig>::Status
          (TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012d0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FOnDemandToc>::Status(TIoStatusOr<UE::IoStore::FOnDemandToc> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012e0

FIoStatus * __thiscall
TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_>::Status
          (TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *this)

{
  return &this->StatusValue;
}

// Status @ 1446012f0

FIoStatus * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::Status(TIoStatusOr<UE::IoStore::FIASHostGroup> *this)

{
  return &this->StatusValue;
}

// ValueOrDie @ 14460d430

FMultiEndpointHttpClientResponse * __thiscall
TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::ValueOrDie
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (FMultiEndpointHttpClientResponse *)&this->Value;
  }
  return (FMultiEndpointHttpClientResponse *)&this->Value;
}

// ValueOrDie @ 14460d460

FIASHostGroup * __thiscall
TIoStatusOr<UE::IoStore::FIASHostGroup>::ValueOrDie(TIoStatusOr<UE::IoStore::FIASHostGroup> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (FIASHostGroup *)&this->Value;
  }
  return (FIASHostGroup *)&this->Value;
}

