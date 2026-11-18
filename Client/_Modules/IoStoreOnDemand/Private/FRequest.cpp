// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 6

// FRequest @ 1445a62a0

FRequest * __thiscall
UE::IoStore::FMultiEndpointHttpClient::FRequest::FRequest(FRequest *this,FRequest *param_1)

{
  FConnection *pFVar1;
  undefined8 uVar2;
  
  *(undefined8 *)&this->OnResponse = *(undefined8 *)&param_1->OnResponse;
  *(undefined8 *)&(this->OnResponse).field_0x28 = *(undefined8 *)&(param_1->OnResponse).field_0x28;
  *(undefined8 *)&(param_1->OnResponse).field_0x28 = 0;
  uVar2 = *(undefined8 *)&(param_1->OnResponse).field_0x18;
  *(undefined8 *)&(this->OnResponse).field_0x10 = *(undefined8 *)&(param_1->OnResponse).field_0x10;
  *(undefined8 *)&(this->OnResponse).field_0x18 = uVar2;
  *(undefined8 *)&(this->OnResponse).field_0x20 = *(undefined8 *)&(param_1->OnResponse).field_0x20;
  if (*(longlong *)&this->OnResponse != 0) {
    *(undefined8 *)&param_1->OnResponse = 0;
  }
  (this->RequestHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestHeaders).AllocatorInstance.Data = (param_1->RequestHeaders).AllocatorInstance.Data;
  (param_1->RequestHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestHeaders).ArrayNum = (param_1->RequestHeaders).ArrayNum;
  (this->RequestHeaders).ArrayMax = (param_1->RequestHeaders).ArrayMax;
  (param_1->RequestHeaders).ArrayNum = 0;
  (param_1->RequestHeaders).ArrayMax = 0;
  (this->ResponseHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseHeaders).AllocatorInstance.Data = (param_1->ResponseHeaders).AllocatorInstance.Data
  ;
  (param_1->ResponseHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseHeaders).ArrayNum = (param_1->ResponseHeaders).ArrayNum;
  (this->ResponseHeaders).ArrayMax = (param_1->ResponseHeaders).ArrayMax;
  (param_1->ResponseHeaders).ArrayNum = 0;
  (param_1->ResponseHeaders).ArrayMax = 0;
  (this->RelativeUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelativeUrl).Data.AllocatorInstance.Data =
       (param_1->RelativeUrl).Data.AllocatorInstance.Data;
  (param_1->RelativeUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelativeUrl).Data.ArrayNum = (param_1->RelativeUrl).Data.ArrayNum;
  (this->RelativeUrl).Data.ArrayMax = (param_1->RelativeUrl).Data.ArrayMax;
  (param_1->RelativeUrl).Data.ArrayNum = 0;
  (param_1->RelativeUrl).Data.ArrayMax = 0;
  *(undefined8 *)(this->Range).OffsetAndLength = *(undefined8 *)(param_1->Range).OffsetAndLength;
  *(undefined2 *)((this->Range).OffsetAndLength + 8) =
       *(undefined2 *)((param_1->Range).OffsetAndLength + 8);
  this->TicketId = param_1->TicketId;
  pFVar1 = param_1->Connection;
  (this->Body).CorePtr.Reference = (BufCore *)0x0;
  this->Connection = pFVar1;
  (this->Body).CorePtr.Reference = (param_1->Body).CorePtr.Reference;
  (param_1->Body).CorePtr.Reference = (BufCore *)0x0;
  (this->Chunk).CorePtr.Reference = (BufCore *)0x0;
  (this->Chunk).CorePtr.Reference = (param_1->Chunk).CorePtr.Reference;
  (param_1->Chunk).CorePtr.Reference = (BufCore *)0x0;
  (this->ResponseMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseMessage).Data.AllocatorInstance.Data =
       (param_1->ResponseMessage).Data.AllocatorInstance.Data;
  (param_1->ResponseMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseMessage).Data.ArrayNum = (param_1->ResponseMessage).Data.ArrayNum;
  (this->ResponseMessage).Data.ArrayMax = (param_1->ResponseMessage).Data.ArrayMax;
  (param_1->ResponseMessage).Data.ArrayNum = 0;
  (param_1->ResponseMessage).Data.ArrayMax = 0;
  this->StartTime = param_1->StartTime;
  this->RetryCount = param_1->RetryCount;
  this->StatusCode = param_1->StatusCode;
  this->Host = param_1->Host;
  this->Flags = param_1->Flags;
  this->bIsChunkedTransfer = param_1->bIsChunkedTransfer;
  this->CDNCacheStatus = param_1->CDNCacheStatus;
  this->SinkCounter = param_1->SinkCounter;
  return this;
}

