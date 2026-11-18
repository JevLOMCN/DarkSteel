// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// Cancel @ 141f2aa80

bool __thiscall UE::FDerivedDataIoResponse::Cancel(FDerivedDataIoResponse *this)

{
  char cVar1;
  int iVar2;
  FIoResponse *pFVar3;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 auStackX_8 [8];
  
  pFVar3 = (this->Response).Ptr;
  if (pFVar3 == (FIoResponse *)0x0) {
    return true;
  }
  if (pFVar3->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3) {
    return true;
  }
  this_00 = (pFVar3->Requests).AllocatorInstance.Data;
  iVar2 = (pFVar3->Requests).ArrayNum;
  pFVar4 = this_00 + (longlong)iVar2 * 0x68;
  while( true ) {
    if ((pFVar3->Requests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (this_00 == pFVar4) break;
    if ((this_00[0x30].field_0x0 == '\x01') && (this_00 != (FScriptContainerElement *)0x0)) {
      LOCK();
      cVar1 = this_00[0x28].field_0x0;
      this_00[0x28].field_0x0 = 1;
      UNLOCK();
      if (cVar1 == '\0') {
        FIoRequest::Cancel((FIoRequest *)this_00);
      }
    }
    this_00 = this_00 + 0x68;
  }
  return pFVar3->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3;
}

// GetData @ 141f34250

FSharedBuffer __thiscall
UE::FDerivedDataIoResponse::GetData(FDerivedDataIoResponse *this,FDerivedDataIoRequest param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FIoRequestState *pFVar4;
  undefined4 in_register_00000014;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  FDerivedDataIoRequest in_R8D;
  
  TVar5.Owner._4_4_ = in_register_00000014;
  TVar5.Owner._0_4_ = param_1.Index;
  pFVar4 = DerivedData::Private::FIoResponse::TryGetRequest(&this->Response,in_R8D);
  if ((pFVar4 != (FIoRequestState *)0x0) &&
     (pFVar4->Status == (atomic<UE::EDerivedDataIoStatus>)0x0)) {
    pFVar3 = (pFVar4->Data).Owner.Owner;
    if (pFVar3 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        pFVar3->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    (TVar5.Owner)->_padding_ = (longlong)pFVar3;
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar5.Owner;
  }
  (TVar5.Owner)->_padding_ = 0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar5.Owner;
}

// GetOverallStatus @ 141f35050

EDerivedDataIoStatus __thiscall
UE::FDerivedDataIoResponse::GetOverallStatus(FDerivedDataIoResponse *this)

{
  FIoResponse *pFVar1;
  
  pFVar1 = (this->Response).Ptr;
  if (pFVar1 != (FIoResponse *)0x0) {
    return (EDerivedDataIoStatus)pFVar1->OverallStatus;
  }
  return Ok;
}

// GetSize @ 141f36b80

ulong64 __thiscall
UE::FDerivedDataIoResponse::GetSize(FDerivedDataIoResponse *this,FDerivedDataIoRequest param_1)

{
  FIoRequestState *pFVar1;
  
  pFVar1 = DerivedData::Private::FIoResponse::TryGetRequest(&this->Response,param_1);
  if ((pFVar1 != (FIoRequestState *)0x0) &&
     (pFVar1->Status == (atomic<UE::EDerivedDataIoStatus>)0x0)) {
    return pFVar1->Size;
  }
  return 0;
}

// GetStatus @ 141f36d80

EDerivedDataIoStatus __thiscall
UE::FDerivedDataIoResponse::GetStatus(FDerivedDataIoResponse *this,FDerivedDataIoRequest param_1)

{
  FIoRequestState *pFVar1;
  
  pFVar1 = DerivedData::Private::FIoResponse::TryGetRequest(&this->Response,param_1);
  if (pFVar1 != (FIoRequestState *)0x0) {
    return (EDerivedDataIoStatus)pFVar1->Status;
  }
  return Error;
}

// Poll @ 141f40300

bool __thiscall UE::FDerivedDataIoResponse::Poll(FDerivedDataIoResponse *this)

{
  FIoResponse *pFVar1;
  
  pFVar1 = (this->Response).Ptr;
  if (pFVar1 != (FIoResponse *)0x0) {
    return pFVar1->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3;
  }
  return true;
}

// SetPriority @ 141f4d5a0

void __thiscall
UE::FDerivedDataIoResponse::SetPriority(FDerivedDataIoResponse *this,FDerivedDataIoPriority param_1)

{
  int iVar1;
  FIoResponse *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->Response).Ptr;
  if (pFVar2 != (FIoResponse *)0x0) {
    this_00 = (pFVar2->Requests).AllocatorInstance.Data;
    iVar1 = (pFVar2->Requests).ArrayNum;
    pFVar3 = this_00 + (longlong)iVar1 * 0x68;
    while( true ) {
      if ((pFVar2->Requests).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar3) break;
      if ((this_00[0x30].field_0x0 == '\x01') && (this_00 != (FScriptContainerElement *)0x0)) {
        FIoRequest::UpdatePriority((FIoRequest *)this_00,param_1.Value);
      }
      this_00 = this_00 + 0x68;
    }
  }
  return;
}

