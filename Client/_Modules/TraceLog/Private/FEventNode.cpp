// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 5

// Describe @ 14145d9a0

void __thiscall UE::Trace::Private::FEventNode::Describe(FEventNode *this)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uchar uVar5;
  uint uVar6;
  ulonglong uVar7;
  FEventInfo *pFVar8;
  int iVar9;
  ulonglong uVar10;
  FFieldDesc *pFVar11;
  uchar *puVar12;
  uint uVar13;
  FEventInfo *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar19;
  FEventInfo **ppFVar20;
  byte bVar21;
  FLogScope local_28;
  ulonglong uVar14;
  ulonglong uVar18;
  
  pFVar8 = this->Info;
  uVar10 = 0;
  uVar16 = 0;
  uVar13 = 0;
  uVar4 = pFVar8->Flags;
  uVar2 = pFVar8->FieldCount;
  iVar9 = (uint)(pFVar8->EventName).Length + (uint)(pFVar8->LoggerName).Length;
  if (uVar2 < 2) {
    uVar17 = uVar13;
    if (uVar2 == 0) goto LAB_14145da5b;
    pFVar11 = pFVar8->Fields;
    uVar19 = uVar10;
  }
  else {
    pFVar11 = pFVar8->Fields;
    uVar6 = (uVar2 - 2 >> 1) + 1;
    uVar7 = (ulonglong)uVar6;
    uVar19 = (ulonglong)uVar6 * 2;
    puVar12 = &pFVar11[1].NameSize;
    uVar14 = uVar10;
    uVar18 = uVar10;
    do {
      uVar13 = (int)uVar14 + (uint)puVar12[-0x18];
      uVar14 = (ulonglong)uVar13;
      uVar16 = (int)uVar18 + (uint)*puVar12;
      uVar18 = (ulonglong)uVar16;
      uVar7 = uVar7 - 1;
      puVar12 = puVar12 + 0x30;
    } while (uVar7 != 0);
    uVar17 = uVar16;
    if ((uint)uVar2 <= uVar6 * 2) goto LAB_14145da5b;
  }
  iVar9 = iVar9 + (uint)pFVar11[uVar19].NameSize;
  uVar17 = uVar16;
LAB_14145da5b:
  uVar16 = iVar9 + uVar17 + (uint)uVar2 * 8 + uVar13 + 7 & 0xfffffffe;
  FLogScope::EnterNoSync(&local_28,0,uVar16 + 2);
  local_28.Ptr[-2] = '\0';
  local_28.Ptr[-1] = '\0';
  *(short *)local_28.Ptr = (short)uVar16;
  *(ushort *)(local_28.Ptr + 2) = (ushort)this->Uid >> 1;
  local_28.Ptr[6] = (pFVar8->LoggerName).Length;
  local_28.Ptr[7] = (pFVar8->EventName).Length;
  local_28.Ptr[5] = '\0';
  uVar3 = this->Info->Flags;
  bVar21 = (uVar3 & 1) != 0;
  if ((bool)bVar21) {
    local_28.Ptr[5] = '\x01';
  }
  if ((uVar3 & 2) != 0) {
    bVar21 = bVar21 | 2;
    local_28.Ptr[5] = bVar21;
  }
  if ((uVar3 & 4) != 0) {
    bVar21 = bVar21 | 4;
    local_28.Ptr[5] = bVar21;
  }
  ppFVar20 = &this->Info;
  if ((uVar3 & 0x78) != 0) {
    local_28.Ptr[5] = bVar21 | 8;
  }
  local_28.Ptr[4] = (uchar)(*ppFVar20)->FieldCount;
  pFVar15 = *ppFVar20;
  uVar19 = uVar10;
  if (pFVar15->FieldCount != 0) {
    do {
      pFVar11 = pFVar15->Fields;
      if ((int)uVar19 == (uint)uVar2 - (uint)((uVar4 & 0x78) != 0)) {
        local_28.Ptr[uVar19 * 8 + 8] = '\x02';
        *(ushort *)(local_28.Ptr + uVar19 * 8 + 10) = pFVar11[uVar19].ValueOffset;
        uVar5 = pFVar11[uVar19].TypeInfo;
LAB_14145dba1:
        local_28.Ptr[uVar19 * 8 + 0xf] = uVar5;
      }
      else {
        if (pFVar11[uVar19].Reference == 0) {
          local_28.Ptr[uVar19 * 8 + 8] = '\0';
          *(ushort *)(local_28.Ptr + uVar19 * 8 + 10) = pFVar11[uVar19].ValueOffset;
          *(ushort *)(local_28.Ptr + uVar19 * 8 + 0xc) = pFVar11[uVar19].ValueSize;
          local_28.Ptr[uVar19 * 8 + 0xe] = pFVar11[uVar19].TypeInfo;
          uVar5 = pFVar11[uVar19].NameSize;
          goto LAB_14145dba1;
        }
        local_28.Ptr[uVar19 * 8 + 8] = '\x01';
        *(ushort *)(local_28.Ptr + uVar19 * 8 + 10) = pFVar11[uVar19].ValueOffset;
        local_28.Ptr[uVar19 * 8 + 0xe] = pFVar11[uVar19].TypeInfo;
        local_28.Ptr[uVar19 * 8 + 0xf] = pFVar11[uVar19].NameSize;
        *(ushort *)(local_28.Ptr + uVar19 * 8 + 0xc) = (ushort)pFVar11[uVar19].Reference >> 1;
      }
      pFVar15 = *ppFVar20;
      uVar16 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
    } while (uVar16 < pFVar15->FieldCount);
  }
  bVar21 = (pFVar8->LoggerName).Length;
  puVar12 = local_28.Ptr + (ulonglong)pFVar15->FieldCount * 8 + 8;
  memcpy(puVar12,(pFVar8->LoggerName).Ptr,(ulonglong)bVar21);
  bVar1 = (pFVar8->EventName).Length;
  memcpy(puVar12 + bVar21,(pFVar8->EventName).Ptr,(ulonglong)bVar1);
  pFVar8 = this->Info;
  puVar12 = puVar12 + (ulonglong)bVar21 + (ulonglong)bVar1;
  if (pFVar8->FieldCount != 0) {
    do {
      bVar21 = pFVar8->Fields[uVar10].NameSize;
      memcpy(puVar12,pFVar8->Fields[uVar10].Name,(ulonglong)bVar21);
      pFVar8 = this->Info;
      puVar12 = puVar12 + bVar21;
      uVar16 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar16;
    } while (uVar16 < pFVar8->FieldCount);
  }
  (local_28.Buffer)->Committed = (local_28.Buffer)->Cursor;
  return;
}