// FRequest @ 1445a6430

FRequest * __thiscall
UE::IoStore::FMultiEndpointHttpClient::FRequest::FRequest(FRequest *this,FRequest *param_1)

{
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  BufCore *pBVar7;
  undefined8 *puVar8;
  
  lVar4 = *(longlong *)&param_1->OnResponse;
  *(undefined8 *)&(this->OnResponse).field_0x28 = 0;
  *(longlong *)&this->OnResponse = lVar4;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(param_1->OnResponse).field_0x28;
    puVar8 = (undefined8 *)&(param_1->OnResponse).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar8 = puVar5;
    }
    (**(code **)*puVar8)(puVar8,&(this->OnResponse).field_0x10);
  }
  pTVar1 = &this->RequestHeaders;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RequestHeaders).ArrayMax;
  iVar3 = (param_1->RequestHeaders).ArrayNum;
  pFVar6 = (param_1->RequestHeaders).AllocatorInstance.Data;
  (this->RequestHeaders).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FAnsiString,FAnsiString,int>
              ((pTVar1->AllocatorInstance).Data,(FAnsiString *)pFVar6,iVar3);
  }
  pTVar1 = &this->ResponseHeaders;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ResponseHeaders).ArrayMax;
  iVar3 = (param_1->ResponseHeaders).ArrayNum;
  pFVar6 = (param_1->ResponseHeaders).AllocatorInstance.Data;
  (this->ResponseHeaders).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FAnsiString,FAnsiString,int>
              ((pTVar1->AllocatorInstance).Data,(FAnsiString *)pFVar6,iVar3);
  }
  FAnsiString::FAnsiString(&this->RelativeUrl,&param_1->RelativeUrl);
  *(undefined8 *)(this->Range).OffsetAndLength = *(undefined8 *)(param_1->Range).OffsetAndLength;
  *(undefined2 *)((this->Range).OffsetAndLength + 8) =
       *(undefined2 *)((param_1->Range).OffsetAndLength + 8);
  this->TicketId = param_1->TicketId;
  this->Connection = param_1->Connection;
  (this->Body).CorePtr.Reference = (BufCore *)0x0;
  pBVar7 = (param_1->Body).CorePtr.Reference;
  (this->Body).CorePtr.Reference = pBVar7;
  if (pBVar7 != (BufCore *)0x0) {
    LOCK();
    pBVar7->NumRefs = pBVar7->NumRefs + 1;
    UNLOCK();
  }
  (this->Chunk).CorePtr.Reference = (BufCore *)0x0;
  pBVar7 = (param_1->Chunk).CorePtr.Reference;
  (this->Chunk).CorePtr.Reference = pBVar7;
  if (pBVar7 != (BufCore *)0x0) {
    LOCK();
    pBVar7->NumRefs = pBVar7->NumRefs + 1;
    UNLOCK();
  }
  ::FString::FString(&this->ResponseMessage,&param_1->ResponseMessage);
  this->StartTime = param_1->StartTime;
  this->RetryCount = param_1->RetryCount;
  this->StatusCode = param_1->StatusCode;
  this->Host = param_1->Host;
  this->Flags = param_1->Flags;
  this->bIsChunkedTransfer = param_1->bIsChunkedTransfer;
  this->CDNCacheStatus = param_1->CDNCacheStatus;
  this->SinkCounter = param_1->SinkCounter;
  return this;
}

// ~FRequest @ 1445a9770

