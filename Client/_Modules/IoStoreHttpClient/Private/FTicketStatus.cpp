// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 9

// GetContent @ 144573780

FIoBuffer * __thiscall UE::IoStore::HTTP::FTicketStatus::GetContent(FTicketStatus *this)

{
  code *pcVar1;
  bool bVar2;
  FIoBuffer *pFVar3;
  
  switch(*this) {
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetId() == EId::Content",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                       ,0xde,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoBuffer *)(*pcVar1)();
      return pFVar3;
    }
    break;
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
    break;
  }
  if (((*this != (FTicketStatus)0x4) && (*this != (FTicketStatus)0x3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == EState::RecvContent || State == EState::RecvStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x173,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIoBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return *(FIoBuffer **)(this + 0x38);
}

// GetContentLength @ 144573920

uint __thiscall UE::IoStore::HTTP::FTicketStatus::GetContentLength(FTicketStatus *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTransactRef *pFVar5;
  
  switch(*this) {
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetId() <= EId::Content",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                       ,0xce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
    break;
  }
  pFVar5 = FActivity::GetTransaction((FActivity *)this);
  uVar1 = pFVar5->Self;
  if ((uVar1 & 1) == 0) {
    if ((*(short *)(uVar1 + 0x122) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offsets.Headers > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x14e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    return *(uint *)(uVar1 + 0x118);
  }
  return (uint)*(undefined8 *)((uVar1 ^ 1) + 0x30);
}

// GetError @ 144573f10

FError * __thiscall
UE::IoStore::HTTP::FTicketStatus::GetError(FTicketStatus *this,FError *__return_storage_ptr__)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FError *pFVar4;
  char *pcVar5;
  
  switch(*this) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetId() == EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                       ,0xe6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FError *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar1 = *(ulonglong *)(this + 0x38);
  pcVar5 = (char *)(uVar1 & 0xffffffffffff);
  if (((char *)0x7fffffffffff < pcVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x57,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FError *)(*pcVar2)();
    return pFVar4;
  }
  __return_storage_ptr__->Reason = pcVar5;
  if (((char *)0x7fffffffffff < pcVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x58,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FError *)(*pcVar2)();
    return pFVar4;
  }
  __return_storage_ptr__->Code = (int)(short)(uVar1 >> 0x30);
  return __return_storage_ptr__;
}

// GetId @ 1445741e0

EId __thiscall UE::IoStore::HTTP::FTicketStatus::GetId(FTicketStatus *this)

{
  switch(*this) {
  default:
    return Error;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    return Response;
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
    return Content;
  case (FTicketStatus)0x7:
    return Cancelled;
  }
}

// GetIndex @ 144574240

uint __thiscall UE::IoStore::HTTP::FTicketStatus::GetIndex(FTicketStatus *this)

{
  return (int)(char)this[0xa0];
}

// GetParam @ 1445743b0

ulong64 __thiscall UE::IoStore::HTTP::FTicketStatus::GetParam(FTicketStatus *this)

{
  return *(ulong64 *)(this + 0x40);
}

// GetPerf @ 1445744b0

FTicketPerf * __thiscall UE::IoStore::HTTP::FTicketStatus::GetPerf(FTicketStatus *this)

{
  code *pcVar1;
  bool bVar2;
  FTicketPerf *pFVar3;
  
  switch(*this) {
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetId() == EId::Content",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                       ,0xd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTicketPerf *)(*pcVar1)();
      return pFVar3;
    }
    break;
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
    break;
  }
  return (FTicketPerf *)this;
}

// GetResponse @ 1445745d0

FResponse * __thiscall UE::IoStore::HTTP::FTicketStatus::GetResponse(FTicketStatus *this)

{
  code *pcVar1;
  bool bVar2;
  FResponse *pFVar3;
  
  switch(*this) {
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetId() < EId::Content",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResponse *)(*pcVar1)();
      return pFVar3;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    break;
  }
  return (FResponse *)this;
}

// GetTicket @ 144574b40

ulong64 __thiscall UE::IoStore::HTTP::FTicketStatus::GetTicket(FTicketStatus *this)

{
  return 1L << ((byte)this[0xa0] & 0x3f);
}

