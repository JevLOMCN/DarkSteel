// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// operator() @ 141f27950

void __thiscall
`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *param_1)

{
  int *piVar1;
  int iVar2;
  EIoErrorCode EVar3;
  BufCore *this_00;
  TIoStatusOr<FIoBuffer> local_20;
  
  FIoStatus::FIoStatus(&local_20.StatusValue);
  FIoStatus::operator=(&local_20.StatusValue,&param_1->StatusValue);
  if (local_20.StatusValue.ErrorCode == Ok) {
    local_20.Value.Pad = *&(param_1->Value).Pad;
    *(undefined8 *)(param_1->Value).Pad = 0;
    FIoStatus::operator=(&param_1->StatusValue,Unknown);
  }
  UE::DerivedData::Private::FIoResponseDispatcher::OnIoRequestComplete
            (*(FIoResponse **)this,*(FIoRequestState **)((longlong)this + 8),&local_20);
  EVar3 = (param_1->StatusValue).ErrorCode;
  FIoStatus::operator=(&param_1->StatusValue,Unknown);
  if ((EVar3 == Ok) && (this_00 = *(BufCore **)(param_1->Value).Pad, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  FIoStatus::~FIoStatus(&param_1->StatusValue);
  return;
}

// Dispatch @ 141f2d8a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::DerivedData::Private::FIoResponseDispatcher::Dispatch
          (FIoResponse *param_1,FDerivedDataIoPriority param_2)

{
  int iVar1;
  FIoRequestState *pFVar2;
  FIoRequestState *pFVar3;
  undefined1 local_res10 [8];
  FIoResponseDispatcher local_28;
  
  FIoBatch::FIoBatch(&local_28.Batch);
  iVar1 = (param_1->Requests).ArrayNum;
  pFVar2 = (FIoRequestState *)(param_1->Requests).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  local_28.Priority.Value = param_2.Value;
  while( true ) {
    if ((param_1->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (((pFVar2->State).TypeIndex == '\x01') && (pFVar2 != (FIoRequestState *)0x0)) {
      DispatchCooked(&local_28,param_1,pFVar2,(FIoCookedState *)pFVar2);
      pFVar2 = pFVar2 + 1;
    }
    else {
      pFVar2->Status = (atomic<UE::EDerivedDataIoStatus>)0x1;
      pFVar2 = pFVar2 + 1;
    }
  }
  FIoBatch::Issue(&local_28.Batch);
  FIoBatch::~FIoBatch(&local_28.Batch);
  return;
}

// DispatchCooked @ 141f2d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f2da83) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked
          (FIoResponseDispatcher *this,FIoResponse *param_1,FIoRequestState *param_2,
          FIoCookedState *param_3)

{
  ulonglong uVar1;
  uchar auVar2 [8];
  FIoRequest FVar3;
  FIoDispatcher *this_00;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStackY_c8 [32];
  undefined4 in_stack_ffffffffffffff5c;
  undefined1 local_98 [8];
  TIoStatusOr<unsigned___int64> local_90;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined **local_48;
  FIoResponse *local_40;
  FIoRequestState *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_70._0_8_ = *(undefined8 *)(param_3->CookedData).ChunkId;
  local_70._8_4_ = *(undefined4 *)((param_3->CookedData).ChunkId + 8);
  if (param_2->Type == Read) {
    LOCK();
    param_1->RemainingRequests = (atomic<unsigned_int>)((int)param_1->RemainingRequests + 1);
    UNLOCK();
    uVar5 = (param_2->Options).Offset;
    local_48 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_70._24_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
         ::Call;
    local_90.Value.Pad = (uchar  [8])(param_2->Options).Target;
    local_90.StatusValue.ErrorMessage.Chars = (wchar_t *)((param_3->CookedData).ChunkOffset + uVar5)
    ;
    local_90.StatusValue._8_8_ = (param_2->Options).Size;
    local_30 = (undefined ***)0x0;
    local_78 = 0;
    if (((local_90.StatusValue._8_8_ == 0xffffffffffffffff) &&
        (uVar1 = (param_3->CookedData).ChunkSize, uVar1 != 0xffffffffffffffff)) &&
       (local_90.StatusValue._8_8_ = uVar1 - uVar5, uVar1 < uVar5)) {
      local_90.StatusValue._8_8_ = 0;
    }
    local_40 = param_1;
    local_38 = param_2;
    FVar3 = FIoBatch::ReadWithCallback
                      (&this->Batch,(FIoChunkId *)local_98,(FIoReadOptions *)local_70,(int)&local_90
                       ,(TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)
                        CONCAT44(in_stack_ffffffffffffff5c,(this->Priority).Value));
    FIoRequest::operator=(&param_3->Request,(FIoRequest *)FVar3.Impl);
    FIoRequest::~FIoRequest((FIoRequest *)local_98);
    if ((code *)local_70._24_8_ != (code *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  else {
    this_00 = FIoDispatcher::Get();
    FIoDispatcher::GetSizeForChunk(this_00,&local_90,(FIoChunkId *)local_70);
    if (local_90.StatusValue.ErrorCode == Ok) {
      auVar2 = (uchar  [8])(param_2->Options).Offset;
      uVar5 = (longlong)local_90.Value.Pad - (longlong)auVar2;
      if ((ulonglong)local_90.Value.Pad < (ulonglong)auVar2) {
        uVar5 = 0;
      }
      if ((param_2->Options).Size < uVar5) {
        uVar5 = (param_2->Options).Size;
      }
      param_2->Size = uVar5;
      param_2->Status = (atomic<UE::EDerivedDataIoStatus>)0x0;
    }
    else {
      param_2->Status = (atomic<UE::EDerivedDataIoStatus>)0x1;
    }
    FIoStatus::operator=(&local_90.StatusValue,Unknown);
    FIoStatus::~FIoStatus(&local_90.StatusValue);
  }
  return;
}

// MakeIoReadOptions @ 141f3e520

FIoReadOptions * __cdecl
UE::DerivedData::Private::FIoResponseDispatcher::MakeIoReadOptions
          (FIoReadOptions *__return_storage_ptr__,FIoCookedState *param_1,
          FDerivedDataIoOptions *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  uVar1 = param_2->Offset;
  uVar4 = (param_1->CookedData).ChunkOffset;
  __return_storage_ptr__->TargetVa = param_2->Target;
  uVar4 = uVar4 + uVar1;
  uVar3 = param_2->Size;
  __return_storage_ptr__->RequestedSize = 0xffffffffffffffff;
  __return_storage_ptr__->Flags = None;
  if ((uVar3 == 0xffffffffffffffff) &&
     (uVar2 = (param_1->CookedData).ChunkSize, uVar3 = 0xffffffffffffffff,
     uVar2 != 0xffffffffffffffff)) {
    __return_storage_ptr__->RequestedOffset = uVar4;
    uVar4 = uVar2 - uVar1;
    if (uVar2 < uVar1) {
      uVar4 = 0;
    }
    __return_storage_ptr__->RequestedSize = uVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->RequestedOffset = uVar4;
  __return_storage_ptr__->RequestedSize = uVar3;
  return __return_storage_ptr__;
}

// OnIoRequestComplete @ 141f3f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::DerivedData::Private::FIoResponseDispatcher::OnIoRequestComplete
          (FIoResponse *param_1,FIoRequestState *param_2,TIoStatusOr<FIoBuffer> *param_3)

{
  int *piVar1;
  int iVar2;
  EIoErrorCode EVar3;
  void *pvVar4;
  code *pcVar5;
  FIoBuffer this;
  bool bVar6;
  FSharedBuffer FVar7;
  TIoStatusOr<unsigned_char_*> *this_00;
  FBufferOwner *pFVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  FSharedBuffer local_68;
  FIoBuffer local_60;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_58;
  TIoStatusOr<unsigned_char_*> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_2->State).TypeIndex != '\x01') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar3 = (param_3->StatusValue).ErrorCode;
  if (EVar3 == Ok) {
    FIoStatus::operator=(&param_3->StatusValue,&FIoStatus::Unknown);
    local_60.CorePtr.Reference = *(TRefCountPtr<FIoBuffer::BufCore> *)(param_3->Value).Pad;
    *(undefined8 *)(param_3->Value).Pad = 0;
    pvVar4 = (param_2->Options).Target;
    uVar9 = (ulonglong)
            CONCAT14(((BufCore *)local_60.CorePtr.Reference)->DataSizeHigh,
                     ((BufCore *)local_60.CorePtr.Reference)->DataSizeLow);
    if (pvVar4 == (void *)0x0) {
      this_00 = FIoBuffer::Release(&local_60,&local_50);
      if ((this_00->StatusValue).ErrorCode != Ok) {
        StatusOrCrash(&this_00->StatusValue);
      }
      FIoStatus::operator=(&this_00->StatusValue,&FIoStatus::Unknown);
      pvVar4 = *(void **)(this_00->Value).Pad;
      pFVar8 = ::operator_new(0x28);
      if (pFVar8 != (FBufferOwner *)0x0) {
        pFVar8->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
        pFVar8[1]._padding_ = (longlong)FMemory::Free;
        pFVar8->Data = pvVar4;
        pFVar8->Size = uVar9;
        pFVar8->_padding_ =
             (longlong)
             &
             ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
        ;
        LOCK();
        pFVar8->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar8->ReferenceCountsAndFlags | 0x4000000000000000);
        UNLOCK();
        LOCK();
        pFVar8->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar8->ReferenceCountsAndFlags | 0x1000000000000000);
        UNLOCK();
        pFVar8->_padding_ =
             (longlong)
             &
             ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
        ;
        LOCK();
        pFVar8->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((ulonglong)pFVar8->ReferenceCountsAndFlags | 0x2000000000000000);
        UNLOCK();
      }
      FSharedBuffer::FSharedBuffer(&local_68,pFVar8);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (&(param_2->Data).Owner,&local_68.Owner);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_68.Owner);
      FIoStatus::operator=(&local_50.StatusValue,Unknown);
      FIoStatus::~FIoStatus(&local_50.StatusValue);
    }
    else {
      FVar7 = FSharedBuffer::MakeView(&local_58,(ulong64)pvVar4);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (&(param_2->Data).Owner,
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar7.Owner.Owner);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_58);
    }
    this.CorePtr.Reference = local_60.CorePtr.Reference;
    param_2->Size = uVar9;
    param_2->Status = (atomic<UE::EDerivedDataIoStatus>)0x0;
    if (local_60.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_60.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)this.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this.CorePtr.Reference);
        ::operator_delete((void *)this.CorePtr.Reference,0x20);
      }
    }
  }
  else {
    param_2->Status = (atomic<UE::EDerivedDataIoStatus>)((EVar3 == Cancelled) + '\x01');
  }
  FIoRequest::Release((FIoRequest *)param_2);
  FIoResponse::EndRequest(param_1);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(param_3);
  return;
}