void __thiscall UE::IoStore::FMultiEndpointHttpClient::FRequest::~FRequest(FRequest *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  BufCore *pBVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  pFVar3 = (this->ResponseMessage).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pBVar4 = (this->Chunk).CorePtr.Reference;
  if (pBVar4 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar4);
    LOCK();
    piVar1 = &pBVar4->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar4);
      ::operator_delete(pBVar4,0x20);
    }
  }
  pBVar4 = (this->Body).CorePtr.Reference;
  if (pBVar4 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar4);
    LOCK();
    piVar1 = &pBVar4->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar4);
      ::operator_delete(pBVar4,0x20);
    }
  }
  pFVar3 = (this->RelativeUrl).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FAnsiString,int>
            ((FAnsiString *)(this->ResponseHeaders).AllocatorInstance.Data,
             (this->ResponseHeaders).ArrayNum);
  pFVar3 = (this->ResponseHeaders).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FAnsiString,int>
            ((FAnsiString *)(this->RequestHeaders).AllocatorInstance.Data,
             (this->RequestHeaders).ArrayNum);
  pFVar3 = (this->RequestHeaders).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(longlong *)&this->OnResponse != 0) {
    plVar5 = *(longlong **)&(this->OnResponse).field_0x28;
    plVar6 = (longlong *)&(this->OnResponse).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// ConsumeError @ 1445bd910

TOptional<UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandContentInstaller::FRequest::ConsumeError
          (FRequest *this,TOptional<UE::UnifiedError::FError> *__return_storage_ptr__)

{
  IErrorDetails *pIVar1;
  IErrorDetails *pIVar2;
  int iVar3;
  int iVar4;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar5;
  IErrorDetails *pIVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  
  if ((this->Result).Error.bIsSet != false) {
    iVar3 = (this->Result).Error.TypedValue.ErrorCode;
    iVar4 = (this->Result).Error.TypedValue.ModuleId;
    (this->Result).Error.TypedValue.ErrorCode = 0;
    (this->Result).Error.TypedValue.ModuleId = 0;
    pIVar1 = (this->Result).Error.TypedValue.ErrorDetails.Reference;
    pIVar6 = (IErrorDetails *)0x0;
    if (pIVar1 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      pIVar2 = (this->Result).Error.TypedValue.ErrorDetails.Reference;
      pIVar6 = pIVar1;
      if (pIVar2 != (IErrorDetails *)0x0) {
        (this->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
    }
    if ((this->Result).Error.bIsSet != false) {
      (this->Result).Error.TypedValue.ErrorCode = 0;
      (this->Result).Error.TypedValue.ModuleId = 0;
      pIVar1 = (this->Result).Error.TypedValue.ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (this->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (this->Result).Error.TypedValue.ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      (this->Result).Error.bIsSet = false;
    }
    (__return_storage_ptr__->TypedValue).ModuleId = iVar4;
    (__return_storage_ptr__->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
    (__return_storage_ptr__->TypedValue).ErrorCode = iVar3;
    if (pIVar6 != (IErrorDetails *)0x0) {
      (__return_storage_ptr__->TypedValue).ErrorDetails.Reference = pIVar6;
      (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res18);
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  if (this->bCancelled != false) {
    TVar5 = UnifiedError::Core::CancellationError::GetStaticErrorDetails();
    pIVar1 = (IErrorDetails *)(TVar5.Reference)->_padding_;
    if (pIVar1 == (IErrorDetails *)0x0) {
      iVar3 = UnifiedError::Core::CancellationError::GetErrorCodeId();
      iVar4 = UnifiedError::Core::GetStaticModuleId();
      (__return_storage_ptr__->TypedValue).ErrorCode = iVar3;
      (__return_storage_ptr__->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
      (__return_storage_ptr__->TypedValue).ModuleId = iVar4;
    }
    else {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      iVar3 = UnifiedError::Core::CancellationError::GetErrorCodeId();
      iVar4 = UnifiedError::Core::GetStaticModuleId();
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_38);
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      (__return_storage_ptr__->TypedValue).ErrorCode = iVar3;
      (__return_storage_ptr__->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
      (__return_storage_ptr__->TypedValue).ModuleId = iVar4;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (__return_storage_ptr__->TypedValue).ErrorDetails.Reference = pIVar1;
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_34);
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetErrorString @ 1445d4ee0

FString * __thiscall
UE::IoStore::FOnDemandContentInstaller::FRequest::GetErrorString
          (FRequest *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->bCancelled == false) {
    if ((this->Result).Error.bIsSet == false) {
      pFVar6 = ::FString::FString(&local_18,L"Ok");
      bVar4 = true;
      bVar3 = false;
      bVar5 = false;
      bVar2 = false;
      goto LAB_1445d4f9e;
    }
    if ((this->Result).Error.bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
    }
    pFVar6 = ::LexToString(&local_38,(FError *)&this->Result);
    bVar3 = false;
    bVar5 = true;
  }
  else {
    pFVar6 = ::FString::FString(&local_28,L"Cancelled");
    bVar3 = true;
    bVar5 = false;
  }
  bVar4 = false;
  bVar2 = true;
  local_48.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_48.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  pFVar6 = &local_48;
LAB_1445d4f9e:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsInstall @ 1445dde80

bool __thiscall UE::IoStore::FOnDemandContentInstaller::FRequest::IsInstall(FRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (5 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

