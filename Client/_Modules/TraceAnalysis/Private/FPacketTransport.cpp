// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 8

// ~FPacketTransport @ 14d392420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Trace::FPacketTransport::~FPacketTransport(FPacketTransport *this)

{
  FPacketNode *pFVar1;
  FPacketNode *pFVar2;
  FPacketNode **ppFVar3;
  undefined1 auStack_48 [32];
  FPacketNode *local_28 [3];
  FPacketNode *local_10;
  
  local_10 = (FPacketNode *)(__security_cookie.value ^ (ulonglong)auStack_48);
  this->_padding_ = (longlong)&___7FPacketTransport_Trace_UE__6B_;
  ppFVar3 = local_28;
  local_28[0] = this->ActiveList;
  local_28[1] = this->PendingList;
  local_28[2] = this->FreeList;
  do {
    pFVar2 = *ppFVar3;
    while (pFVar2 != (FPacketNode *)0x0) {
      pFVar1 = pFVar2->Next;
      FMemory::Free(pFVar2);
      pFVar2 = pFVar1;
    }
    ppFVar3 = ppFVar3 + 1;
  } while (ppFVar3 != &local_10);
  this->_padding_ = (longlong)&___7FTransport_Trace_UE__6B_;
  return;
}

// Advance @ 14d397c10

void __thiscall UE::Trace::FPacketTransport::Advance(FPacketTransport *this,uint param_1)

{
  uint *puVar1;
  
  if (this->ActiveList != (FPacketNode *)0x0) {
    puVar1 = &this->ActiveList->Cursor;
    *puVar1 = *puVar1 + param_1;
  }
  return;
}

// AllocateNode @ 14d397c50

FPacketNode * __thiscall UE::Trace::FPacketTransport::AllocateNode(FPacketTransport *this)

{
  FPacketNode *pFVar1;
  
  pFVar1 = this->FreeList;
  if (pFVar1 != (FPacketNode *)0x0) {
    this->FreeList = pFVar1->Next;
    pFVar1->Cursor = 0;
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x2010,0);
  pFVar1->Cursor = 0;
  return pFVar1;
}

// DebugBegin @ 14d39a280

void __thiscall UE::Trace::FPacketTransport::DebugBegin(FPacketTransport *this)

{
  return;
}

// DebugEnd @ 14d39a2b0

void __thiscall UE::Trace::FPacketTransport::DebugEnd(FPacketTransport *this)

{
  return;
}

// GetNextBatch @ 14d39cf30

bool __thiscall UE::Trace::FPacketTransport::GetNextBatch(FPacketTransport *this)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  FPacketNode *pFVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort uVar9;
  
  uVar9 = 0xffff;
  if (this->PendingList != (FPacketNode *)0x0) {
    uVar9 = this->PendingList->Serial;
  }
  while( true ) {
    plVar2 = (longlong *)this->_padding_;
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if (*(uint *)(plVar2 + 2) < uVar1 + 4) {
      uVar4 = 4;
      if (4 < *(uint *)(plVar2 + 1)) {
        uVar4 = (int)plVar2[1];
      }
      *(undefined4 *)(plVar2 + 1) = uVar4;
      return false;
    }
    puVar8 = (ushort *)((ulonglong)uVar1 + *plVar2);
    if (puVar8 == (ushort *)0x0) {
      return false;
    }
    uVar7 = *puVar8 & 0x7fff;
    if ((short)uVar7 <= (short)uVar9) {
      this->ActiveList = this->PendingList;
      this->PendingList = (FPacketNode *)0x0;
      return true;
    }
    uVar6 = (uint)puVar8[1];
    if (*(uint *)(plVar2 + 2) < uVar6 + uVar1) break;
    *(uint *)((longlong)plVar2 + 0xc) = uVar6 + uVar1;
    pFVar5 = this->FreeList;
    if (pFVar5 == (FPacketNode *)0x0) {
      pFVar5 = FMemory::Malloc(0x2010,0);
    }
    else {
      this->FreeList = pFVar5->Next;
    }
    pFVar5->Cursor = 0;
    pFVar5->Serial = uVar7;
    pFVar5->Next = this->PendingList;
    this->PendingList = pFVar5;
    uVar9 = uVar7;
    if (*puVar8 == uVar7) {
      uVar7 = puVar8[1];
      pFVar5->Size = uVar7 - 4;
      memcpy(pFVar5 + 1,puVar8 + 2,(ulonglong)(ushort)(uVar7 - 4));
    }
    else {
      iVar3 = Trace::Private::Decode(puVar8 + 3,puVar8[1] - 6,pFVar5 + 1,(uint)puVar8[2]);
      pFVar5->Size = (ushort)iVar3;
    }
  }
  if (uVar6 < *(uint *)(plVar2 + 1)) {
    uVar6 = *(uint *)(plVar2 + 1);
  }
  *(uint *)(plVar2 + 1) = uVar6;
  return false;
}

// GetPointerImpl @ 14d39d0c0

uchar * __thiscall UE::Trace::FPacketTransport::GetPointerImpl(FPacketTransport *this,uint param_1)

{
  FPacketNode *pFVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (this->ActiveList == (FPacketNode *)0x0) {
    bVar2 = GetNextBatch(this);
    if (!bVar2) {
      return (uchar *)0x0;
    }
  }
  pFVar1 = this->ActiveList;
  if ((uint)pFVar1->Size < pFVar1->Cursor + param_1) {
    this->ActiveList = pFVar1->Next;
    pFVar1->Next = this->FreeList;
    this->FreeList = pFVar1;
                    /* WARNING: Could not recover jumptable at 0x00014d39d124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (uchar *)(**(code **)(this->_padding_ + 0x28))(this,param_1);
    return puVar3;
  }
  return (uchar *)((longlong)&pFVar1[1].Next + (ulonglong)pFVar1->Cursor);
}

// IsEmpty @ 14d3a0600

bool __thiscall UE::Trace::FPacketTransport::IsEmpty(FPacketTransport *this)

{
  FPacketNode *pFVar1;
  
  pFVar1 = this->ActiveList;
  if ((pFVar1 != (FPacketNode *)0x0) && (pFVar1->Cursor + 1 <= (uint)pFVar1->Size)) {
    return false;
  }
  return true;
}