// Initialize @ 14145f300

uint __thiscall UE::Trace::Private::FEventNode::Initialize(FEventNode *this,FEventInfo *param_1)

{
  FEventNode *pFVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = this->Uid;
  if (uVar2 == 0) {
    Writer_InternalInitialize();
    LOCK();
    UNLOCK();
    uVar2 = EventUidCounter + 0x10;
    if (0x7ffe < uVar2) {
      EventUidCounter = EventUidCounter + 1;
      this->Uid = 0x7fff;
      return 0x7fff;
    }
    EventUidCounter = EventUidCounter + 1;
    this->Info = param_1;
    this->Uid = (uint)(ushort)((short)uVar2 * 2) | (uint)(0x7f < uVar2);
    do {
      pFVar1 = GNewEventList;
      this->Next = GNewEventList;
      LOCK();
      bVar3 = pFVar1 != GNewEventList;
      pFVar1 = this;
      if (bVar3) {
        pFVar1 = GNewEventList;
      }
      GNewEventList = pFVar1;
      UNLOCK();
    } while (bVar3);
    uVar2 = this->Uid;
  }
  return uVar2;
}

// OnConnect @ 14146a170

void __cdecl UE::Trace::Private::FEventNode::OnConnect(void)

{
  FEventNode *pFVar1;
  
  pFVar1 = GNewEventList;
  if (GEventListHead != (FEventNode *)0x0) {
    LOCK();
    GNewEventList = GEventListHead;
    UNLOCK();
    GEventListTail->Next = pFVar1;
    GEventListTail = (FEventNode *)0x0;
    GEventListHead = (FEventNode *)0x0;
  }
  return;
}

// Read @ 14146a270

FIter __cdecl UE::Trace::Private::FEventNode::Read(void)

{
  FIter FVar1;
  
  FVar1.Inner = GEventListHead;
  if ((GEventListHead == (FEventNode *)0x0) &&
     (FVar1.Inner = (void *)0x0, GNewEventList != (FEventNode *)0x0)) {
    return (FIter)GNewEventList;
  }
  return (FIter)FVar1.Inner;
}

// ReadNew @ 14146a2f0

FIter __cdecl UE::Trace::Private::FEventNode::ReadNew(void)

{
  FIter FVar1;
  
  FVar1.Inner = GNewEventList;
  LOCK();
  GNewEventList = (FEventNode *)0x0;
  UNLOCK();
  if (FVar1.Inner == (FEventNode *)0x0) {
    return (FIter)FVar1.Inner;
  }
  if (GEventListHead == (FEventNode *)0x0) {
    GEventListHead = FVar1.Inner;
    return (FIter)FVar1.Inner;
  }
  GEventListTail->Next = FVar1.Inner;
  return (FIter)FVar1.Inner;
}

